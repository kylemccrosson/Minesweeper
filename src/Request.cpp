#include "Request.h"

using namespace std;
using namespace project;

bool Request::isValid() const noexcept {
	return isValid_;
}

bool Request::shouldQuit() const noexcept {
	return false;
}

bool Request::mouseClicked() const noexcept {
	return false;
}

int Request::mouseX() const noexcept {
	return 0;
}

int Request::mouseY() const noexcept {
	return 0;
}

bool Request::leftClick() const noexcept {
	return false;
}


bool Request::buttonPressed() const noexcept {
	return false;
}

std::string Request::button() const noexcept {
	return "";
}
