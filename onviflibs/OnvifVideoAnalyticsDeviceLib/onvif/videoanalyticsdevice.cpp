#include "videoanalyticsdevice.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifvideoanalyticsdevice.nsmap"
#include "soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingProxy.h"

VideoAnalyticsDevice::VideoAnalyticsDevice()
{

}

VideoAnalyticsDevice::~VideoAnalyticsDevice()
{

}
void VideoAnalyticsDevice::getGetServiceCapabilities(QString devServiceURL) {

    qDebug() << "Analytics service test: getGetServiceCapabilities";

    AnalyticsDeviceBindingProxy d;

    _videoanalyticsdevicews__GetServiceCapabilities in;
    _videoanalyticsdevicews__GetServiceCapabilitiesResponse out;

    if (d.GetServiceCapabilities(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        if(out.Capabilities != NULL){
            qDebug() << out.Capabilities->__anyAttribute;
//            qDebug() << out.Capabilities->CellBasedSceneDescriptionSupported;
//            qDebug() << out.Capabilities->RuleSupport;
        }

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}


