#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist

TARGET = OnvifReplayControlLib
TEMPLATE = lib


SOURCES += \
    onvif/replaycontrol.cpp \
    onvif/replaycontrolserviceimplement.cpp \
    soap/stdsoap2.cpp \
    soap/onvifreplaycontrolC.cpp \
    soap/onvifreplaycontrolReplayBindingProxy.cpp \
    soap/onvifreplaycontrolReplayBindingService.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/replaycontrol.h \
    onvif/replaycontrolservice.h \
    onvif/replaycontrolserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifreplaycontrolH.h \
    soap/onvifreplaycontrolStub.h \
    soap/onvifreplaycontrolReplayBindingProxy.h \
    soap/onvifreplaycontrolReplayBindingService.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
