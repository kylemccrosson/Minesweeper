#include <SDL2/SDL.h>
#include <iostream>

#include "Cell.h"
#include "Minesweeper.h"
#include "MinesweeperDisplay.h"
#include "Request.h"
#include "NoRequest.h"
#include "QuitRequest.h"
#include "ButtonRequest.h"
#include "MouseRequest.h"

using namespace std;
using namespace project;

MinesweeperDisplay::MinesweeperDisplay(shared_ptr<Minesweeper>& minesweeper)
:minesweeper_(minesweeper){

}

MinesweeperDisplay::~MinesweeperDisplay() {
	cout << "Deleting Display" << endl;
}

Request MinesweeperDisplay::getNextRequest() noexcept{

	SDL_Event event;

	while (SDL_PollEvent(&event) != 0) {
		switch (event.type) {
	    case SDL_QUIT:
	    	close();
	    	return QuitRequest();
	    case SDL_MOUSEBUTTONUP:
	    	if (event.button.button == SDL_BUTTON_LEFT) {
	    		return MouseRequest(event.button.x, event.button.y, true);
	    	} else {
	    		return MouseRequest(event.button.x, event.button.y, false);
	    	}
	    	break;
	    case SDL_KEYUP:
	    	switch(event.key.keysym.sym) {
	    	case SDLK_1:
	    		return ButtonRequest("1");
	    	case SDLK_2:
				return ButtonRequest("2");
	    	case SDLK_3:
	    		return ButtonRequest("3");
	    	default:
	    		break;
	    	}
	    	break;
	    default:
	    	break;
	    }
	  }
	  return NoRequest();
}
