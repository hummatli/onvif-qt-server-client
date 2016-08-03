#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifDeviceIOLib
TEMPLATE = lib


SOURCES += \
    onvif/deviceioserviceimplement.cpp \
    #onvif/deviceio.cpp \
    soap/stdsoap2.cpp \
    soap/onvifdeviceioC.cpp \
    soap/onvifdeviceioDeviceIOBindingProxy.cpp \
    soap/onvifdeviceioDeviceIOBindingService.cpp \
#    soap/onvifdeviceioDeviceBindingProxy.cpp \
#    soap/onvifdeviceioDeviceBindingService.cpp \
    soap/duration.cpp

HEADERS  += \
    #onvif/deviceio.h \
    onvif/deviceioservice.h \
    onvif/deviceioserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifdeviceioH.h \
    soap/onvifdeviceioStub.h \
    soap/onvifdeviceioDeviceIOBindingProxy.h \
    soap/onvifdeviceioDeviceIOBindingService.h \
#    soap/onvifdeviceioDeviceBindingProxy.h \
#    soap/onvifdeviceioDeviceBindingService.h \
    soap/duration.h

win32 {
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
