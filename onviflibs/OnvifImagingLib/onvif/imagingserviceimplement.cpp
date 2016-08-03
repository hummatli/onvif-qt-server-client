#include "soap/onvifimagingImagingBindingService.h"
#include <QObject>
#include <QDebug>
#include "onvif/imagingservice.h"

ImagingServiceExtAbst * ImagingService::serviceExt = NULL;

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int ImagingBindingService::GetServiceCapabilities(_imagingws__GetServiceCapabilities *imagingws__GetServiceCapabilities, _imagingws__GetServiceCapabilitiesResponse &imagingws__GetServiceCapabilitiesResponse){
    if(ImagingService::serviceExt != NULL){
        return ImagingService::serviceExt->GetServiceCapabilities(imagingws__GetServiceCapabilities,imagingws__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "ImagingService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetImagingSettings' (returns error code or SOAP_OK)
int ImagingBindingService::GetImagingSettings(_imagingws__GetImagingSettings *imagingws__GetImagingSettings, _imagingws__GetImagingSettingsResponse &imagingws__GetImagingSettingsResponse){
    if(ImagingService::serviceExt != NULL){
        return ImagingService::serviceExt->GetImagingSettings( imagingws__GetImagingSettings, imagingws__GetImagingSettingsResponse);
    } else {
        qDebug() << "ImagingService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetImagingSettings' (returns error code or SOAP_OK)
int ImagingBindingService::SetImagingSettings(_imagingws__SetImagingSettings *imagingws__SetImagingSettings, _imagingws__SetImagingSettingsResponse &imagingws__SetImagingSettingsResponse){
    if(ImagingService::serviceExt != NULL){
        return ImagingService::serviceExt->SetImagingSettings( imagingws__SetImagingSettings, imagingws__SetImagingSettingsResponse);
    } else {
        qDebug() << "ImagingService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOptions' (returns error code or SOAP_OK)
int ImagingBindingService::GetOptions(_imagingws__GetOptions *imagingws__GetOptions, _imagingws__GetOptionsResponse &imagingws__GetOptionsResponse){
    if(ImagingService::serviceExt != NULL){
        return ImagingService::serviceExt->GetOptions( imagingws__GetOptions,  imagingws__GetOptionsResponse);
    } else {
        qDebug() << "ImagingService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'Move' (returns error code or SOAP_OK)
int ImagingBindingService::Move(_imagingws__Move *imagingws__Move, _imagingws__MoveResponse &imagingws__MoveResponse){
    if(ImagingService::serviceExt != NULL){
        return ImagingService::serviceExt->Move( imagingws__Move,  imagingws__MoveResponse);
    } else {
        qDebug() << "ImagingService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'Stop' (returns error code or SOAP_OK)
int ImagingBindingService::Stop(_imagingws__Stop *imagingws__Stop, _imagingws__StopResponse &imagingws__StopResponse){
    if(ImagingService::serviceExt != NULL){
        return ImagingService::serviceExt->Stop( imagingws__Stop, imagingws__StopResponse);
    } else {
        qDebug() << "ImagingService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetStatus' (returns error code or SOAP_OK)
int ImagingBindingService::GetStatus(_imagingws__GetStatus *imagingws__GetStatus, _imagingws__GetStatusResponse &imagingws__GetStatusResponse){
    if(ImagingService::serviceExt != NULL){
        return ImagingService::serviceExt->GetStatus( imagingws__GetStatus, imagingws__GetStatusResponse);
    } else {
        qDebug() << "ImagingService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMoveOptions' (returns error code or SOAP_OK)
int ImagingBindingService::GetMoveOptions(_imagingws__GetMoveOptions *imagingws__GetMoveOptions, _imagingws__GetMoveOptionsResponse &imagingws__GetMoveOptionsResponse){
    if(ImagingService::serviceExt != NULL){
        return ImagingService::serviceExt->GetMoveOptions( imagingws__GetMoveOptions,  imagingws__GetMoveOptionsResponse);
    } else {
        qDebug() << "ImagingService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

