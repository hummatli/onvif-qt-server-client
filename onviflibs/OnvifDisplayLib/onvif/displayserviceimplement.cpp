#include "soap/onvifdisplayDisplayBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/displayservice.h"

DisplayServiceExtAbst * DisplayService::serviceExt = NULL;


// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int DisplayBindingService::GetServiceCapabilities(_displayws__GetServiceCapabilities *displayws__GetServiceCapabilities, _displayws__GetServiceCapabilitiesResponse &displayws__GetServiceCapabilitiesResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->GetServiceCapabilities(displayws__GetServiceCapabilities,displayws__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetLayout' (returns error code or SOAP_OK)
int DisplayBindingService::GetLayout(_displayws__GetLayout *displayws__GetLayout, _displayws__GetLayoutResponse &displayws__GetLayoutResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->GetLayout( displayws__GetLayout, displayws__GetLayoutResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetLayout' (returns error code or SOAP_OK)
int DisplayBindingService::SetLayout(_displayws__SetLayout *displayws__SetLayout, _displayws__SetLayoutResponse &displayws__SetLayoutResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->SetLayout( displayws__SetLayout, displayws__SetLayoutResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDisplayOptions' (returns error code or SOAP_OK)
int DisplayBindingService::GetDisplayOptions(_displayws__GetDisplayOptions *displayws__GetDisplayOptions, _displayws__GetDisplayOptionsResponse &displayws__GetDisplayOptionsResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->GetDisplayOptions( displayws__GetDisplayOptions,  displayws__GetDisplayOptionsResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetPaneConfigurations' (returns error code or SOAP_OK)
int DisplayBindingService::GetPaneConfigurations(_displayws__GetPaneConfigurations *displayws__GetPaneConfigurations, _displayws__GetPaneConfigurationsResponse &displayws__GetPaneConfigurationsResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->GetPaneConfigurations( displayws__GetPaneConfigurations, displayws__GetPaneConfigurationsResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetPaneConfiguration' (returns error code or SOAP_OK)
int DisplayBindingService::GetPaneConfiguration(_displayws__GetPaneConfiguration *displayws__GetPaneConfiguration, _displayws__GetPaneConfigurationResponse &displayws__GetPaneConfigurationResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->GetPaneConfiguration( displayws__GetPaneConfiguration, displayws__GetPaneConfigurationResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetPaneConfigurations' (returns error code or SOAP_OK)
int DisplayBindingService::SetPaneConfigurations(_displayws__SetPaneConfigurations *displayws__SetPaneConfigurations, _displayws__SetPaneConfigurationsResponse &displayws__SetPaneConfigurationsResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->SetPaneConfigurations( displayws__SetPaneConfigurations, displayws__SetPaneConfigurationsResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetPaneConfiguration' (returns error code or SOAP_OK)
int DisplayBindingService::SetPaneConfiguration(_displayws__SetPaneConfiguration *displayws__SetPaneConfiguration, _displayws__SetPaneConfigurationResponse &displayws__SetPaneConfigurationResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->SetPaneConfiguration( displayws__SetPaneConfiguration,  displayws__SetPaneConfigurationResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreatePaneConfiguration' (returns error code or SOAP_OK)
int DisplayBindingService::CreatePaneConfiguration(_displayws__CreatePaneConfiguration *displayws__CreatePaneConfiguration, _displayws__CreatePaneConfigurationResponse &displayws__CreatePaneConfigurationResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->CreatePaneConfiguration( displayws__CreatePaneConfiguration, displayws__CreatePaneConfigurationResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeletePaneConfiguration' (returns error code or SOAP_OK)
int DisplayBindingService::DeletePaneConfiguration(_displayws__DeletePaneConfiguration *displayws__DeletePaneConfiguration, _displayws__DeletePaneConfigurationResponse &displayws__DeletePaneConfigurationResponse){
    if(DisplayService::serviceExt != NULL){
        return DisplayService::serviceExt->DeletePaneConfiguration( displayws__DeletePaneConfiguration, displayws__DeletePaneConfigurationResponse);
    } else {
        qDebug() << "DisplayService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
