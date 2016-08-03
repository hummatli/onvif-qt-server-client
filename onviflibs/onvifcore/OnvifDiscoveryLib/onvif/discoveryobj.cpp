/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** probe.cpp
** 
** WS-Discovery probe/resolve
**
** -------------------------------------------------------------------------*/
#include "../soap/wsddapi.h"
#include <getopt.h>
#include "discoveryobj.h"
#include <QDebug>
#include "soap/wsdd.nsmap"


DiscoveryObj * DiscoveryObj::theDiscovery = NULL;



DiscoveryObj::DiscoveryObj(DiscoveryMode mode,int _metadataVersion, char* _xaddr, char* _type, char* _scope, char* _endpoint){
    this->mode = mode;
    theDiscovery = this;
    this->_metadataVersion = _metadataVersion;
    this->_xaddr = _xaddr;
    this->_type = _type;
    this->_scope = _scope;
    this->_endpoint = _endpoint;

    discoveryThread.start();
    if(mode == SERVER_MODE){
        sendHello();
    }
}

DiscoveryObj::~DiscoveryObj(){
    qDebug() << "DiscoveryObj deleted";
    sendBye();
}

int DiscoveryObj::sendProb()
{
    const char * endpoint = "";
    const char * type = NULL;
    const char * scope = NULL;

//	int c = 0;
//	while ((c = getopt (argc, argv, "r:t:s:")) != -1)
//	{
//		switch (c)
//		{
//			case 'r': endpoint = optarg; break;
//			case 't': type     = optarg; break;
//			case 's': scope    = optarg; break;
//			default:
//				std::cout << int(c) << std::endl;
//				std::cout << argv[0] << std::endl;
//				std::cout << "\t -r <endpoint>        : resolve endpoint" << std::endl;
//				std::cout << "\t -t <type> -s <scope> : probe for type/scope" << std::endl;
//				exit(0);
//			break;
//		}
//	}
      
	// create soap instance
	struct soap* serv = soap_new1(SOAP_IO_UDP); 
	if (!soap_valid_socket(soap_bind(serv, NULL, 0, 1000)))
	{
		soap_print_fault(serv, stderr);
		exit(1);
	}	

	int res = 0;
	// call resolve or probe
    if (strlen(endpoint) == 0)
    {
        res = soap_wsdd_Probe(serv,
		  SOAP_WSDD_ADHOC,      // mode
		  SOAP_WSDD_TO_TS,      // to a TS
		  "soap.udp://239.255.255.250:3702",         // address of TS
		  soap_wsa_rand_uuid(serv),                   // message ID
          NULL,                 // ReplyTo
		  type,
		  scope,
		  NULL);
    }
    else
    {
        // send resolve request
        res = soap_wsdd_Resolve(serv,
          SOAP_WSDD_ADHOC,      // mode
          SOAP_WSDD_TO_TS,      // to a TS
          "soap.udp://239.255.255.250:3702",         // address of TS
          soap_wsa_rand_uuid(serv),                   // message ID
          NULL,                 // ReplyTo
          endpoint);
    }
	
	if (res != SOAP_OK)
	{
		soap_print_fault(serv, stderr);
        fflush(stderr);
	}
			
	// listen answers
    soap_wsdd_listen(serv, -1000000);
	
    return 0;

}


int DiscoveryObj::sendHello()
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

