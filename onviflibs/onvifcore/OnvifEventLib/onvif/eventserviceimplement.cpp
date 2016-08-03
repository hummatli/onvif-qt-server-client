#include "soap/onvifeventPullPointSubscriptionBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/eventservice.h"

EventServiceExtAbst * EventService::serviceExt = NULL;


/// Web service operation 'PullMessages' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::PullMessages(_eventws__PullMessages *eventws__PullMessages, _eventws__PullMessagesResponse &eventws__PullMessagesResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->PullMessages( eventws__PullMessages, eventws__PullMessagesResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'Seek' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::Seek(_eventws__Seek *eventws__Seek, _eventws__SeekResponse &eventws__SeekResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->Seek( eventws__Seek,  eventws__SeekResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::SetSynchronizationPoint(_eventws__SetSynchronizationPoint *eventws__SetSynchronizationPoint, _eventws__SetSynchronizationPointResponse &eventws__SetSynchronizationPointResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->SetSynchronizationPoint( eventws__SetSynchronizationPoint,  eventws__SetSynchronizationPointResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::GetServiceCapabilities(_eventws__GetServiceCapabilities *eventws__GetServiceCapabilities, _eventws__GetServiceCapabilitiesResponse &eventws__GetServiceCapabilitiesResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->GetServiceCapabilities( eventws__GetServiceCapabilities, eventws__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'CreatePullPointSubscription' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::CreatePullPointSubscription(_eventws__CreatePullPointSubscription *eventws__CreatePullPointSubscription, _eventws__CreatePullPointSubscriptionResponse &eventws__CreatePullPointSubscriptionResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->CreatePullPointSubscription( eventws__CreatePullPointSubscription, eventws__CreatePullPointSubscriptionResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetEventProperties' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::GetEventProperties(_eventws__GetEventProperties *eventws__GetEventProperties, _eventws__GetEventPropertiesResponse &eventws__GetEventPropertiesResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->GetEventProperties( eventws__GetEventProperties,  eventws__GetEventPropertiesResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'Renew' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::Renew(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->Renew( wsnt__Renew,  wsnt__RenewResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'Unsubscribe' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::Unsubscribe(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->Unsubscribe( wsnt__Unsubscribe,  wsnt__UnsubscribeResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'Subscribe' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::Subscribe(_wsnt__Subscribe *wsnt__Subscribe, _wsnt__SubscribeResponse &wsnt__SubscribeResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->Subscribe( wsnt__Subscribe, wsnt__SubscribeResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetCurrentMessage' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::GetCurrentMessage(_wsnt__GetCurrentMessage *wsnt__GetCurrentMessage, _wsnt__GetCurrentMessageResponse &wsnt__GetCurrentMessageResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->GetCurrentMessage( wsnt__GetCurrentMessage, wsnt__GetCurrentMessageResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service one-way operation 'Notify' (return error code, SOAP_OK (no response), or send_Notify_empty_response())
int PullPointSubscriptionBindingService::Notify(_wsnt__Notify *wsnt__Notify) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->Notify(wsnt__Notify);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMessages' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::GetMessages(_wsnt__GetMessages *wsnt__GetMessages, _wsnt__GetMessagesResponse &wsnt__GetMessagesResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->GetMessages( wsnt__GetMessages, wsnt__GetMessagesResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'DestroyPullPoint' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::DestroyPullPoint(_wsnt__DestroyPullPoint *wsnt__DestroyPullPoint, _wsnt__DestroyPullPointResponse &wsnt__DestroyPullPointResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->DestroyPullPoint( wsnt__DestroyPullPoint,  wsnt__DestroyPullPointResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service one-way operation 'Notify' (return error code, SOAP_OK (no response), or send_Notify_empty_response())
int PullPointSubscriptionBindingService::Notify_(_wsnt__Notify *wsnt__Notify) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->Notify_( wsnt__Notify);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'CreatePullPoint' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::CreatePullPoint(_wsnt__CreatePullPoint *wsnt__CreatePullPoint, _wsnt__CreatePullPointResponse &wsnt__CreatePullPointResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->CreatePullPoint( wsnt__CreatePullPoint, wsnt__CreatePullPointResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'Renew' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::Renew_(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->Renew_(wsnt__Renew, wsnt__RenewResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'Unsubscribe' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::Unsubscribe_(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->Unsubscribe_( wsnt__Unsubscribe, wsnt__UnsubscribeResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'PauseSubscription' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::PauseSubscription(_wsnt__PauseSubscription *wsnt__PauseSubscription, _wsnt__PauseSubscriptionResponse &wsnt__PauseSubscriptionResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->PauseSubscription( wsnt__PauseSubscription, wsnt__PauseSubscriptionResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'ResumeSubscription' (returns error code or SOAP_OK)
int PullPointSubscriptionBindingService::ResumeSubscription(_wsnt__ResumeSubscription *wsnt__ResumeSubscription, _wsnt__ResumeSubscriptionResponse &wsnt__ResumeSubscriptionResponse) {
    if(EventService::serviceExt != NULL){
        return EventService::serviceExt->ResumeSubscription( wsnt__ResumeSubscription, wsnt__ResumeSubscriptionResponse);
    } else {
        qDebug() << "EventService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
