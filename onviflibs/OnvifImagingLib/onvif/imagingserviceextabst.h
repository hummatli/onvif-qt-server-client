#ifndef IMAGINGSERVICEEXTABST_H
#define IMAGINGSERVICEEXTABST_H

#include "soap/onvifimagingH.h"

class ImagingServiceExtAbst
{
public:
    ImagingServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_imagingws__GetServiceCapabilities *imagingws__GetServiceCapabilities, _imagingws__GetServiceCapabilitiesResponse &imagingws__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetImagingSettings' (returns error code or SOAP_OK)
    virtual	int GetImagingSettings(_imagingws__GetImagingSettings *imagingws__GetImagingSettings, _imagingws__GetImagingSettingsResponse &imagingws__GetImagingSettingsResponse)  = 0;

    /// Web service operation 'SetImagingSettings' (returns error code or SOAP_OK)
    virtual	int SetImagingSettings(_imagingws__SetImagingSettings *imagingws__SetImagingSettings, _imagingws__SetImagingSettingsResponse &imagingws__SetImagingSettingsResponse)  = 0;

    /// Web service operation 'GetOptions' (returns error code or SOAP_OK)
    virtual	int GetOptions(_imagingws__GetOptions *imagingws__GetOptions, _imagingws__GetOptionsResponse &imagingws__GetOptionsResponse)  = 0;

    /// Web service operation 'Move' (returns error code or SOAP_OK)
    virtual	int Move(_imagingws__Move *imagingws__Move, _imagingws__MoveResponse &imagingws__MoveResponse)  = 0;

    /// Web service operation 'Stop' (returns error code or SOAP_OK)
    virtual	int Stop(_imagingws__Stop *imagingws__Stop, _imagingws__StopResponse &imagingws__StopResponse)  = 0;

    /// Web service operation 'GetStatus' (returns error code or SOAP_OK)
    virtual	int GetStatus(_imagingws__GetStatus *imagingws__GetStatus, _imagingws__GetStatusResponse &imagingws__GetStatusResponse)  = 0;

    /// Web service operation 'GetMoveOptions' (returns error code or SOAP_OK)
    virtual	int GetMoveOptions(_imagingws__GetMoveOptions *imagingws__GetMoveOptions, _imagingws__GetMoveOptionsResponse &imagingws__GetMoveOptionsResponse)  = 0;


};

#endif // DEVICESERVICEEXTABST_H
