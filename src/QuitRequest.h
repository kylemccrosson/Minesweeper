/*
 * QuitRequest.h
 *
 *  Created on: Apr 3, 2017
 *      Author: maxrona
 */

#ifndef QUITREQUEST_H_
#define QUITREQUEST_H_

#include "Minesweeper.h"
#include "Cell.h"
#include "MinesweeperDisplay.h"
#include "Request.h"

namespace project {

class QuitRequest : public Request {

public:

	QuitRequest();

	~QuitRequest();

	bool shouldQuit() const noexcept;

};

}

#endif /* QUITREQUEST_H_ */
