#ifndef prob_H
#define prob_H

#include <QVector>
#include <QString>
#include <QObject>
#include "descdevice.h"
#include "discoverythread.h"

enum DiscoveryMode{
    SERVER_MODE, CLIENT_MODE
};

class DiscoveryObj: public QObject{

    Q_OBJECT   
signals:
    void discoveredDevice(DescDevice);

private:
    DiscoveryThread discoveryThread;

public:
//    const int   _metadataVersion = 1;
//    const char* _xaddr="http://localhost/service";
//    const char* _type="\"http://schemas.xmlsoap.org/ws/2006/02/devprof\":device";
//    const char* _scope="scope";
//    const char* _endpoint="urn";


    DiscoveryMode mode;
    static DiscoveryObj *theDiscovery;
    int   _metadataVersion;
    char* _xaddr;
    char* _type;
    char* _scope;
    char* _endpoint;

    DiscoveryObj(DiscoveryMode mode, int _metadataVersion, char* _xaddr, char* _type, char* _scope, char* _endpoint);
    ~DiscoveryObj();

    int sendProb();
    int sendHello();
    int sendBye();
};

#endif
