####### This is the input file for automake, which will generate Makefile.in ##########
## not a GNU package. You can remove this line, if
## you have all needed files, that a GNU package needs
AUTOMAKE_OPTIONS = foreign 1.4

noinst_PROGRAMS = wssedemo wsselite
SOAPHEADER = wssedemo.h

include ../Makefile.defines
include ../Makefile.c_rules
SOAP_NS = wssedemo.nsmap

wssedemo_CFLAGS = -DWITH_DOM -DWITH_OPENSSL -DWITH_GZIP
wssedemo_SOURCES = wssedemo.c $(SOAPHEADER) $(SOAP_C_SRC) ../../stdsoap2.c ../../dom.c ../../plugin/wsseapi.c ../../plugin/smdevp.c ../../plugin/mecevp.c
wssedemo_LDADD = $(SAMPLE_EXTRA_LIBS) -lssl -lcrypto -lz

wsselite_SOURCES = wsselite.c $(SOAPHEADER) $(SOAP_C_SRC) ../../stdsoap2.c ../../plugin/wsseapi-lite.c
wsselite_LDADD = $(SAMPLE_EXTRA_LIBS)

