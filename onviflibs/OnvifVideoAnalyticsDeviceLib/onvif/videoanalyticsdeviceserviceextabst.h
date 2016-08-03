#ifndef VIDEOANALYTICSDEVICESERVICEEXTABST_H
#define VIDEOANALYTICSDEVICESERVICEEXTABST_H

#include "soap/onvifvideoanalyticsdeviceH.h"

class VideoAnalyticsDeviceServiceExtAbst
{
public:
    VideoAnalyticsDeviceServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_videoanalyticsdevicews__GetServiceCapabilities *videoanalyticsdevicews__GetServiceCapabilities, _videoanalyticsdevicews__GetServiceCapabilitiesResponse &videoanalyticsdevicews__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'DeleteAnalyticsEngineControl' (returns error code or SOAP_OK)
    virtual	int DeleteAnalyticsEngineControl(_videoanalyticsdevicews__DeleteAnalyticsEngineControl *videoanalyticsdevicews__DeleteAnalyticsEngineControl, _videoanalyticsdevicews__DeleteAnalyticsEngineControlResponse &videoanalyticsdevicews__DeleteAnalyticsEngineControlResponse)  = 0;

    /// Web service operation 'CreateAnalyticsEngineControl' (returns error code or SOAP_OK)
    virtual	int CreateAnalyticsEngineControl(_videoanalyticsdevicews__CreateAnalyticsEngineControl *videoanalyticsdevicews__CreateAnalyticsEngineControl, _videoanalyticsdevicews__CreateAnalyticsEngineControlResponse &videoanalyticsdevicews__CreateAnalyticsEngineControlResponse)  = 0;

    /// Web service operation 'SetAnalyticsEngineControl' (returns error code or SOAP_OK)
    virtual	int SetAnalyticsEngineControl(_videoanalyticsdevicews__SetAnalyticsEngineControl *videoanalyticsdevicews__SetAnalyticsEngineControl, _videoanalyticsdevicews__SetAnalyticsEngineControlResponse &videoanalyticsdevicews__SetAnalyticsEngineControlResponse)  = 0;

    /// Web service operation 'GetAnalyticsEngineControl' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsEngineControl(_videoanalyticsdevicews__GetAnalyticsEngineControl *videoanalyticsdevicews__GetAnalyticsEngineControl, _videoanalyticsdevicews__GetAnalyticsEngineControlResponse &videoanalyticsdevicews__GetAnalyticsEngineControlResponse)  = 0;

    /// Web service operation 'GetAnalyticsEngineControls' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsEngineControls(_videoanalyticsdevicews__GetAnalyticsEngineControls *videoanalyticsdevicews__GetAnalyticsEngineControls, _videoanalyticsdevicews__GetAnalyticsEngineControlsResponse &videoanalyticsdevicews__GetAnalyticsEngineControlsResponse)  = 0;

    /// Web service operation 'GetAnalyticsEngine' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsEngine(_videoanalyticsdevicews__GetAnalyticsEngine *videoanalyticsdevicews__GetAnalyticsEngine, _videoanalyticsdevicews__GetAnalyticsEngineResponse &videoanalyticsdevicews__GetAnalyticsEngineResponse)  = 0;

    /// Web service operation 'GetAnalyticsEngines' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsEngines(_videoanalyticsdevicews__GetAnalyticsEngines *videoanalyticsdevicews__GetAnalyticsEngines, _videoanalyticsdevicews__GetAnalyticsEnginesResponse &videoanalyticsdevicews__GetAnalyticsEnginesResponse)  = 0;

    /// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    virtual	int SetVideoAnalyticsConfiguration(_videoanalyticsdevicews__SetVideoAnalyticsConfiguration *videoanalyticsdevicews__SetVideoAnalyticsConfiguration, _videoanalyticsdevicews__SetVideoAnalyticsConfigurationResponse &videoanalyticsdevicews__SetVideoAnalyticsConfigurationResponse)  = 0;

    /// Web service operation 'SetAnalyticsEngineInput' (returns error code or SOAP_OK)
    virtual	int SetAnalyticsEngineInput(_videoanalyticsdevicews__SetAnalyticsEngineInput *videoanalyticsdevicews__SetAnalyticsEngineInput, _videoanalyticsdevicews__SetAnalyticsEngineInputResponse &videoanalyticsdevicews__SetAnalyticsEngineInputResponse)  = 0;

    /// Web service operation 'GetAnalyticsEngineInput' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsEngineInput(_videoanalyticsdevicews__GetAnalyticsEngineInput *videoanalyticsdevicews__GetAnalyticsEngineInput, _videoanalyticsdevicews__GetAnalyticsEngineInputResponse &videoanalyticsdevicews__GetAnalyticsEngineInputResponse)  = 0;

    /// Web service operation 'GetAnalyticsEngineInputs' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsEngineInputs(_videoanalyticsdevicews__GetAnalyticsEngineInputs *videoanalyticsdevicews__GetAnalyticsEngineInputs, _videoanalyticsdevicews__GetAnalyticsEngineInputsResponse &videoanalyticsdevicews__GetAnalyticsEngineInputsResponse)  = 0;

    /// Web service operation 'GetAnalyticsDeviceStreamUri' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsDeviceStreamUri(_videoanalyticsdevicews__GetAnalyticsDeviceStreamUri *videoanalyticsdevicews__GetAnalyticsDeviceStreamUri, _videoanalyticsdevicews__GetAnalyticsDeviceStreamUriResponse &videoanalyticsdevicews__GetAnalyticsDeviceStreamUriResponse)  = 0;

    /// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    virtual	int GetVideoAnalyticsConfiguration(_videoanalyticsdevicews__GetVideoAnalyticsConfiguration *videoanalyticsdevicews__GetVideoAnalyticsConfiguration, _videoanalyticsdevicews__GetVideoAnalyticsConfigurationResponse &videoanalyticsdevicews__GetVideoAnalyticsConfigurationResponse)  = 0;

    /// Web service operation 'CreateAnalyticsEngineInputs' (returns error code or SOAP_OK)
    virtual	int CreateAnalyticsEngineInputs(_videoanalyticsdevicews__CreateAnalyticsEngineInputs *videoanalyticsdevicews__CreateAnalyticsEngineInputs, _videoanalyticsdevicews__CreateAnalyticsEngineInputsResponse &videoanalyticsdevicews__CreateAnalyticsEngineInputsResponse)  = 0;

    /// Web service operation 'DeleteAnalyticsEngineInputs' (returns error code or SOAP_OK)
    virtual	int DeleteAnalyticsEngineInputs(_videoanalyticsdevicews__DeleteAnalyticsEngineInputs *videoanalyticsdevicews__DeleteAnalyticsEngineInputs, _videoanalyticsdevicews__DeleteAnalyticsEngineInputsResponse &videoanalyticsdevicews__DeleteAnalyticsEngineInputsResponse)  = 0;

    /// Web service operation 'GetAnalyticsState' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsState(_videoanalyticsdevicews__GetAnalyticsState *videoanalyticsdevicews__GetAnalyticsState, _videoanalyticsdevicews__GetAnalyticsStateResponse &videoanalyticsdevicews__GetAnalyticsStateResponse)  = 0;

};

#endif // VIDEOANALYTICSDEVICESERVICEEXTABST_H
