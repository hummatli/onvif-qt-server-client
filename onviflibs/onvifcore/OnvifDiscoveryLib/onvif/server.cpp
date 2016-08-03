/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** server.cpp
** 
** WS-Discovery device
**
** -------------------------------------------------------------------------*/

#include <signal.h>

#include <QDebug>
#include "soap/onvifdiscoH.h"
#include "soap/wsdd.nsmap"
#include "soap/wsddapi.h"

const char* host = "239.255.255.250";	
int port = 3702;
const int   _metadataVersion = 1;
const char* _xaddr="http://localhost/service";
const char* _type="\"http://schemas.xmlsoap.org/ws/2006/02/devprof\":device";
const char* _scope="scope";
const char* _endpoint="urn";

bool stop = false;
void sighandler(int sig)
{
	std::cout<< "Signal caught..." << std::endl;
	stop = true;
}

int mainloop(soap* serv)
{		
	return soap_wsdd_listen(serv, -1000000);
}

void sendHello()
{
	struct soap* soap = soap_new1(SOAP_IO_UDP);
	printf("call soap_wsdd_Hello\n");
	int res = soap_wsdd_Hello(soap,
	  SOAP_WSDD_ADHOC,      // mode
	  "soap.udp://239.255.255.250:3702",         // address of TS
	  soap_wsa_rand_uuid(soap),                   // message ID
	  NULL,                 
	  _endpoint,
	  _type,
	  _scope,
	  NULL,
	  _xaddr,
          _metadataVersion);
	if (res != SOAP_OK)
	{
		soap_print_fault(soap, stderr);
	}
	soap_end(soap);	
}

void sendBye()
{
	struct soap* soap = soap_new1(SOAP_IO_UDP);
	printf("call soap_wsdd_Bye\n");
	int res = soap_wsdd_Bye(soap,
	  SOAP_WSDD_ADHOC,      // mode
	  "soap.udp://239.255.255.250:3702",         // address of TS
	  soap_wsa_rand_uuid(soap),                   // message ID
	  _endpoint,                 
	  _type,
	  _scope,
	  NULL,
	  _xaddr,
          _metadataVersion);
	if (res != SOAP_OK)
	{
		soap_print_fault(soap, stderr);
	}
	soap_end(soap);
}
	
int main(int argc, char** argv)
{
     printf("wsdd_event_H\n");
     qDebug()<<"sds";
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
//    if (setsockopt(serv->master, IPPROTO_IP, IP_ADD_MEMBERSHIP, &mcast, sizeof(mcast))<0)
    if (setsockopt(serv->master, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mcast, sizeof(mcast))<0)
    {
        std::cout << "group membership failed:" << strerror(errno) << std::endl;
        exit(1);
    }

	sendHello();
	mainloop(serv);

	signal(SIGINT, &sighandler);
	while (!stop)
	{
		mainloop(serv);
	}

	sendBye();
	mainloop(serv);

	return 0;
}

void wsdd_event_ProbeMatches(struct soap *soap, unsigned int InstanceId, const char *SequenceId, unsigned int MessageNumber, const char *MessageID, const char *RelatesTo, struct wsdd__ProbeMatchesType *matches)
{
        qDebug() << "in wsdd_event_ProbeMatches\n";
}

void wsdd_event_ResolveMatches(struct soap *soap, unsigned int InstanceId, const char *SequenceId, unsigned int MessageNumber, const char *MessageID, const char *RelatesTo, struct wsdd__ResolveMatchType *match)
{
        qDebug() << "in wsdd_event_ResolveMatches\n";
}

void wsdd_event_Hello(struct soap *soap, unsigned int InstanceId, const char *SequenceId, unsigned int MessageNumber, const char *MessageID, const char *RelatesTo, const char *EndpointReference, const char *Types, const char *Scopes, const char *MatchBy, const char *XAddrs, unsigned int MetadataVersion)
{
        qDebug() << "in wsdd_event_Hello\n";
    printf("wsdd_event_Hello\tid=%s EndpointReference=%s Types=%s Scopes=%s XAddrs=%s\n", MessageID, EndpointReference, Types, Scopes, XAddrs);
}

