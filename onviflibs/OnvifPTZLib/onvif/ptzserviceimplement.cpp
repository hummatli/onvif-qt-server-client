#include "soap/onvifptzPTZBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/ptzservice.h"

PTZServiceExtAbst * PTZService::serviceExt = NULL;

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int PTZBindingService::GetServiceCapabilities(_ptzws__GetServiceCapabilities *ptzws__GetServiceCapabilities, _ptzws__GetServiceCapabilitiesResponse &ptzws__GetServiceCapabilitiesResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetServiceCapabilities( ptzws__GetServiceCapabilities,  ptzws__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetConfigurations' (returns error code or SOAP_OK)
int PTZBindingService::GetConfigurations(_ptzws__GetConfigurations *ptzws__GetConfigurations, _ptzws__GetConfigurationsResponse &ptzws__GetConfigurationsResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetConfigurations( ptzws__GetConfigurations,  ptzws__GetConfigurationsResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetPresets' (returns error code or SOAP_OK)
int PTZBindingService::GetPresets(_ptzws__GetPresets *ptzws__GetPresets, _ptzws__GetPresetsResponse &ptzws__GetPresetsResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetPresets( ptzws__GetPresets, ptzws__GetPresetsResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetPreset' (returns error code or SOAP_OK)
int PTZBindingService::SetPreset(_ptzws__SetPreset *ptzws__SetPreset, _ptzws__SetPresetResponse &ptzws__SetPresetResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->SetPreset( ptzws__SetPreset,  ptzws__SetPresetResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemovePreset' (returns error code or SOAP_OK)
int PTZBindingService::RemovePreset(_ptzws__RemovePreset *ptzws__RemovePreset, _ptzws__RemovePresetResponse &ptzws__RemovePresetResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->RemovePreset( ptzws__RemovePreset, ptzws__RemovePresetResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GotoPreset' (returns error code or SOAP_OK)
int PTZBindingService::GotoPreset(_ptzws__GotoPreset *ptzws__GotoPreset, _ptzws__GotoPresetResponse &ptzws__GotoPresetResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GotoPreset( ptzws__GotoPreset, ptzws__GotoPresetResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetStatus' (returns error code or SOAP_OK)
int PTZBindingService::GetStatus(_ptzws__GetStatus *ptzws__GetStatus, _ptzws__GetStatusResponse &ptzws__GetStatusResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetStatus( ptzws__GetStatus, ptzws__GetStatusResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetConfiguration' (returns error code or SOAP_OK)
int PTZBindingService::GetConfiguration(_ptzws__GetConfiguration *ptzws__GetConfiguration, _ptzws__GetConfigurationResponse &ptzws__GetConfigurationResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetConfiguration( ptzws__GetConfiguration, ptzws__GetConfigurationResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNodes' (returns error code or SOAP_OK)
int PTZBindingService::GetNodes(_ptzws__GetNodes *ptzws__GetNodes, _ptzws__GetNodesResponse &ptzws__GetNodesResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetNodes( ptzws__GetNodes, ptzws__GetNodesResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNode' (returns error code or SOAP_OK)
int PTZBindingService::GetNode(_ptzws__GetNode *ptzws__GetNode, _ptzws__GetNodeResponse &ptzws__GetNodeResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetNode( ptzws__GetNode, ptzws__GetNodeResponse) ;
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetConfiguration' (returns error code or SOAP_OK)
int PTZBindingService::SetConfiguration(_ptzws__SetConfiguration *ptzws__SetConfiguration, _ptzws__SetConfigurationResponse &ptzws__SetConfigurationResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->SetConfiguration( ptzws__SetConfiguration, ptzws__SetConfigurationResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetConfigurationOptions' (returns error code or SOAP_OK)
int PTZBindingService::GetConfigurationOptions(_ptzws__GetConfigurationOptions *ptzws__GetConfigurationOptions, _ptzws__GetConfigurationOptionsResponse &ptzws__GetConfigurationOptionsResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetConfigurationOptions( ptzws__GetConfigurationOptions, ptzws__GetConfigurationOptionsResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GotoHomePosition' (returns error code or SOAP_OK)
int PTZBindingService::GotoHomePosition(_ptzws__GotoHomePosition *ptzws__GotoHomePosition, _ptzws__GotoHomePositionResponse &ptzws__GotoHomePositionResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GotoHomePosition( ptzws__GotoHomePosition, ptzws__GotoHomePositionResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetHomePosition' (returns error code or SOAP_OK)
int PTZBindingService::SetHomePosition(_ptzws__SetHomePosition *ptzws__SetHomePosition, _ptzws__SetHomePositionResponse &ptzws__SetHomePositionResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->SetHomePosition( ptzws__SetHomePosition, ptzws__SetHomePositionResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'ContinuousMove' (returns error code or SOAP_OK)
int PTZBindingService::ContinuousMove(_ptzws__ContinuousMove *ptzws__ContinuousMove, _ptzws__ContinuousMoveResponse &ptzws__ContinuousMoveResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->ContinuousMove( ptzws__ContinuousMove, ptzws__ContinuousMoveResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RelativeMove' (returns error code or SOAP_OK)
int PTZBindingService::RelativeMove(_ptzws__RelativeMove *ptzws__RelativeMove, _ptzws__RelativeMoveResponse &ptzws__RelativeMoveResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->RelativeMove( ptzws__RelativeMove, ptzws__RelativeMoveResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
int PTZBindingService::SendAuxiliaryCommand(_ptzws__SendAuxiliaryCommand *ptzws__SendAuxiliaryCommand, _ptzws__SendAuxiliaryCommandResponse &ptzws__SendAuxiliaryCommandResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->SendAuxiliaryCommand( ptzws__SendAuxiliaryCommand, ptzws__SendAuxiliaryCommandResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AbsoluteMove' (returns error code or SOAP_OK)
int PTZBindingService::AbsoluteMove(_ptzws__AbsoluteMove *ptzws__AbsoluteMove, _ptzws__AbsoluteMoveResponse &ptzws__AbsoluteMoveResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->AbsoluteMove( ptzws__AbsoluteMove, ptzws__AbsoluteMoveResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'Stop' (returns error code or SOAP_OK)
int PTZBindingService::Stop(_ptzws__Stop *ptzws__Stop, _ptzws__StopResponse &ptzws__StopResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->Stop( ptzws__Stop, ptzws__StopResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetPresetTours' (returns error code or SOAP_OK)
int PTZBindingService::GetPresetTours(_ptzws__GetPresetTours *ptzws__GetPresetTours, _ptzws__GetPresetToursResponse &ptzws__GetPresetToursResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetPresetTours( ptzws__GetPresetTours, ptzws__GetPresetToursResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetPresetTour' (returns error code or SOAP_OK)
int PTZBindingService::GetPresetTour(_ptzws__GetPresetTour *ptzws__GetPresetTour, _ptzws__GetPresetTourResponse &ptzws__GetPresetTourResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetPresetTour( ptzws__GetPresetTour,  ptzws__GetPresetTourResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetPresetTourOptions' (returns error code or SOAP_OK)
int PTZBindingService::GetPresetTourOptions(_ptzws__GetPresetTourOptions *ptzws__GetPresetTourOptions, _ptzws__GetPresetTourOptionsResponse &ptzws__GetPresetTourOptionsResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetPresetTourOptions( ptzws__GetPresetTourOptions, ptzws__GetPresetTourOptionsResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreatePresetTour' (returns error code or SOAP_OK)
int PTZBindingService::CreatePresetTour(_ptzws__CreatePresetTour *ptzws__CreatePresetTour, _ptzws__CreatePresetTourResponse &ptzws__CreatePresetTourResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->CreatePresetTour( ptzws__CreatePresetTour, ptzws__CreatePresetTourResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'ModifyPresetTour' (returns error code or SOAP_OK)
int PTZBindingService::ModifyPresetTour(_ptzws__ModifyPresetTour *ptzws__ModifyPresetTour, _ptzws__ModifyPresetTourResponse &ptzws__ModifyPresetTourResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->ModifyPresetTour( ptzws__ModifyPresetTour, ptzws__ModifyPresetTourResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'OperatePresetTour' (returns error code or SOAP_OK)
int PTZBindingService::OperatePresetTour(_ptzws__OperatePresetTour *ptzws__OperatePresetTour, _ptzws__OperatePresetTourResponse &ptzws__OperatePresetTourResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->OperatePresetTour( ptzws__OperatePresetTour, ptzws__OperatePresetTourResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemovePresetTour' (returns error code or SOAP_OK)
int PTZBindingService::RemovePresetTour(_ptzws__RemovePresetTour *ptzws__RemovePresetTour, _ptzws__RemovePresetTourResponse &ptzws__RemovePresetTourResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->RemovePresetTour( ptzws__RemovePresetTour, ptzws__RemovePresetTourResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleConfigurations' (returns error code or SOAP_OK)
int PTZBindingService::GetCompatibleConfigurations(_ptzws__GetCompatibleConfigurations *ptzws__GetCompatibleConfigurations, _ptzws__GetCompatibleConfigurationsResponse &ptzws__GetCompatibleConfigurationsResponse) {
    if(PTZService::serviceExt != NULL){
        return PTZService::serviceExt->GetCompatibleConfigurations( ptzws__GetCompatibleConfigurations, ptzws__GetCompatibleConfigurationsResponse);
    } else {
        qDebug() << "PTZService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


