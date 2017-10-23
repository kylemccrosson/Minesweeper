#include <SDL2/SDL.h>
#include <memory>
#include <iostream>

#include "Minesweeper.h"
#include "Cell.h"
#include "MinesweeperDisplay.h"
#include "Request.h"

using namespace std;
using namespace project;

/**
 * Plays Minesweeper
 */
int main() {
	cout << "Hey IM RUNNING";
	try {

		// Create a new minesweeper game, and a pointer to it
		auto minesweeper = make_shared<Minesweeper>();

		// Create a new display with the given minesweeper game
		MinesweeperDisplay display(minesweeper);

		// Until the end of time (or a quit)
		for (;;) {
			// Wait for the next request
			Request request = display.getNextRequest();

			// If the request is valid, handle it, if not, break
			if (request.isValid()) {
				// For a quit request, quit
				if (request.shouldQuit()) {
					cout << "Game was quit" << endl;
					return 0;
				}

				// If the mouse is clicked
				else if (request.mouseClicked()) {
					// For a left click, click the cell at those coordinates
					if (request.leftClick()) {
						minesweeper->clickCell(request.mouseX(),
								request.mouseY());
					}

					// For a right click, flag the cell at the coordinate
					else {
						minesweeper->flagCell(request.mouseX(),
								request.mouseY());
					}
				}

				// If a button is pressed, make a new game with the inputted size
				else if (request.buttonPressed()){
					int size = std::stoi(request.button());
					minesweeper->newGame(size);
				} else {
					break;
				}
			} else {
				break;
			}
		}
	}
	// Catch errors and report them
	catch (const exception& e) {
		cout << e.what() << endl;
		return 1;
	}

}
