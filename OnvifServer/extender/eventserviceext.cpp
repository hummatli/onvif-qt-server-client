#include "eventserviceext.h"
#include <QDebug>
#include <QObject>
#include <QString>

EventServiceExt::EventServiceExt() : EventServiceExtAbst()
{

}


/// Web service operation 'PullMessages' (returns error code or SOAP_OK)
int EventServiceExt::PullMessages(_eventws__PullMessages *eventws__PullMessages, _eventws__PullMessagesResponse &eventws__PullMessagesResponse) {
    return SOAP_OK;
}


/// Web service operation 'Seek' (returns error code or SOAP_OK)
int EventServiceExt::Seek(_eventws__Seek *eventws__Seek, _eventws__SeekResponse &eventws__SeekResponse) {
    return SOAP_OK;
}


/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
int EventServiceExt::SetSynchronizationPoint(_eventws__SetSynchronizationPoint *eventws__SetSynchronizationPoint, _eventws__SetSynchronizationPointResponse &eventws__SetSynchronizationPointResponse) {
    return SOAP_OK;
}


/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int EventServiceExt::GetServiceCapabilities(_eventws__GetServiceCapabilities *eventws__GetServiceCapabilities, _eventws__GetServiceCapabilitiesResponse &eventws__GetServiceCapabilitiesResponse) {
    qDebug() << "Event GetServiceCapabilities in NVTTTT";
    return SOAP_OK;
}


/// Web service operation 'CreatePullPointSubscription' (returns error code or SOAP_OK)
int EventServiceExt::CreatePullPointSubscription(_eventws__CreatePullPointSubscription *eventws__CreatePullPointSubscription, _eventws__CreatePullPointSubscriptionResponse &eventws__CreatePullPointSubscriptionResponse) {
    return SOAP_OK;
}


/// Web service operation 'GetEventProperties' (returns error code or SOAP_OK)
int EventServiceExt::GetEventProperties(_eventws__GetEventProperties *eventws__GetEventProperties, _eventws__GetEventPropertiesResponse &eventws__GetEventPropertiesResponse) {
    return SOAP_OK;
}


/// Web service operation 'Renew' (returns error code or SOAP_OK)
int EventServiceExt::Renew(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) {
    return SOAP_OK;
}


/// Web service operation 'Unsubscribe' (returns error code or SOAP_OK)
int EventServiceExt::Unsubscribe(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) {
    return SOAP_OK;
}


/// Web service operation 'Subscribe' (returns error code or SOAP_OK)
int EventServiceExt::Subscribe(_wsnt__Subscribe *wsnt__Subscribe, _wsnt__SubscribeResponse &wsnt__SubscribeResponse) {
    return SOAP_OK;
}


/// Web service operation 'GetCurrentMessage' (returns error code or SOAP_OK)
int EventServiceExt::GetCurrentMessage(_wsnt__GetCurrentMessage *wsnt__GetCurrentMessage, _wsnt__GetCurrentMessageResponse &wsnt__GetCurrentMessageResponse) {
    return SOAP_OK;
}


/// Web service one-way operation 'Notify' (return error code, SOAP_OK (no response), or send_Notify_empty_response())
int EventServiceExt::Notify(_wsnt__Notify *wsnt__Notify) {
    return SOAP_OK;
}

/// Web service operation 'GetMessages' (returns error code or SOAP_OK)
int EventServiceExt::GetMessages(_wsnt__GetMessages *wsnt__GetMessages, _wsnt__GetMessagesResponse &wsnt__GetMessagesResponse) {
    return SOAP_OK;
}


/// Web service operation 'DestroyPullPoint' (returns error code or SOAP_OK)
int EventServiceExt::DestroyPullPoint(_wsnt__DestroyPullPoint *wsnt__DestroyPullPoint, _wsnt__DestroyPullPointResponse &wsnt__DestroyPullPointResponse) {
    return SOAP_OK;
}


/// Web service one-way operation 'Notify' (return error code, SOAP_OK (no response), or send_Notify_empty_response())
int EventServiceExt::Notify_(_wsnt__Notify *wsnt__Notify) {
    return SOAP_OK;
}


/// Web service operation 'CreatePullPoint' (returns error code or SOAP_OK)
int EventServiceExt::CreatePullPoint(_wsnt__CreatePullPoint *wsnt__CreatePullPoint, _wsnt__CreatePullPointResponse &wsnt__CreatePullPointResponse) {
    return SOAP_OK;
}


/// Web service operation 'Renew' (returns error code or SOAP_OK)
int EventServiceExt::Renew_(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) {
    return SOAP_OK;
}


/// Web service operation 'Unsubscribe' (returns error code or SOAP_OK)
int EventServiceExt::Unsubscribe_(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) {
    return SOAP_OK;
}


/// Web service operation 'PauseSubscription' (returns error code or SOAP_OK)
int EventServiceExt::PauseSubscription(_wsnt__PauseSubscription *wsnt__PauseSubscription, _wsnt__PauseSubscriptionResponse &wsnt__PauseSubscriptionResponse) {
    return SOAP_OK;
}


/// Web service operation 'ResumeSubscription' (returns error code or SOAP_OK)
int EventServiceExt::ResumeSubscription(_wsnt__ResumeSubscription *wsnt__ResumeSubscription, _wsnt__ResumeSubscriptionResponse &wsnt__ResumeSubscriptionResponse) {
    return SOAP_OK;
}

