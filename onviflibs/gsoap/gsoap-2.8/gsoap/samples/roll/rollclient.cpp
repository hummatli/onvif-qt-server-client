#include "soapH.h"
#include "r.nsmap"
int main() { int d; soap_call_r__roll(soap_new(), "http://www.cs.fsu.edu/~engelen/rolllitserver.cgi", "", d); return !printf("%d\n", d); }

