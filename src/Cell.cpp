#include "Cell.h"

using namespace std;
using namespace project;

Cell::Cell(int x, int y) :
		x_(x), y_(y), value_(0), revealed_(false), flagged_(false) {
}

Cell::~Cell() {
}

shared_ptr<Cell> Cell::left() {
	return left_;
}

shared_ptr<Cell> Cell::right() {
	return right_;
}

shared_ptr<Cell> Cell::top() {
	return top_;
}

shared_ptr<Cell> Cell::bottom() {
	return bottom_;
}

void Cell::setLeft(std::shared_ptr<Cell> cell) {
	left_ = cell;
}

void Cell::setRight(std::shared_ptr<Cell> cell) {
	right_ = cell;
}

void Cell::setTop(std::shared_ptr<Cell> cell) {
	top_ = cell;
}

void Cell::setBottom(std::shared_ptr<Cell> cell) {
	bottom_ = cell;
}

int Cell::value() const noexcept {
	return value_;
}

bool Cell::reveal() {
	// If the cell is already revealed, return false
	if (revealed_) {
		return false;
	}

	// reveal this cell
	revealed_ = true;

	// if this cell is a mine, return true
	if (value_ == -1) {
		return true;
	}

	// if this cell is adjacent to no mines, recur on it's neighbors
	if (value_ == 0) {
		top_->reveal();
		bottom_->reveal();
		left_->reveal();
		right_->reveal();
		top_->left()->reveal();
		top_->right()->reveal();
		bottom_->left()->reveal();
		bottom_->right()->reveal();
	}

	// return that no mine was found
	return false;
}

void Cell::flag() {
	flagged_ = true;
}

void Cell::setValue() {

	// If this is a mine, leave this cell alone
	if (value_ == -1) {
		return;
	}

	// Start a mine counter at 0
	int value = 0;

	// Check for mines at each neighbor, and increment if one is found

	if (top_->value() == -1) {
		value++;
	}

	if (bottom_->value() == -1) {
		value++;
	}

	if (left_->value() == -1) {
		value++;
	}

	if (right_->value() == -1) {
		value++;
	}

	if (top_->left()->value() == -1) {
		value++;
	}

	if (top_->right()->value() == -1) {
		value++;
	}

	if (bottom_->right()->value() == -1) {
		value++;
	}

	if (bottom_->right()->value() == -1) {
		value++;
	}

	// set the new value
	value_ = value;
}

void Cell::setValue(int value) {
	value_ = value;
}
