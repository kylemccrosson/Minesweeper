#include "Request.h"
#include "NoRequest.h"

using namespace std;
using namespace project;

NoRequest::NoRequest()
:Request(false){}

NoRequest::~NoRequest() {}
