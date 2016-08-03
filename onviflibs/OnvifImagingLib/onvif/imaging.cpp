#include "imaging.h"
#include <QDebug>
#include <QObject>
#include <QString>
//#include "soap/onvifreceiver.nsmap"
#include "soap/onvifimagingImagingBindingProxy.h"

Imaging::Imaging()
{

}

Imaging::~Imaging()
{

}
int  Imaging::getGetServiceCapabilities(QString serviceURL) {

    qDebug() << "imaging service test: getGetServiceCapabilities";

    ImagingBindingProxy p;

    _imagingws__GetServiceCapabilities in;
    _imagingws__GetServiceCapabilitiesResponse out;

    if (p.GetServiceCapabilities(serviceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        imagingws__Capabilities*   cap = out.Capabilities;

        qDebug() << "Imaging service cap->ImageStabilization = "; //<< *(cap->ImageStabilization);


    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return 0;
}


