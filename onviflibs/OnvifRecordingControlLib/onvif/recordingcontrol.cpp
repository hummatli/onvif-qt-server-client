#include "recordingcontrol.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifrecordingcontrol.nsmap"
#include "soap/onvifrecordingcontrolRecordingBindingProxy.h"

RecordingControl::RecordingControl()
{

}

RecordingControl::~RecordingControl()
{

}
void RecordingControl::getGetServiceCapabilities(QString devServiceURL) {

    qDebug() << "RecordingControl service test: getGetServiceCapabilities";

    RecordingBindingProxy d;

    _recordingcontrol__GetServiceCapabilities in;
    _recordingcontrol__GetServiceCapabilitiesResponse out;

    if (d.GetServiceCapabilities(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        if(out.Capabilities != NULL){
            qDebug() << out.Capabilities->MaxRate;
            qDebug() << out.Capabilities->MaxRecordingJobs;
            qDebug() << out.Capabilities->MaxTotalRate;
        }

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}
