/*
 * Cell.h
 *
 *  Created on: Mar 27, 2017
 *      Author: maxrona
 */

#ifndef CELL_H_
#define CELL_H_

#include <memory>

namespace project {

/*
 * Represents a Cell in a game of Minesweeper. Each cell stores
 * an integer value that represents if it is a mine, or how many
 * mines are around it. A cell also stores references to it's
 * neighbors. A cell can be flagged and/or revealed.
 */
class Cell {

public:
	/* Construct a new cell with the given coordinates*/
	Cell(/*The X Coordinate*/int x,
	/*The Y coordinate*/int y);

	/*
	 * Cell destructor
	 */
	~Cell();

	/*Get the cell to the left of this one*/
	std::shared_ptr<Cell> left();

	/*Get the cell to the right this one*/
	std::shared_ptr<Cell> right();

	/*Get the cell above this one*/
	std::shared_ptr<Cell> top();

	/*Get the cell below this one*/
	std::shared_ptr<Cell> bottom();

	/*Get the cell to the left of this one*/
	void setLeft(/*A pointer to a cell*/
			std::shared_ptr<Cell> cell);

	/*Get the cell to the right this one*/
	void setRight(/*A pointer to a cell*/
			std::shared_ptr<Cell> cell);

	/*Get the cell above this one*/
	void setTop(/*A pointer to a cell*/
			std::shared_ptr<Cell> cell);

	/*Get the cell below this one*/
	void setBottom(/*A pointer to a cell*/
			std::shared_ptr<Cell> cell);

	/*Get the value of this cell*/
	int value() const noexcept;

	/*Reveal this cell and return if a mine is found*/
	bool reveal();

	/*Flag this cell*/
	void flag();

	/*
	 * Count the number of mines in cells around
	 * this one and set its value to the number of mines
	 */
	void setValue();

	/*
	 * Set this value to the given value
	 */
	void setValue(/* The Cell value*/int value);

private:

	/*
	 * X Coordinate
	 */
	const int x_;

	/*
	 * Y Coordinate
	 */
	const int y_;

	/*
	 * The value of this cell.
	 * 0-8 for number of surrounding mines
	 * or -1 if this is a mine
	 */
	int value_;

	/*Has this cell been revealed?*/
	bool revealed_;

	/*Has this cell been flagged*/
	bool flagged_;

	/*A pointer to the cell above this cell*/
	std::shared_ptr<Cell> top_;

	/*A pointer to the cell below this cell*/
	std::shared_ptr<Cell> bottom_;

	/*A pointer to the cell to the left of this cell*/
	std::shared_ptr<Cell> left_;

	/*A pointer to the cell to the right of this cell*/
	std::shared_ptr<Cell> right_;
};
}

#endif /* CELL_H_ */
