/*
 * ButtonRequest.h
 *
 *  Created on: Apr 3, 2017
 *      Author: maxrona
 */

#ifndef MOUSEREQUEST_H_
#define MOUSEREQUEST_H_

#include "Request.h"
#include "Minesweeper.h"
#include "Cell.h"
#include "MinesweeperDisplay.h"

namespace project {

class MouseRequest : public Request {

public:

	MouseRequest(int x, int y, bool left);

	~MouseRequest();

	bool mouseClicked() const noexcept;

	int buttonX() const noexcept;

	int buttonY() const noexcept;

	bool leftClick() const noexcept;

private:

	int x_;
	int y_;
	bool left_;
};

}
#endif /* MOUSEREQUEST_H_ */
