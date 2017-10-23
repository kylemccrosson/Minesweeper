#include "Minesweeper.h"
#include "Cell.h"
#include "GameState.h"

using namespace std;
using namespace project;

Minesweeper::Minesweeper()
:gameState_(){
	newGame(1);
}

Minesweeper::~Minesweeper() {

}

void Minesweeper::newGame(int size) {

}

void Minesweeper::clickCell(int x, int y) {
	cells_.at(pair<int, int>(x,y))->reveal();
}

void Minesweeper::flagCell(int x, int y) {
	cells_.at(pair<int, int>(x,y))->flag();
}

GameState Minesweeper::getGameState() const noexcept{
	return gameState_;
}

vector<shared_ptr<Cell>> Minesweeper::getCells() {
	vector<shared_ptr<Cell>> cellVector;
	for(auto cell = cells_.begin(); cell < cells_.end();) {
		cellVector.push_back(cell);
	}
	return cellVector;
}
