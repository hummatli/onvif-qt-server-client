#ifndef EVENTSERVICEEXTABST_H
#define EVENTSERVICEEXTABST_H

#include "soap/onvifeventH.h"

class EventServiceExtAbst
{
public:
    EventServiceExtAbst(){

    };


    //Burda iki funksiya var notify la baqli olara baxarsan onlar ilkin olaraq initialse olublar

    /// Web service operation 'PullMessages' (returns error code or SOAP_OK)
    virtual	int PullMessages(_eventws__PullMessages *eventws__PullMessages, _eventws__PullMessagesResponse &eventws__PullMessagesResponse) = 0;

    /// Web service operation 'Seek' (returns error code or SOAP_OK)
    virtual	int Seek(_eventws__Seek *eventws__Seek, _eventws__SeekResponse &eventws__SeekResponse) = 0;

    /// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
    virtual	int SetSynchronizationPoint(_eventws__SetSynchronizationPoint *eventws__SetSynchronizationPoint, _eventws__SetSynchronizationPointResponse &eventws__SetSynchronizationPointResponse) = 0;

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_eventws__GetServiceCapabilities *eventws__GetServiceCapabilities, _eventws__GetServiceCapabilitiesResponse &eventws__GetServiceCapabilitiesResponse) = 0;

    /// Web service operation 'CreatePullPointSubscription' (returns error code or SOAP_OK)
    virtual	int CreatePullPointSubscription(_eventws__CreatePullPointSubscription *eventws__CreatePullPointSubscription, _eventws__CreatePullPointSubscriptionResponse &eventws__CreatePullPointSubscriptionResponse) = 0;

    /// Web service operation 'GetEventProperties' (returns error code or SOAP_OK)
    virtual	int GetEventProperties(_eventws__GetEventProperties *eventws__GetEventProperties, _eventws__GetEventPropertiesResponse &eventws__GetEventPropertiesResponse) = 0;

    /// Web service operation 'Renew' (returns error code or SOAP_OK)
    virtual	int Renew(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) = 0;

    /// Web service operation 'Unsubscribe' (returns error code or SOAP_OK)
    virtual	int Unsubscribe(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) = 0;

    /// Web service operation 'Subscribe' (returns error code or SOAP_OK)
    virtual	int Subscribe(_wsnt__Subscribe *wsnt__Subscribe, _wsnt__SubscribeResponse &wsnt__SubscribeResponse) = 0;

    /// Web service operation 'GetCurrentMessage' (returns error code or SOAP_OK)
    virtual	int GetCurrentMessage(_wsnt__GetCurrentMessage *wsnt__GetCurrentMessage, _wsnt__GetCurrentMessageResponse &wsnt__GetCurrentMessageResponse) = 0;

    /// Web service one-way operation 'Notify' (return error code, SOAP_OK (no response), or send_Notify_empty_response())
    virtual	int Notify(_wsnt__Notify *wsnt__Notify) = 0;

    //virtual	int send_Notify_empty_response(int httpcode) { return soap_send_empty_response(this->soap, httpcode); }

    /// Web service operation 'GetMessages' (returns error code or SOAP_OK)
    virtual	int GetMessages(_wsnt__GetMessages *wsnt__GetMessages, _wsnt__GetMessagesResponse &wsnt__GetMessagesResponse) = 0;

    /// Web service operation 'DestroyPullPoint' (returns error code or SOAP_OK)
    virtual	int DestroyPullPoint(_wsnt__DestroyPullPoint *wsnt__DestroyPullPoint, _wsnt__DestroyPullPointResponse &wsnt__DestroyPullPointResponse) = 0;

    /// Web service one-way operation 'Notify' (return error code, SOAP_OK (no response), or send_Notify_empty_response())
    virtual	int Notify_(_wsnt__Notify *wsnt__Notify) = 0;

    //virtual	int send_Notify__empty_response(int httpcode) { return soap_send_empty_response(this->soap, httpcode); }

    /// Web service operation 'CreatePullPoint' (returns error code or SOAP_OK)
    virtual	int CreatePullPoint(_wsnt__CreatePullPoint *wsnt__CreatePullPoint, _wsnt__CreatePullPointResponse &wsnt__CreatePullPointResponse) = 0;

    /// Web service operation 'Renew' (returns error code or SOAP_OK)
    virtual	int Renew_(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) = 0;

    /// Web service operation 'Unsubscribe' (returns error code or SOAP_OK)
    virtual	int Unsubscribe_(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) = 0;

    /// Web service operation 'PauseSubscription' (returns error code or SOAP_OK)
    virtual	int PauseSubscription(_wsnt__PauseSubscription *wsnt__PauseSubscription, _wsnt__PauseSubscriptionResponse &wsnt__PauseSubscriptionResponse) = 0;

    /// Web service operation 'ResumeSubscription' (returns error code or SOAP_OK)
    virtual	int ResumeSubscription(_wsnt__ResumeSubscription *wsnt__ResumeSubscription, _wsnt__ResumeSubscriptionResponse &wsnt__ResumeSubscriptionResponse) = 0;
};

#endif // EVENTSERVICEEXTABST_H
