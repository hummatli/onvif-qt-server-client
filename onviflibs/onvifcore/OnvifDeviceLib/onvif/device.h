#ifndef DEVICE_H
#define DEVICE_H

#include <QString>

class Device
{
public:
    Device();
    ~Device();
    static void getDeviceInformation(QString devServiceURL);
    static void getUses(QString devServiceURL);
};

#endif // DEVICE_H
