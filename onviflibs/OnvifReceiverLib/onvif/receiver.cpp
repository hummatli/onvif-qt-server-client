#include "receiver.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifreceiver.nsmap"
#include "soap/onvifreceiverReceiverBindingProxy.h"

Receiver::Receiver()
{

}

Receiver::~Receiver()
{

}
QVector<std::string>  Receiver::getGetReceivers(QString devServiceURL) {

    QVector<std::string> tokens;
    qDebug() << "media service test: getgetGetReceivers";

    ReceiverBindingProxy p;

    _receiverws__GetReceivers in;
    _receiverws__GetReceiversResponse out;

    if (p.GetReceivers(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        std::vector<tt__Receiver*>   profiles = out.Receivers;
        for(int i =0;i< profiles.size(); ++i){
            tokens.append(profiles.at(i)->Token);
        }

    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return tokens;
}


