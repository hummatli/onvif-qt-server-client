#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist

TARGET = OnvifAnalyticsLib
TEMPLATE = lib


SOURCES += \
    onvif/analyticsserviceimplement.cpp \
    onvif/analytics.cpp \
    soap/stdsoap2.cpp \
    soap/onvifanalyticsC.cpp \
    soap/onvifanalyticsRuleEngineBindingProxy.cpp \
    soap/onvifanalyticsRuleEngineBindingService.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/analytics.h \
    onvif/analyticsservice.h \
    onvif/analyticsserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifanlayticsH.h \
    soap/onvifanlayticsStub.h \
    soap/onvifanalyticsRuleEngineBindingProxy.h \
    soap/onvifanalyticsRuleEngineBindingService.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
