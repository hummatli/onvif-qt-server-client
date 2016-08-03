#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../../OnvifDist

TARGET = OnvifEventLib
TEMPLATE = lib


SOURCES += \
    onvif/event.cpp \
    onvif/eventserviceimplement.cpp \
    soap/onvifeventC.cpp \
    soap/onvifeventPullPointSubscriptionBindingProxy.cpp \
    soap/onvifeventPullPointSubscriptionBindingService.cpp \
    soap/stdsoap2.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/event.h \
    onvif/eventservice.h \
    onvif/eventserviceextabst.h \
    soap/onvifeventH.h \
    soap/onvifeventStub.h \
    soap/onvifeventPullPointSubscriptionBindingProxy.h \
    soap/onvifeventPullPointSubscriptionBindingService.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
