
OVERVIEW

This directory contains custom serializers for common data types.

CONTENTS

Custom serializers replace the soapcpp2-generated serialization routines.
See the notes in the source files on specific usage.

The following serializers are available:

long_double.*		Serializes long double (extended double) type
struct_tm.*		Serializes <time.h> struct tm
struct_timeval.*	Serializes struct timeval (precision in usec)
duration.*		Serializes LONG64 values as xsd:duration

USAGE

To use a custom serializer add an import statement to your gSOAP header file:

#import "struct_tm.h"

This replaces time_t for xsd__dateTime by struct tm. You can use xsd__dateTime
as XML elements and attributes:

struct ns__example
{ @xsd__dateTime start; // attribute
  xsd__dateTime end;    // element
};

Then compile with soapcpp2 and cc and link struct_tm.c

HOW TO MODIFY TYPEMAP.DAT TO AUTOMATE THE MAPPING TO A CUSTOM TYPE WITH WSDL2H

The mapping is specified in typemap.dat as follows:

xsd__dateTime = #import "custom/struct_tm.h"

which maps xsd:dateTime to struct tm when wsdl2h is applied to a WSDL.

xsd__decimal = #import "custom/long_double.h" | long double

this maps xsd:decimal to long double (the column after | specifies usage).

IMPLEMENTING YOUR OWN CUSTOM SERIALIZERS

To build your own custom serializers: a custom serializer is typically declared
in the imported file as follows

extern typedef Type X;

To implement custom serializers you should implement the following routines:

void soap_default_X(struct soap*, X*);
	sets default values for X
void soap_serialize_X(struct soap*, const X*);
	analyzes X for id-ref serialization (maybe empty)
int soap_out_X(struct soap*, const char *tag, int id, const X*, const char *type);
	emits X in XML as <tag xsi:type=type> (type is optional)
X *soap_in_X(struct soap*, const char *tag, X*, const char *type);
	parses X from XML as <tag xsi:type=type>

To support XML attribute serialization, you should also define:

int soap_s2X(struct soap*, const char *value, X*);
	converts string to X and returns SOAP_OK
const char *soap_X2s(struct soap*, X);
	converts X to string (or NULL when error)
