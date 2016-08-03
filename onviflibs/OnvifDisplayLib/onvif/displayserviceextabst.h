#ifndef DISPLAYSERVICEEXTABST_H
#define DISPLAYSERVICEEXTABST_H

#include "soap/onvifdisplayH.h"

class DisplayServiceExtAbst
{
public:
    DisplayServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_displayws__GetServiceCapabilities *displayws__GetServiceCapabilities, _displayws__GetServiceCapabilitiesResponse &displayws__GetServiceCapabilitiesResponse) = 0;

    /// Web service operation 'GetLayout' (returns error code or SOAP_OK)
    virtual	int GetLayout(_displayws__GetLayout *displayws__GetLayout, _displayws__GetLayoutResponse &displayws__GetLayoutResponse) = 0;

    /// Web service operation 'SetLayout' (returns error code or SOAP_OK)
    virtual	int SetLayout(_displayws__SetLayout *displayws__SetLayout, _displayws__SetLayoutResponse &displayws__SetLayoutResponse) = 0;

    /// Web service operation 'GetDisplayOptions' (returns error code or SOAP_OK)
    virtual	int GetDisplayOptions(_displayws__GetDisplayOptions *displayws__GetDisplayOptions, _displayws__GetDisplayOptionsResponse &displayws__GetDisplayOptionsResponse) = 0;

    /// Web service operation 'GetPaneConfigurations' (returns error code or SOAP_OK)
    virtual	int GetPaneConfigurations(_displayws__GetPaneConfigurations *displayws__GetPaneConfigurations, _displayws__GetPaneConfigurationsResponse &displayws__GetPaneConfigurationsResponse) = 0;

    /// Web service operation 'GetPaneConfiguration' (returns error code or SOAP_OK)
    virtual	int GetPaneConfiguration(_displayws__GetPaneConfiguration *displayws__GetPaneConfiguration, _displayws__GetPaneConfigurationResponse &displayws__GetPaneConfigurationResponse) = 0;

    /// Web service operation 'SetPaneConfigurations' (returns error code or SOAP_OK)
    virtual	int SetPaneConfigurations(_displayws__SetPaneConfigurations *displayws__SetPaneConfigurations, _displayws__SetPaneConfigurationsResponse &displayws__SetPaneConfigurationsResponse) = 0;

    /// Web service operation 'SetPaneConfiguration' (returns error code or SOAP_OK)
    virtual	int SetPaneConfiguration(_displayws__SetPaneConfiguration *displayws__SetPaneConfiguration, _displayws__SetPaneConfigurationResponse &displayws__SetPaneConfigurationResponse) = 0;

    /// Web service operation 'CreatePaneConfiguration' (returns error code or SOAP_OK)
    virtual	int CreatePaneConfiguration(_displayws__CreatePaneConfiguration *displayws__CreatePaneConfiguration, _displayws__CreatePaneConfigurationResponse &displayws__CreatePaneConfigurationResponse) = 0;

    /// Web service operation 'DeletePaneConfiguration' (returns error code or SOAP_OK)
    virtual	int DeletePaneConfiguration(_displayws__DeletePaneConfiguration *displayws__DeletePaneConfiguration, _displayws__DeletePaneConfigurationResponse &displayws__DeletePaneConfigurationResponse) = 0;

};

#endif // DISPLAYSERVICEEXTABST_H
