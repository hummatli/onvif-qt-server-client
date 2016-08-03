#include "device.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifdeviceDeviceBindingProxy.h"
#include "soap/onvifdevice.nsmap"


Device::Device()
{

}

Device::~Device()
{

}


void Device::getDeviceInformation(QString devServiceURL) {

    qDebug() << "device manager service test: getDeviceInformation";

    DeviceBindingProxy d;

    _devicews__GetDeviceInformation in;
    _devicews__GetDeviceInformationResponse out;

    if (d.GetDeviceInformation(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        qDebug() << (char*)out.soap->data;
        qDebug() << out.FirmwareVersion.data();
        qDebug() << out.SerialNumber.data();
        qDebug() << out.HardwareId.data();
        qDebug() << out.Manufacturer.data();

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}

void Device::getUses(QString devServiceURL) {

    qDebug() << "device manager service test: getUses";

    DeviceBindingProxy d;

    _devicews__GetUsers in;
    _devicews__GetUsersResponse out;


    if (d.GetUsers(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        std::vector<tt__User *> users = out.User;

        qDebug() << users.size();
        for(int i = 0; i< users.size(); i++){
            tt__User * u = users.at(i);
            qDebug() << u->Username.data();
            qDebug() << u->Password;
        }

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}