void wsdd_event_Bye(struct soap *soap, unsigned int InstanceId, const char *SequenceId, unsigned int MessageNumber, const char *MessageID, const char *RelatesTo, const char *EndpointReference, const char *Types, const char *Scopes, const char *MatchBy, const char *XAddrs, unsigned int *MetadataVersion)
{
        qDebug() << "in wsdd_event_Bye\n";
    printf("wsdd_event_Bye\tid=%s EndpointReference=%s Types=%s Scopes=%s XAddrs=%s\n", MessageID, EndpointReference, Types, Scopes, XAddrs);
}

soap_wsdd_mode wsdd_event_Resolve(struct soap *soap, const char *MessageID, const char *ReplyTo, const char *EndpointReference, struct wsdd__ResolveMatchType *match)
{
        qDebug() << "in wsdd_event_Resolve\n";
    printf("wsdd_event_Resolve\tid=%s replyTo=%s endpoint=%s\n", MessageID, ReplyTo, EndpointReference);
       qDebug() << "wsdd_event_Resolve\n";
    if (EndpointReference && (strcmp(EndpointReference, _endpoint) == 0) )
    {
        soap_wsdd_ResolveMatches(soap, NULL, soap_wsa_rand_uuid(soap), MessageID, ReplyTo, _endpoint, _type, _scope, NULL, _xaddr, _metadataVersion);
    }
    return SOAP_WSDD_ADHOC;
}

soap_wsdd_mode wsdd_event_Probe(struct soap *soap, const char *MessageID, const char *ReplyTo, const char *Types, const char *Scopes, const char *MatchBy, struct wsdd__ProbeMatchesType *matches)
{
        qDebug() << "in wsdd_event_Probe\n";
    printf("wsdd_event_Probe\tid=%s replyTo=%s types=%s scopes=%s\n", MessageID, ReplyTo, Types, Scopes);
        qDebug() << "wsdd_event_Probe\n";
    soap_wsdd_init_ProbeMatches(soap,matches);
    soap_wsdd_add_ProbeMatch(soap, matches, _endpoint, _type, _scope, NULL, _xaddr, _metadataVersion);
    soap_wsdd_ProbeMatches(soap, NULL, soap_wsa_rand_uuid(soap) , MessageID, ReplyTo, matches);
    return SOAP_WSDD_ADHOC;
}

SOAP_FMAC5 int SOAP_FMAC6 SOAP_ENV__Fault(struct soap*, char *faultcode, char *faultstring, char *faultactor, struct SOAP_ENV__Detail *detail, struct SOAP_ENV__Code *SOAP_ENV__Code, struct SOAP_ENV__Reason *SOAP_ENV__Reason, char *SOAP_ENV__Node, char *SOAP_ENV__Role, struct SOAP_ENV__Detail *SOAP_ENV__Detail){
    printf("in SOAP_ENV__Fault");
        qDebug() << "SOAP_ENV__Fault\n";
    return SOAP_OK;
}


//SOAP_FMAC5 int SOAP_FMAC6 __discows__Hello(struct soap*, struct wsdd__HelloType discows__Hello, struct wsdd__ResolveType &discows__HelloResponse){
//    printf("in __discows__Hello");
//    qDebug() << "__discows__Hello\n";
//    return SOAP_OK;
//}

//SOAP_FMAC5 int SOAP_FMAC6 __discows__Bye(struct soap*, struct wsdd__ByeType discows__Bye, struct wsdd__ResolveType &discows__ByeResponse){
//    printf("in __discows__Bye");
//    qDebug() << "__discows__Bye\n";
//    return SOAP_OK;
//}

//SOAP_FMAC5 int SOAP_FMAC6 __discows__Probe(struct soap*, struct wsdd__ProbeType discows__Probe, struct wsdd__ProbeMatchesType &discows__ProbeResponse){
//    printf("in __discows__Probe");
//    qDebug() << "__discows__Probe\n";
//    return SOAP_OK;
//}