int DiscoveryObj::sendBye()
{
    struct soap* soap = soap_new1(SOAP_IO_UDP);
    printf("call soap_wsdd_Hello\n");
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



template <class T> 
void printMatch(const T & match)
{
	std::cout << "===================================================================" << std::endl;
    if (match.wsa__EndpointReference.Address)
    {
        std::cout << "Endpoint:\t"<< match.wsa__EndpointReference.Address << std::endl;
    }
	if (match.Types)
	{
		std::cout << "Types:\t\t"<< match.Types<< std::endl;
	}
	if (match.Scopes)
	{
		if (match.Scopes->__item )
		{
			std::cout << "Scopes:\t\t"<< match.Scopes->__item << std::endl;
		}
		if (match.Scopes->MatchBy)
		{
			std::cout << "MatchBy:\t"<< match.Scopes->MatchBy << std::endl;
		}
	}
	if (match.XAddrs)
	{
		std::cout << "XAddrs:\t\t"<< match.XAddrs << std::endl;
	}
	std::cout << "MetadataVersion:\t\t" << match.MetadataVersion << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;
}

void wsdd_event_ProbeMatches(struct soap *soap, unsigned int InstanceId, const char *SequenceId, unsigned int MessageNumber, const char *MessageID, const char *RelatesTo, struct wsdd__ProbeMatchesType *matches)
{
    if(DiscoveryObj::theDiscovery == NULL){
        qDebug() << "DiscoveryObj::theDiscovery is NULL. Check why";
    }

    if(DiscoveryObj::theDiscovery->mode == CLIENT_MODE){
        printf("wsdd_event_ProbeMatches nbMatch:%d\n", matches->__sizeProbeMatch);
        for (int i=0; i < matches->__sizeProbeMatch; ++i)
        {
            wsdd__ProbeMatchType& elt = matches->ProbeMatch[i];

            //mycode start
            DescDevice device;
            device.metadataversion = elt.MetadataVersion;
            device.types = QString(elt.Types);
            device.xAddrs = QString(elt.XAddrs);
            wsdd__ScopesType* scope = elt.Scopes;
            if(scope != NULL){
                device.scopes = QString(scope->__item);
            }
            //qDebug()<< "Socopes inside " << device.scopes;

            //DiscoveryObj::getDiscoveryObj()->discoveredDevice(device);
            DiscoveryObj::theDiscovery->discoveredDevice(device);
            //my code end


            printMatch(elt);
        }
    }

}

void wsdd_event_ResolveMatches(struct soap *soap, unsigned int InstanceId, const char *SequenceId, unsigned int MessageNumber, const char *MessageID, const char *RelatesTo, struct wsdd__ResolveMatchType *match)
{
    if(DiscoveryObj::theDiscovery == NULL){
        qDebug() << "DiscoveryObj::theDiscovery is NULL. Check why";
    }
    if(DiscoveryObj::theDiscovery->mode == CLIENT_MODE){
        printf("wsdd_event_ResolveMatches\n");
        printMatch(*match);
    }
}

void wsdd_event_Hello(struct soap *soap, unsigned int InstanceId, const char *SequenceId, unsigned int MessageNumber, const char *MessageID, const char *RelatesTo, const char *EndpointReference, const char *Types, const char *Scopes, const char *MatchBy, const char *XAddrs, unsigned int MetadataVersion)
{
    qDebug() << "in wsdd_event_Hello";
    printf("wsdd_event_Hello\tid=%s EndpointReference=%s Types=%s Scopes=%s XAddrs=%s\n", MessageID, EndpointReference, Types, Scopes, XAddrs);
    fflush(stdout);
}

void wsdd_event_Bye(struct soap *soap, unsigned int InstanceId, const char *SequenceId, unsigned int MessageNumber, const char *MessageID, const char *RelatesTo, const char *EndpointReference, const char *Types, const char *Scopes, const char *MatchBy, const char *XAddrs, unsigned int *MetadataVersion)
{
    qDebug() << "in wsdd_event_Bye";
    printf("wsdd_event_Hello\tid=%s EndpointReference=%s Types=%s Scopes=%s XAddrs=%s\n", MessageID, EndpointReference, Types, Scopes, XAddrs);
    fflush(stdout);
}

soap_wsdd_mode wsdd_event_Resolve(struct soap *soap, const char *MessageID, const char *ReplyTo, const char *EndpointReference, struct wsdd__ResolveMatchType *match)
{
    if(DiscoveryObj::theDiscovery == NULL){
        qDebug() << "DiscoveryObj::theDiscovery is NULL. Check why";
    }
    if(DiscoveryObj::theDiscovery->mode == SERVER_MODE){
        qDebug() << "in wsdd_event_Resolve";
        printf("wsdd_event_Resolve\tid=%s replyTo=%s endpoint=%s\n", MessageID, ReplyTo, EndpointReference);
        if (EndpointReference && (strcmp(EndpointReference, DiscoveryObj::theDiscovery->_endpoint) == 0) )
        {
            soap_wsdd_ResolveMatches(soap, NULL, soap_wsa_rand_uuid(soap), MessageID, ReplyTo, DiscoveryObj::theDiscovery->_endpoint, DiscoveryObj::theDiscovery->_type, DiscoveryObj::theDiscovery->_scope, NULL, DiscoveryObj::theDiscovery->_xaddr, DiscoveryObj::theDiscovery->_metadataVersion);
        }
        fflush(stdout);
    }
    return SOAP_WSDD_ADHOC;
}

soap_wsdd_mode wsdd_event_Probe(struct soap *soap, const char *MessageID, const char *ReplyTo, const char *Types, const char *Scopes, const char *MatchBy, struct wsdd__ProbeMatchesType *matches)
{
    if(DiscoveryObj::theDiscovery == NULL){
        qDebug() << "DiscoveryObj::theDiscovery is NULL. Check why";
    }
    if(DiscoveryObj::theDiscovery->mode == SERVER_MODE){
        qDebug() << "in wsdd_event_Probe tid = " << MessageID << " replyTo"<< ReplyTo << " types"<< Types << " scopes"<< Scopes << " ";
        printf("wsdd_event_Probe\tid=%s replyTo=%s types=%s scopes=%s\n", MessageID, ReplyTo, Types, Scopes);
        soap_wsdd_init_ProbeMatches(soap,matches);
        soap_wsdd_add_ProbeMatch(soap, matches, DiscoveryObj::theDiscovery->_endpoint, DiscoveryObj::theDiscovery->_type, DiscoveryObj::theDiscovery->_scope, NULL, DiscoveryObj::theDiscovery->_xaddr, DiscoveryObj::theDiscovery->_metadataVersion);
        //soap_wsdd_add_ProbeMatch(soap, matches, DiscoveryObj::theDiscovery->_endpoint, "", DiscoveryObj::theDiscovery->_scope, NULL, "http://172.16.6.79:8080", DiscoveryObj::theDiscovery->_metadataVersion);
        //type = discows:NetworkVideoTransmitter
        soap_wsdd_ProbeMatches(soap, NULL, soap_wsa_rand_uuid(soap) , MessageID, ReplyTo, matches);

        fflush(stdout);

    }
    return SOAP_WSDD_ADHOC;
}
