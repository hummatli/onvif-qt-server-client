####### This is the input file for automake, which will generate Makefile.in ##########
## not a GNU package. You can remove this line, if
## you have all needed files, that a GNU package needs
AUTOMAKE_OPTIONS = subdir-objects foreign 1.4

noinst_PROGRAMS = xml-rpc-currentTime xml-rpc-weblogs
SOAPHEADER = xml-rpc.h

include ../Makefile.defines
include ../Makefile.c_rules
SOAP_NS = $(SOAP_NS_DEF)

xml_rpc_currentTime_SOURCES = xml-rpc-currentTime.c $(SOAPHEADER) $(SOAP_C_CORE)
xml_rpc_weblogs_SOURCES = xml-rpc-weblogs.c $(SOAPHEADER) $(SOAP_C_CORE)

