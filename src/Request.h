/*
 * ReleventEvent.h
 *
 *  Created on: Apr 3, 2017
 *      Author: maxrona
 */

#ifndef REQUEST_H_
#define REQUEST_H_

#include <string>

namespace project {

class Request {

public:

	Request(bool isValid);

	~Request();

	bool isValid() const noexcept;

	bool shouldQuit() const noexcept;

	bool mouseClicked() const noexcept;

	int mouseX() const noexcept;

	int mouseY() const noexcept;

	bool leftClick() const noexcept;

	bool buttonPressed() const noexcept;

	std::string button() const noexcept;

private:

	bool isValid_;
};

}


#endif /* REQUEST_H_ */
