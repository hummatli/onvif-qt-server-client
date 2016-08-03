#include "event.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifeventPullPointSubscriptionBindingProxy.h"
#include "soap/onvifevent.nsmap"


Event::Event()
{

}

Event::~Event()
{

}


void Event::getGetServiceCapabilities(QString devServiceURL) {

    qDebug() << "Event service test: getGetServiceCapabilities";

    PullPointSubscriptionBindingProxy d;

    _eventws__GetServiceCapabilities in;
    _eventws__GetServiceCapabilitiesResponse out;

    if (d.GetServiceCapabilities(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        if(out.Capabilities != NULL){
            qDebug() << out.Capabilities->MaxNotificationProducers;
            qDebug() << out.Capabilities->MaxPullPoints;
            qDebug() << out.Capabilities->PersistentNotificationStorage;
        }

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}
