#include "onvifserverthread.h"
#include "wrapper/deviceservicewrapper.h"
#include "wrapper/ptzservicewrapper.h"
#include "wrapper/eventservicewrapper.h"
#include "wrapper/mediaservicewrapper.h"
#include "wrapper/imagingservicewrapper.h"
#include "wrapper/analyticsservicewrapper.h"
#include "wrapper/deviceioservicewrapper.h"

#include "onvif/discoveryobj.h"
#include "soap/wsddapi.h"
#include <QDebug>

QString OnvifServerThread::ipStr ;
int OnvifServerThread::tcpPort;
QString OnvifServerThread::addrsStr;


OnvifServerThread::OnvifServerThread(QString ipStr, int tcpPort)
{
    this->ipStr = ipStr;
    this->tcpPort = tcpPort;
}

void OnvifServerThread::run(){

    //running = true;

    //Starts desovery --------------------------------------------------------------

    //char* _xaddr="http://x.x.x.x:8080"; //format
    addrsStr = QString("http://")+ipStr+QString(":")+QString::number(tcpPort);
    qDebug()<< "Addres = " + addrsStr;
    char* _xaddr=new char[addrsStr.length() + 1];
    strcpy(_xaddr, addrsStr.toLatin1().constData());


    //type=""; // bele de ishleyir
    typeStr = QString("discows:NetworkVideoTransmitter");// Look at text format otherwise onvif tester will not finde server. Format has to be as following "xxx:xxx"
    // Main rule is  type="\"http://www.onvif.org/ver10/network/wsdl\":NetworkVideoTransmitter \"http://www.onvif.org/ver10/network/wsdl\":Device"; // I got this link from wsdd.nmsp. It has described in tutorial
    char* _type=new char[typeStr.length() + 1];
    strcpy(_type, typeStr.toLatin1().constData());
    std::cout << "_type " << _type << "\n";

    scopeStr = QString("onvif://www.onvif.org/Profile/Streaming "
                 "onvif://www.onvif.org/hardware/NetworkVideoTransmitter "
                 "onvif://www.onvif.org/location/country/Azerbaijan "
                 "onvif://www.onvif.org/location/city/Baku "
                 "onvif://www.onvif.org/name/NVT");

    char* _scope=new char[scopeStr.length() + 1];
    strcpy(_scope, scopeStr.toLatin1().constData());

    std::cout << "_scope " << _scope << "\n";

    //for genereatin randoim uuid start
    struct soap* serv = soap_new1(SOAP_IO_UDP);
    char* _endpoint= (char*)soap_wsa_rand_uuid(serv);
    //for genereatin randoim uuid end


    DiscoveryObj *discoveryObj = new DiscoveryObj(SERVER_MODE, 1, _xaddr, _type, _scope, _endpoint);


    //Starts accepting requests-------------------------------------------------------------------------
    struct soap *soap = soap_new();

//    soap->send_timeout = 60; // 60 seconds
//    soap->recv_timeout = 60; // 60 seconds
//    soap->accept_timeout = 3600; // server stops after 1 hour of inactivity
//    soap->max_keep_alive = 100; // max keep-alive sequence

    DeviceServiceWrapper deviceSW(soap);
    PTZServiceWrapper ptzSW(soap);
    EventServiceWrapper eventSW(soap);
    AnalyticsServiceWrapper analyticsSW(soap);
    MediaServiceWrapper mediaSW(soap);
    //ImagingServiceWrapper imagingSW(soap);
    //DeviceIOServiceWrapper deviceIOSW(soap);


    soap_bind(soap, NULL, tcpPort, 100);

//    soap->send_timeout = 60; // 60 seconds
//    soap->recv_timeout = 60; // 60 seconds
//    soap->accept_timeout = 3600; // server stops after 1 hour of inactivity
//    soap->max_keep_alive = 100; // max keep-alive sequence

    //while(running){
    while(true){
        qDebug() << "running \n";

        soap_accept(soap); //blocks the loop , find way to set timeout
        if (soap_begin_serve(soap))
            //... error
            soap_stream_fault(soap, std::cerr);
        else if (deviceSW.dispatch() == SOAP_NO_METHOD)
        {
            if (ptzSW.dispatch() == SOAP_NO_METHOD)
            {
                if (eventSW.dispatch() == SOAP_NO_METHOD)
                {
                    if (analyticsSW.dispatch() == SOAP_NO_METHOD){
//                        if (deviceIOSW.dispatch() == SOAP_NO_METHOD)
//                        {
                            //if (imagingSW.dispatch() == SOAP_NO_METHOD)
                            //{
                                if (mediaSW.dispatch() == SOAP_NO_METHOD)
                                {
                                    printf("Method fault \n");
                                    fflush(stdout);
                                    soap_stream_fault(soap, std::cerr);
                                    soap_closesock(soap);
                                }
                             //}
//                        }
                    }
                }
            }
        }
        printf("loop end \n");
        fflush(stdout);
        soap_destroy(soap);
    }

    soap_end(soap);
    soap_free(soap); // only safe when abc, uvw, xyz are also deleted


    deviceSW.deleteObj();
    ptzSW.deleteObj();
    eventSW.deleteObj();
    analyticsSW.deleteObj();
    mediaSW.deleteObj();
    //imagingSW.deleteObj();

    delete discoveryObj;



    //    struct soap* serv = soap_new1(SOAP_IO_UDP);
    //    serv->bind_flags=SO_REUSEADDR;
    //    if (!soap_valid_socket(soap_bind(serv, NULL, port, 1000)))
    //    {
    //        soap_print_fault(serv, stderr);
    //        exit(1);
    //    }
    //    ip_mreq mcast;
    //    mcast.imr_multiaddr.s_addr = inet_addr(host);
    //    mcast.imr_interface.s_addr = htonl(INADDR_ANY);
    //    //if (setsockopt(serv->master, IPPROTO_IP, IP_ADD_MEMBERSHIP, &mcast, sizeof(mcast))<0)
    //    if (setsockopt(serv->master, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mcast, sizeof(mcast))<0)
    //    {
    //        std::cout << "group membership failed:" << strerror(errno) << std::endl;
    //        exit(1);
    //    }

    //    // sendHello();
    //   // DiscoveryObj::sendHello();
    //   // mainloop(serv);

    //    //signal(SIGINT, &sighandler);
    ////    while (!stop)
    //        while (true)
    //    {
    //        printf("inside while\n");
    //        fflush(stdout);
    //        //mainloop(serv);
    //        soap_wsdd_listen(serv, -1000000);
    //    }

    ////    sendBye();
    ////    mainloop(serv);
    //    //fflush(stdout);


}
