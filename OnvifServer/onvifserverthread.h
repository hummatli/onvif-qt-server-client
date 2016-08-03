#ifndef ONVIFSERVERTHREAD_H
#define ONVIFSERVERTHREAD_H
#include <QThread>


class OnvifServerThread : public QThread
{


    Q_OBJECT
public:
    OnvifServerThread(QString ipStr, int tcpPort);

    static QString ipStr;
    static int tcpPort;
    //bool running = false;

    static QString addrsStr;
    QString typeStr;
    QString scopeStr;

protected:
    void run();
};

#endif // ONVIFSERVERTHREAD_H

