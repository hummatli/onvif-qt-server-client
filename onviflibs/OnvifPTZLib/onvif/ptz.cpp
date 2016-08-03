#include "ptz.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifptz.nsmap"
#include <QDateTime>
#include "soap/onvifptzPTZBindingProxy.h"



PTZ::PTZ()
{

}

PTZ::~PTZ()
{

}

void PTZ::getStatus(QString devServiceURL) {

    qDebug() << "ptz service test: goGetStatuses";

    PTZBindingProxy p;

    _ptzws__GetStatus in;
    _ptzws__GetStatusResponse out;

    if (p.GetStatus(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        qDebug() << "X cord = " << out.PTZStatus->Position->PanTilt->x;

    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);

    }

    return ;
}

void PTZ::getNodes(QString devServiceURL) {

    qDebug() << "ptz service test: getNodes ptzservie url = " << devServiceURL.toStdString().data() << "\n";


    PTZBindingProxy p;

    _ptzws__GetNodes in;
    _ptzws__GetNodesResponse out;

    if (p.GetNodes(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        qDebug() << "PTZ node size = " << out.PTZNode.size();
        for(int i =0;i< out.PTZNode.size(); i++){
            //tt__PTZNode
            qDebug() << "Node name" << i << "=" << out.PTZNode[i]->Name->data();
            qDebug() << "Node home supported " << i << "=" << out.PTZNode[i]->HomeSupported;
        }

    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);

    }

    return ;
}

void PTZ::goToPreset(QString devServiceURL) {

    qDebug() << "ptz service test: goToPreset";

    PTZBindingProxy p;

    _ptzws__GotoPreset in;
    _ptzws__GotoPresetResponse out;

    in.PresetToken = "";
    in.ProfileToken = "";

    if (p.GotoPreset(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        qDebug() << "PTZ go to preset ok " ;

    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}



