/*
 * Minesweeper.h
 *
 *  Created on: Mar 27, 2017
 *      Author: maxrona
 */

#ifndef MINESWEEPER_H_
#define MINESWEEPER_H_

#include <vector>
#include <map>
#include "Cell.h"
#include "GameState.h"

namespace project{

/*
 * Represents a game of minesweeper.
 */
class Minesweeper {

public:

	/*
	 * Create a new Minesweeper game
	 */
	Minesweeper();

	/*
	 * A Destructor for a Minesweeper object
	 */
	~Minesweeper();

	/*
	 * Start a new game with the given size
	 */
	void newGame(/*Size of the game (1-small, 2-medium, 3-large)*/
			int size);

	/*
	 * Click the cell at the given location
	 */
	void clickCell(/*The X Coordinate*/ int x,
			/*The Y coordinate*/int y);

	/*
	 * Flag the cell at the given location
	 */
	void flagCell(/*The X Coordinate*/ int x,
			/*The Y coordinate*/int y);

	/*
	 * Get the current Game State (In Progress, Win, or Loss)
	 */
	GameState getGameState() const noexcept;

	/*
	 * Get a vector of all the cells in the game
	 */
	std::vector<std::shared_ptr<Cell>> getCells();

private:

	/*
	 * A map of locations to cells
	 */
	std::map<std::pair<int,int>, std::shared_ptr<Cell>> cells_;

	/*
	 * The current game state
	 */
	GameState gameState_;
};
}



#endif /* MINESWEEPER_H_ */
