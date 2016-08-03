#ifndef RECEIVERSERVICEEXTABST_H
#define RECEIVERSERVICEEXTABST_H

#include "soap/onvifreceiverH.h"

class ReceiverServiceExtAbst
{
public:
    ReceiverServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_receiverws__GetServiceCapabilities *receiverws__GetServiceCapabilities, _receiverws__GetServiceCapabilitiesResponse &receiverws__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetReceivers' (returns error code or SOAP_OK)
    virtual	int GetReceivers(_receiverws__GetReceivers *receiverws__GetReceivers, _receiverws__GetReceiversResponse &receiverws__GetReceiversResponse)  = 0;

    /// Web service operation 'GetReceiver' (returns error code or SOAP_OK)
    virtual	int GetReceiver(_receiverws__GetReceiver *receiverws__GetReceiver, _receiverws__GetReceiverResponse &receiverws__GetReceiverResponse)  = 0;

    /// Web service operation 'CreateReceiver' (returns error code or SOAP_OK)
    virtual	int CreateReceiver(_receiverws__CreateReceiver *receiverws__CreateReceiver, _receiverws__CreateReceiverResponse &receiverws__CreateReceiverResponse)  = 0;

    /// Web service operation 'DeleteReceiver' (returns error code or SOAP_OK)
    virtual	int DeleteReceiver(_receiverws__DeleteReceiver *receiverws__DeleteReceiver, _receiverws__DeleteReceiverResponse &receiverws__DeleteReceiverResponse)  = 0;

    /// Web service operation 'ConfigureReceiver' (returns error code or SOAP_OK)
    virtual	int ConfigureReceiver(_receiverws__ConfigureReceiver *receiverws__ConfigureReceiver, _receiverws__ConfigureReceiverResponse &receiverws__ConfigureReceiverResponse)  = 0;

    /// Web service operation 'SetReceiverMode' (returns error code or SOAP_OK)
    virtual	int SetReceiverMode(_receiverws__SetReceiverMode *receiverws__SetReceiverMode, _receiverws__SetReceiverModeResponse &receiverws__SetReceiverModeResponse)  = 0;

    /// Web service operation 'GetReceiverState' (returns error code or SOAP_OK)
    virtual	int GetReceiverState(_receiverws__GetReceiverState *receiverws__GetReceiverState, _receiverws__GetReceiverStateResponse &receiverws__GetReceiverStateResponse)  = 0;

};

#endif // RECEIVERSERVICEEXTABST_H
