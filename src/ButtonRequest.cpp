#include "ButtonRequest.h"
#include "Request.h"

using namespace std;
using namespace project;

ButtonRequest::ButtonRequest(const string& button)
:Request(true), button_(button){}

ButtonRequest::~ButtonRequest() {}

bool ButtonRequest::buttonPressed() const noexcept {
	return true;
}

string ButtonRequest::button() const noexcept {
	return button_;
}
