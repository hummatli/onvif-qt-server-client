####### This is the input file for automake, which will generate Makefile.in ##########
## not a GNU package. You can remove this line, if
## you have all needed files, that a GNU package needs
AUTOMAKE_OPTIONS = subdir-objects foreign 1.4

noinst_PROGRAMS = googleapi
SOAPHEADER = googleapi.h

include ../Makefile.defines
include ../Makefile.c_rules
SOAP_NS = googleapi.nsmap googleapi.wsdl

googleapi_SOURCES = googleapi.c $(SOAPHEADER) $(SOAP_C_CLIENT)
googleapi_LDADD = $(SOAP_C_LIB) $(SAMPLE_EXTRA_LIBS)

