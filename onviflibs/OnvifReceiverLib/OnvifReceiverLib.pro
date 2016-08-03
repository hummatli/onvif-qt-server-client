#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist

TARGET = OnvifReceiverLib
TEMPLATE = lib


SOURCES += \
    onvif/receiverserviceimplement.cpp \
    onvif/receiver.cpp \
    soap/stdsoap2.cpp \
    soap/onvifreceiverC.cpp \
    soap/onvifreceiverReceiverBindingProxy.cpp \
    soap/onvifreceiverReceiverBindingService.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/receiverservice.h \
    onvif/receiverserviceextabst.h \
    onvif/receiver.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifreceiverH.h \
    soap/onvifreceiverStub.h \
    soap/onvifreceiverReceiverBindingProxy.h \
    soap/onvifreceiverReceiverBindingService.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
