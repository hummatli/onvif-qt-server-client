#include "recordingsearch.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifrecordingsearch.nsmap"
#include "soap/onvifrecordingsearchSearchBindingProxy.h"

RecordingSearch::RecordingSearch()
{

}

RecordingSearch::~RecordingSearch()
{

}
void RecordingSearch::getGetServiceCapabilities(QString devServiceURL) {

    qDebug() << "RecordingSearch service test: getGetServiceCapabilities";

    SearchBindingProxy d;

    _recordingsearch__GetServiceCapabilities in;
    _recordingsearch__GetServiceCapabilitiesResponse out;

    if (d.GetServiceCapabilities(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        if(out.Capabilities != NULL){
            qDebug() << out.Capabilities->GeneralStartEvents;
            qDebug() << out.Capabilities->MetadataSearch;
            //qDebug() << out.Capabilities->MaxTotalRate;
        }

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}
