#include "soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/videoanalyticsdeviceservice.h"

VideoAnalyticsDeviceServiceExtAbst * VideoAnalyticsDeviceService::serviceExt = NULL;


/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetServiceCapabilities(_videoanalyticsdevicews__GetServiceCapabilities *videoanalyticsdevicews__GetServiceCapabilities, _videoanalyticsdevicews__GetServiceCapabilitiesResponse &videoanalyticsdevicews__GetServiceCapabilitiesResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetServiceCapabilities( videoanalyticsdevicews__GetServiceCapabilities,videoanalyticsdevicews__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'DeleteAnalyticsEngineControl' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::DeleteAnalyticsEngineControl(_videoanalyticsdevicews__DeleteAnalyticsEngineControl *videoanalyticsdevicews__DeleteAnalyticsEngineControl, _videoanalyticsdevicews__DeleteAnalyticsEngineControlResponse &videoanalyticsdevicews__DeleteAnalyticsEngineControlResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->DeleteAnalyticsEngineControl( videoanalyticsdevicews__DeleteAnalyticsEngineControl, videoanalyticsdevicews__DeleteAnalyticsEngineControlResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'CreateAnalyticsEngineControl' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::CreateAnalyticsEngineControl(_videoanalyticsdevicews__CreateAnalyticsEngineControl *videoanalyticsdevicews__CreateAnalyticsEngineControl, _videoanalyticsdevicews__CreateAnalyticsEngineControlResponse &videoanalyticsdevicews__CreateAnalyticsEngineControlResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->CreateAnalyticsEngineControl( videoanalyticsdevicews__CreateAnalyticsEngineControl,  videoanalyticsdevicews__CreateAnalyticsEngineControlResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'SetAnalyticsEngineControl' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::SetAnalyticsEngineControl(_videoanalyticsdevicews__SetAnalyticsEngineControl *videoanalyticsdevicews__SetAnalyticsEngineControl, _videoanalyticsdevicews__SetAnalyticsEngineControlResponse &videoanalyticsdevicews__SetAnalyticsEngineControlResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->SetAnalyticsEngineControl( videoanalyticsdevicews__SetAnalyticsEngineControl, videoanalyticsdevicews__SetAnalyticsEngineControlResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetAnalyticsEngineControl' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetAnalyticsEngineControl(_videoanalyticsdevicews__GetAnalyticsEngineControl *videoanalyticsdevicews__GetAnalyticsEngineControl, _videoanalyticsdevicews__GetAnalyticsEngineControlResponse &videoanalyticsdevicews__GetAnalyticsEngineControlResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetAnalyticsEngineControl( videoanalyticsdevicews__GetAnalyticsEngineControl,  videoanalyticsdevicews__GetAnalyticsEngineControlResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetAnalyticsEngineControls' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetAnalyticsEngineControls(_videoanalyticsdevicews__GetAnalyticsEngineControls *videoanalyticsdevicews__GetAnalyticsEngineControls, _videoanalyticsdevicews__GetAnalyticsEngineControlsResponse &videoanalyticsdevicews__GetAnalyticsEngineControlsResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetAnalyticsEngineControls( videoanalyticsdevicews__GetAnalyticsEngineControls, videoanalyticsdevicews__GetAnalyticsEngineControlsResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetAnalyticsEngine' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetAnalyticsEngine(_videoanalyticsdevicews__GetAnalyticsEngine *videoanalyticsdevicews__GetAnalyticsEngine, _videoanalyticsdevicews__GetAnalyticsEngineResponse &videoanalyticsdevicews__GetAnalyticsEngineResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetAnalyticsEngine( videoanalyticsdevicews__GetAnalyticsEngine, videoanalyticsdevicews__GetAnalyticsEngineResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetAnalyticsEngines' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetAnalyticsEngines(_videoanalyticsdevicews__GetAnalyticsEngines *videoanalyticsdevicews__GetAnalyticsEngines, _videoanalyticsdevicews__GetAnalyticsEnginesResponse &videoanalyticsdevicews__GetAnalyticsEnginesResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetAnalyticsEngines( videoanalyticsdevicews__GetAnalyticsEngines, videoanalyticsdevicews__GetAnalyticsEnginesResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::SetVideoAnalyticsConfiguration(_videoanalyticsdevicews__SetVideoAnalyticsConfiguration *videoanalyticsdevicews__SetVideoAnalyticsConfiguration, _videoanalyticsdevicews__SetVideoAnalyticsConfigurationResponse &videoanalyticsdevicews__SetVideoAnalyticsConfigurationResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->SetVideoAnalyticsConfiguration( videoanalyticsdevicews__SetVideoAnalyticsConfiguration,  videoanalyticsdevicews__SetVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'SetAnalyticsEngineInput' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::SetAnalyticsEngineInput(_videoanalyticsdevicews__SetAnalyticsEngineInput *videoanalyticsdevicews__SetAnalyticsEngineInput, _videoanalyticsdevicews__SetAnalyticsEngineInputResponse &videoanalyticsdevicews__SetAnalyticsEngineInputResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->SetAnalyticsEngineInput( videoanalyticsdevicews__SetAnalyticsEngineInput, videoanalyticsdevicews__SetAnalyticsEngineInputResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetAnalyticsEngineInput' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetAnalyticsEngineInput(_videoanalyticsdevicews__GetAnalyticsEngineInput *videoanalyticsdevicews__GetAnalyticsEngineInput, _videoanalyticsdevicews__GetAnalyticsEngineInputResponse &videoanalyticsdevicews__GetAnalyticsEngineInputResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetAnalyticsEngineInput( videoanalyticsdevicews__GetAnalyticsEngineInput, videoanalyticsdevicews__GetAnalyticsEngineInputResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetAnalyticsEngineInputs' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetAnalyticsEngineInputs(_videoanalyticsdevicews__GetAnalyticsEngineInputs *videoanalyticsdevicews__GetAnalyticsEngineInputs, _videoanalyticsdevicews__GetAnalyticsEngineInputsResponse &videoanalyticsdevicews__GetAnalyticsEngineInputsResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetAnalyticsEngineInputs( videoanalyticsdevicews__GetAnalyticsEngineInputs,  videoanalyticsdevicews__GetAnalyticsEngineInputsResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetAnalyticsDeviceStreamUri' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetAnalyticsDeviceStreamUri(_videoanalyticsdevicews__GetAnalyticsDeviceStreamUri *videoanalyticsdevicews__GetAnalyticsDeviceStreamUri, _videoanalyticsdevicews__GetAnalyticsDeviceStreamUriResponse &videoanalyticsdevicews__GetAnalyticsDeviceStreamUriResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetAnalyticsDeviceStreamUri( videoanalyticsdevicews__GetAnalyticsDeviceStreamUri, videoanalyticsdevicews__GetAnalyticsDeviceStreamUriResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetVideoAnalyticsConfiguration(_videoanalyticsdevicews__GetVideoAnalyticsConfiguration *videoanalyticsdevicews__GetVideoAnalyticsConfiguration, _videoanalyticsdevicews__GetVideoAnalyticsConfigurationResponse &videoanalyticsdevicews__GetVideoAnalyticsConfigurationResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetVideoAnalyticsConfiguration( videoanalyticsdevicews__GetVideoAnalyticsConfiguration, videoanalyticsdevicews__GetVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'CreateAnalyticsEngineInputs' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::CreateAnalyticsEngineInputs(_videoanalyticsdevicews__CreateAnalyticsEngineInputs *videoanalyticsdevicews__CreateAnalyticsEngineInputs, _videoanalyticsdevicews__CreateAnalyticsEngineInputsResponse &videoanalyticsdevicews__CreateAnalyticsEngineInputsResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->CreateAnalyticsEngineInputs( videoanalyticsdevicews__CreateAnalyticsEngineInputs, videoanalyticsdevicews__CreateAnalyticsEngineInputsResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'DeleteAnalyticsEngineInputs' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::DeleteAnalyticsEngineInputs(_videoanalyticsdevicews__DeleteAnalyticsEngineInputs *videoanalyticsdevicews__DeleteAnalyticsEngineInputs, _videoanalyticsdevicews__DeleteAnalyticsEngineInputsResponse &videoanalyticsdevicews__DeleteAnalyticsEngineInputsResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->DeleteAnalyticsEngineInputs(videoanalyticsdevicews__DeleteAnalyticsEngineInputs, videoanalyticsdevicews__DeleteAnalyticsEngineInputsResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetAnalyticsState' (returns error code or SOAP_OK)
int AnalyticsDeviceBindingService::GetAnalyticsState(_videoanalyticsdevicews__GetAnalyticsState *videoanalyticsdevicews__GetAnalyticsState, _videoanalyticsdevicews__GetAnalyticsStateResponse &videoanalyticsdevicews__GetAnalyticsStateResponse) {
    if(VideoAnalyticsDeviceService::serviceExt != NULL){
        return VideoAnalyticsDeviceService::serviceExt->GetAnalyticsState( videoanalyticsdevicews__GetAnalyticsState,  videoanalyticsdevicews__GetAnalyticsStateResponse);
    } else {
        qDebug() << "VideoAnalyticsDeviceService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
