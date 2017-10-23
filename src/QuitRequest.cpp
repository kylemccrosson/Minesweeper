#include "Request.h"
#include "QuitRequest.h"

using namespace std;
using namespace project;

QuitRequest::QuitRequest()
:Request(true){}

QuitRequest::~QuitRequest() {}

bool QuitRequest::shouldQuit() const noexcept {
	return true;
}
