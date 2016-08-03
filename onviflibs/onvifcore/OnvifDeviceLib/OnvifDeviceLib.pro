#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../../OnvifDist

TARGET = OnvifDeviceLib
TEMPLATE = lib


SOURCES += \
    soap/onvifdeviceC.cpp \
    soap/onvifdeviceDeviceBindingProxy.cpp \
    soap/onvifdeviceDeviceBindingService.cpp \
    soap/stdsoap2.cpp \
    soap/duration.cpp \
    onvif/device.cpp \
    onvif/deviceserviceimplement.cpp

HEADERS  += \
    soap/onvifdeviceH.h \
    soap/onvifdeviceStub.h \
    soap/onvifdeviceDeviceBindingProxy.h \
    soap/onvifdeviceDeviceBindingService.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/duration.h\
    onvif/deviceserviceextabst.h \
    onvif/device.h \
    onvif/deviceservice.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
