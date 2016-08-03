#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifVideoAnalyticsDeviceLib
TEMPLATE = lib


SOURCES += \
    onvif/videoanalyticsdevice.cpp \
    onvif/videoanalyticsdeviceserviceimplement.cpp \
    soap/stdsoap2.cpp \
    soap/onvifvideoanalyticsdeviceC.cpp \
    soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingProxy.cpp \
    soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingService.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/videoanalyticsdevice.h \
    onvif/videoanalyticsdeviceservice.h \
    onvif/videoanalyticsdeviceserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifvideoanalyticsdeviceH.h \
    soap/onvifvideoanalyticsdeviceStub.h \
    soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingProxy.h \
    soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingService.h \
    soap/duration.h

win32 {
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
