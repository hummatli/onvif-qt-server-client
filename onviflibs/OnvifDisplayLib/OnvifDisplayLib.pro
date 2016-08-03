#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifDisplayLib
TEMPLATE = lib


SOURCES += \
    onvif/display.cpp \
    onvif/displayserviceimplement.cpp \
    soap/stdsoap2.cpp \
    soap/onvifdisplayC.cpp \
    soap/onvifdisplayDisplayBindingService.cpp \
    soap/onvifdisplayDisplayBindingProxy.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/display.h \
    onvif/displayservice.h \
    onvif/displayserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifdisplayH.h \
    soap/onvifdisplayStub.h \
    soap/onvifdisplayDisplayBindingService.h \
    soap/onvifdisplayDisplayBindingProxy.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
