#include "soapH.h"
#include "h.nsmap"
int main() { char *s; soap_call_h__hello(soap_new(), "http://www.cs.fsu.edu/~engelen/hellolitserver.cgi", "", s); return !printf("%s\n", s); }

