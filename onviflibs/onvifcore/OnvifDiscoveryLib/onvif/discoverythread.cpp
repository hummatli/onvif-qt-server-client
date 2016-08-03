#include "discoverythread.h"
#include "onvif/discoveryobj.h"
#include "soap/wsddapi.h"

DiscoveryThread::DiscoveryThread()
{

}

void DiscoveryThread::run(){
    struct soap* serv = soap_new1(SOAP_IO_UDP);
    serv->bind_flags=SO_REUSEADDR;
    if (!soap_valid_socket(soap_bind(serv, NULL, port, 1000)))
    {
        soap_print_fault(serv, stderr);
        exit(1);
    }
    ip_mreq mcast;
    mcast.imr_multiaddr.s_addr = inet_addr(host);
    mcast.imr_interface.s_addr = htonl(INADDR_ANY);
    //if (setsockopt(serv->master, IPPROTO_IP, IP_ADD_MEMBERSHIP, &mcast, sizeof(mcast))<0)
    if (setsockopt(serv->master, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mcast, sizeof(mcast))<0)
    {
        std::cout << "group membership failed:" << strerror(errno) << std::endl;
        exit(1);
    }

    // sendHello();
   // DiscoveryObj::sendHello();
   // mainloop(serv);

    //signal(SIGINT, &sighandler);
//    while (!stop)
        while (true)
    {
        printf("inside while\n");
        fflush(stdout);
        //mainloop(serv);
        soap_wsdd_listen(serv, -1000000);
    }

//    sendBye();
//    mainloop(serv);
    //fflush(stdout);
}
