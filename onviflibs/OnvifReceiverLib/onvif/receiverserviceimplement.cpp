#include "soap/onvifreceiverReceiverBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/receiverservice.h"

ReceiverServiceExtAbst * ReceiverService::serviceExt = NULL;


/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int ReceiverBindingService::GetServiceCapabilities(_receiverws__GetServiceCapabilities *receiverws__GetServiceCapabilities, _receiverws__GetServiceCapabilitiesResponse &receiverws__GetServiceCapabilitiesResponse){
    if(ReceiverService::serviceExt != NULL){
        return ReceiverService::serviceExt->GetServiceCapabilities(receiverws__GetServiceCapabilities, receiverws__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "ReceiverService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetReceivers' (returns error code or SOAP_OK)
int ReceiverBindingService::GetReceivers(_receiverws__GetReceivers *receiverws__GetReceivers, _receiverws__GetReceiversResponse &receiverws__GetReceiversResponse) {
    if(ReceiverService::serviceExt != NULL){
        return ReceiverService::serviceExt->GetReceivers(receiverws__GetReceivers, receiverws__GetReceiversResponse);
    } else {
        qDebug() << "ReceiverService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetReceiver' (returns error code or SOAP_OK)
int ReceiverBindingService::GetReceiver(_receiverws__GetReceiver *receiverws__GetReceiver, _receiverws__GetReceiverResponse &receiverws__GetReceiverResponse) {
    if(ReceiverService::serviceExt != NULL){
        return ReceiverService::serviceExt->GetReceiver(receiverws__GetReceiver,receiverws__GetReceiverResponse);
    } else {
        qDebug() << "ReceiverService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'CreateReceiver' (returns error code or SOAP_OK)
int ReceiverBindingService::CreateReceiver(_receiverws__CreateReceiver *receiverws__CreateReceiver, _receiverws__CreateReceiverResponse &receiverws__CreateReceiverResponse) {
    if(ReceiverService::serviceExt != NULL){
        return ReceiverService::serviceExt->CreateReceiver(receiverws__CreateReceiver, receiverws__CreateReceiverResponse);
    } else {
        qDebug() << "ReceiverService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'DeleteReceiver' (returns error code or SOAP_OK)
int ReceiverBindingService::DeleteReceiver(_receiverws__DeleteReceiver *receiverws__DeleteReceiver, _receiverws__DeleteReceiverResponse &receiverws__DeleteReceiverResponse) {
    if(ReceiverService::serviceExt != NULL){
        return ReceiverService::serviceExt->DeleteReceiver( receiverws__DeleteReceiver, receiverws__DeleteReceiverResponse);
    } else {
        qDebug() << "ReceiverService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'ConfigureReceiver' (returns error code or SOAP_OK)
int ReceiverBindingService::ConfigureReceiver(_receiverws__ConfigureReceiver *receiverws__ConfigureReceiver, _receiverws__ConfigureReceiverResponse &receiverws__ConfigureReceiverResponse) {
    if(ReceiverService::serviceExt != NULL){
        return ReceiverService::serviceExt->ConfigureReceiver( receiverws__ConfigureReceiver,  receiverws__ConfigureReceiverResponse);
    } else {
        qDebug() << "ReceiverService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'SetReceiverMode' (returns error code or SOAP_OK)
int ReceiverBindingService::SetReceiverMode(_receiverws__SetReceiverMode *receiverws__SetReceiverMode, _receiverws__SetReceiverModeResponse &receiverws__SetReceiverModeResponse) {
    if(ReceiverService::serviceExt != NULL){
        return ReceiverService::serviceExt->SetReceiverMode( receiverws__SetReceiverMode,  receiverws__SetReceiverModeResponse);
    } else {
        qDebug() << "ReceiverService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetReceiverState' (returns error code or SOAP_OK)
int ReceiverBindingService::GetReceiverState(_receiverws__GetReceiverState *receiverws__GetReceiverState, _receiverws__GetReceiverStateResponse &receiverws__GetReceiverStateResponse) {
    if(ReceiverService::serviceExt != NULL){
        return ReceiverService::serviceExt->GetReceiverState( receiverws__GetReceiverState,  receiverws__GetReceiverStateResponse);
    } else {
        qDebug() << "ReceiverService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
