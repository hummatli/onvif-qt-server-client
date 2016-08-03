#include "display.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifdisplay.nsmap"
#include "soap/onvifdisplayDisplayBindingProxy.h"

Display::Display()
{

}

Display::~Display()
{

}
void Display::getGetServiceCapabilities(QString devServiceURL) {

    qDebug() << "Event service test: getGetServiceCapabilities";

    DisplayBindingProxy d;

    _displayws__GetServiceCapabilities in;
    _displayws__GetServiceCapabilitiesResponse out;

    if (d.GetServiceCapabilities(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        if(out.Capabilities != NULL){
            qDebug() << out.Capabilities->FixedLayout;
            //qDebug() << out.Capabilities->MaxPullPoints;
            //qDebug() << out.Capabilities->PersistentNotificationStorage;
        }

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}
