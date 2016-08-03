#ifndef EVENTSERVICEEXT_H
#define EVENTSERVICEEXT_H
#include "onvif/eventserviceextabst.h"


class EventServiceExt : public EventServiceExtAbst
{
public:
    EventServiceExt();

    /// Web service operation 'PullMessages' (returns error code or SOAP_OK)
    int  PullMessages(_eventws__PullMessages *eventws__PullMessages, _eventws__PullMessagesResponse &eventws__PullMessagesResponse);

    /// Web service operation 'Seek' (returns error code or SOAP_OK)
    int  Seek(_eventws__Seek *eventws__Seek, _eventws__SeekResponse &eventws__SeekResponse);

    /// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
    int  SetSynchronizationPoint(_eventws__SetSynchronizationPoint *eventws__SetSynchronizationPoint, _eventws__SetSynchronizationPointResponse &eventws__SetSynchronizationPointResponse);

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    int  GetServiceCapabilities(_eventws__GetServiceCapabilities *eventws__GetServiceCapabilities, _eventws__GetServiceCapabilitiesResponse &eventws__GetServiceCapabilitiesResponse);

    /// Web service operation 'CreatePullPointSubscription' (returns error code or SOAP_OK)
    int  CreatePullPointSubscription(_eventws__CreatePullPointSubscription *eventws__CreatePullPointSubscription, _eventws__CreatePullPointSubscriptionResponse &eventws__CreatePullPointSubscriptionResponse);

    /// Web service operation 'GetEventProperties' (returns error code or SOAP_OK)
    int  GetEventProperties(_eventws__GetEventProperties *eventws__GetEventProperties, _eventws__GetEventPropertiesResponse &eventws__GetEventPropertiesResponse);

    /// Web service operation 'Renew' (returns error code or SOAP_OK)
    int  Renew(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse);

    /// Web service operation 'Unsubscribe' (returns error code or SOAP_OK)
    int  Unsubscribe(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse);

    /// Web service operation 'Subscribe' (returns error code or SOAP_OK)
    int  Subscribe(_wsnt__Subscribe *wsnt__Subscribe, _wsnt__SubscribeResponse &wsnt__SubscribeResponse);

    /// Web service operation 'GetCurrentMessage' (returns error code or SOAP_OK)
    int  GetCurrentMessage(_wsnt__GetCurrentMessage *wsnt__GetCurrentMessage, _wsnt__GetCurrentMessageResponse &wsnt__GetCurrentMessageResponse);

    /// Web service one-way operation 'Notify' (return error code, SOAP_OK (no response), or send_Notify_empty_response())
    int  Notify(_wsnt__Notify *wsnt__Notify);

    //int  send_Notify_empty_response(int httpcode) { return soap_send_empty_response(this->soap, httpcode); }

    /// Web service operation 'GetMessages' (returns error code or SOAP_OK)
    int  GetMessages(_wsnt__GetMessages *wsnt__GetMessages, _wsnt__GetMessagesResponse &wsnt__GetMessagesResponse);

    /// Web service operation 'DestroyPullPoint' (returns error code or SOAP_OK)
    int  DestroyPullPoint(_wsnt__DestroyPullPoint *wsnt__DestroyPullPoint, _wsnt__DestroyPullPointResponse &wsnt__DestroyPullPointResponse);

    /// Web service one-way operation 'Notify' (return error code, SOAP_OK (no response), or send_Notify_empty_response())
    int  Notify_(_wsnt__Notify *wsnt__Notify);

    //int  send_Notify__empty_response(int httpcode) { return soap_send_empty_response(this->soap, httpcode); }

    /// Web service operation 'CreatePullPoint' (returns error code or SOAP_OK)
    int  CreatePullPoint(_wsnt__CreatePullPoint *wsnt__CreatePullPoint, _wsnt__CreatePullPointResponse &wsnt__CreatePullPointResponse);

    /// Web service operation 'Renew' (returns error code or SOAP_OK)
    int  Renew_(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse);

    /// Web service operation 'Unsubscribe' (returns error code or SOAP_OK)
    int  Unsubscribe_(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse);

    /// Web service operation 'PauseSubscription' (returns error code or SOAP_OK)
    int  PauseSubscription(_wsnt__PauseSubscription *wsnt__PauseSubscription, _wsnt__PauseSubscriptionResponse &wsnt__PauseSubscriptionResponse);

    /// Web service operation 'ResumeSubscription' (returns error code or SOAP_OK)
    int  ResumeSubscription(_wsnt__ResumeSubscription *wsnt__ResumeSubscription, _wsnt__ResumeSubscriptionResponse &wsnt__ResumeSubscriptionResponse);

};

#endif // EVENTSERVICEEXT_H
