#include "replaycontrol.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifreplaycontrol.nsmap"
#include "soap/onvifreplaycontrolReplayBindingProxy.h"

ReplayControl::ReplayControl()
{

}

ReplayControl::~ReplayControl()
{

}
void ReplayControl::getGetServiceCapabilities(QString devServiceURL) {

    qDebug() << "RecordingSearch service test: getGetServiceCapabilities";

    ReplayBindingProxy d;

    _replaycontrol__GetServiceCapabilities in;
    _replaycontrol__GetServiceCapabilitiesResponse out;

    if (d.GetServiceCapabilities(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        if(out.Capabilities != NULL){
            qDebug() << out.Capabilities->RTP_USCORERTSP_USCORETCP;
            qDebug() << out.Capabilities->ReversePlayback;
            //qDebug() << out.Capabilities->MaxTotalRate;
        }

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}
