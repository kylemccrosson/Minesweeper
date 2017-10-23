/*
 * ButtonRequest.h
 *
 *  Created on: Apr 3, 2017
 *      Author: maxrona
 */

#ifndef BUTTONREQUEST_H_
#define BUTTONREQUEST_H_

#include <string>
#include "Request.h"

namespace project {

class ButtonRequest : public Request {

public:

	ButtonRequest(const std::string& button);

	~ButtonRequest();

	bool buttonPressed() const noexcept;

	std::string button() const noexcept;


private:
	std::string button_;

};

}



#endif /* BUTTONREQUEST_H_ */
