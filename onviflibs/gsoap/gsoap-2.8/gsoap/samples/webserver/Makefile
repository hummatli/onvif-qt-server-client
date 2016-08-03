GSOAP=../../src/soapcpp2
SOAPH=../../stdsoap2.h
SOAPC=../../stdsoap2.c
SOAPCPP=../../stdsoap2.cpp
SOAPDOMC=../../dom.c
SOAPDOMCPP=../../dom.cpp
CC=gcc
CPP=g++
LIBS=-lpthread -lz -lssl -lcrypto
COFLAGS=-O2
CWFLAGS=-Wall -Wno-deprecated-declarations
CIFLAGS=-I../.. -I../../plugin
CMFLAGS=-DWITH_COOKIES -DWITH_GZIP -DWITH_OPENSSL 
CFLAGS= $(CWFLAGS) $(COFLAGS) $(CIFLAGS) $(CMFLAGS)
all:		webserver
webserver:	webserver.h webserver.c logging.o httpget.o httpform.o httpda.o md5evp.o threads.o options.o $(SOAPH) $(SOAPC)
		$(GSOAP) -c -L webserver.h
		$(CC) $(CFLAGS) -o webserver webserver.c logging.o httpget.o httpform.o httpda.o md5evp.o threads.o options.o soapC.c soapClient.c soapServer.c $(SOAPC) $(LIBS)
options.o:	opt.h options.h options.c
		$(GSOAP) -cnpopt opt.h
		$(CC) $(CFLAGS) -c options.c
logging.o:	../../plugin/logging.h ../../plugin/logging.c
		$(CC) $(CFLAGS) -c ../../plugin/logging.c
httpget.o:      ../../plugin/httpget.h ../../plugin/httpget.c
		$(CC) $(CFLAGS) -c ../../plugin/httpget.c
httpform.o:	../../plugin/httpform.h ../../plugin/httpform.c
		$(CC) $(CFLAGS) -c ../../plugin/httpform.c
httpda.o:	../../plugin/httpda.h ../../plugin/httpda.c
		$(CC) $(CFLAGS) -c ../../plugin/httpda.c
md5evp.o:	../../plugin/md5evp.h ../../plugin/md5evp.c
		$(CC) $(CFLAGS) -c ../../plugin/md5evp.c
threads.o:	../../plugin/threads.h ../../plugin/threads.c
		$(CC) $(CFLAGS) -c ../../plugin/threads.c
.PHONY: clean distclean
clean:
		rm -f *.o soapH.h soapStub.h soapC.c soapClient.c soapServer.c soapClientLib.c soapServerLib.c
distclean:
		rm -f *.o soapH.h soapStub.h soapC.c soapClient.c soapServer.c soapClientLib.c soapServerLib.c
		rm -f *.wsdl *.xsd *.xml *.nsmap *.log
		rm -f webserver
