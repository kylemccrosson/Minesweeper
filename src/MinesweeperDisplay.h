#include <memory>

#ifndef MINESWEEPERDISPLAY_H_
#define MINESWEEPERDISPLAY_H_

#include "Request.h"

namespace project {

/*
 * Displays a given Minesweeper game. All updates to
 * the game are reflected in the display
 */
class MinesweeperDisplay {

public:

	/*
	 * Create a new Minesweeper display to display the given game
	 */
	MinesweeperDisplay(/*A pointer to the game to display*/
			std::shared_ptr<Minesweeper> minesweeper);

	/*
	 * Minesweeper display destructor
	 */
	~MinesweeperDisplay();

	/*
	 * Close the display
	 */
	void close();

	/*
	 * Wait for the next request and return it
	 */
	Request getNextRequest() noexcept;

	/*
	 * Refresh the display
	 */
	void refresh();

private:
	/*
	 * A pointer to a minesweeper game to display
	 */
	std::shared_ptr<Minesweeper> minesweeper_;
};
}



#endif /* MINESWEEPERDISPLAY_H_ */
