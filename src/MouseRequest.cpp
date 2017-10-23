#include "MouseRequest.h"
#include "Request.h"

using namespace std;
using namespace project;

MouseRequest::MouseRequest(int x, int y, bool left)
:Request(true), x_(x), y_(y), left_(left){}

MouseRequest::~MouseRequest() {}

bool MouseRequest::mouseClicked() const noexcept {
	return true;
}

int MouseRequest::buttonX() const noexcept {
	return x_;
}

int MouseRequest::buttonY() const noexcept {
	return y_;
}

bool MouseRequest::leftClick() const noexcept {
	return left_;
}
