#ifndef PTZSERVICEEXTABST_H
#define PTZSERVICEEXTABST_H

#include "soap/onvifptzH.h"

class PTZServiceExtAbst
{
public:
    PTZServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_ptzws__GetServiceCapabilities *ptzws__GetServiceCapabilities, _ptzws__GetServiceCapabilitiesResponse &ptzws__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetConfigurations' (returns error code or SOAP_OK)
    virtual	int GetConfigurations(_ptzws__GetConfigurations *ptzws__GetConfigurations, _ptzws__GetConfigurationsResponse &ptzws__GetConfigurationsResponse)  = 0;

    /// Web service operation 'GetPresets' (returns error code or SOAP_OK)
    virtual	int GetPresets(_ptzws__GetPresets *ptzws__GetPresets, _ptzws__GetPresetsResponse &ptzws__GetPresetsResponse)  = 0;

    /// Web service operation 'SetPreset' (returns error code or SOAP_OK)
    virtual	int SetPreset(_ptzws__SetPreset *ptzws__SetPreset, _ptzws__SetPresetResponse &ptzws__SetPresetResponse)  = 0;

    /// Web service operation 'RemovePreset' (returns error code or SOAP_OK)
    virtual	int RemovePreset(_ptzws__RemovePreset *ptzws__RemovePreset, _ptzws__RemovePresetResponse &ptzws__RemovePresetResponse)  = 0;

    /// Web service operation 'GotoPreset' (returns error code or SOAP_OK)
    virtual	int GotoPreset(_ptzws__GotoPreset *ptzws__GotoPreset, _ptzws__GotoPresetResponse &ptzws__GotoPresetResponse)  = 0;

    /// Web service operation 'GetStatus' (returns error code or SOAP_OK)
    virtual	int GetStatus(_ptzws__GetStatus *ptzws__GetStatus, _ptzws__GetStatusResponse &ptzws__GetStatusResponse)  = 0;

    /// Web service operation 'GetConfiguration' (returns error code or SOAP_OK)
    virtual	int GetConfiguration(_ptzws__GetConfiguration *ptzws__GetConfiguration, _ptzws__GetConfigurationResponse &ptzws__GetConfigurationResponse)  = 0;

    /// Web service operation 'GetNodes' (returns error code or SOAP_OK)
    virtual	int GetNodes(_ptzws__GetNodes *ptzws__GetNodes, _ptzws__GetNodesResponse &ptzws__GetNodesResponse)  = 0;

    /// Web service operation 'GetNode' (returns error code or SOAP_OK)
    virtual	int GetNode(_ptzws__GetNode *ptzws__GetNode, _ptzws__GetNodeResponse &ptzws__GetNodeResponse)  = 0;

    /// Web service operation 'SetConfiguration' (returns error code or SOAP_OK)
    virtual	int SetConfiguration(_ptzws__SetConfiguration *ptzws__SetConfiguration, _ptzws__SetConfigurationResponse &ptzws__SetConfigurationResponse)  = 0;

    /// Web service operation 'GetConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetConfigurationOptions(_ptzws__GetConfigurationOptions *ptzws__GetConfigurationOptions, _ptzws__GetConfigurationOptionsResponse &ptzws__GetConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GotoHomePosition' (returns error code or SOAP_OK)
    virtual	int GotoHomePosition(_ptzws__GotoHomePosition *ptzws__GotoHomePosition, _ptzws__GotoHomePositionResponse &ptzws__GotoHomePositionResponse)  = 0;

    /// Web service operation 'SetHomePosition' (returns error code or SOAP_OK)
    virtual	int SetHomePosition(_ptzws__SetHomePosition *ptzws__SetHomePosition, _ptzws__SetHomePositionResponse &ptzws__SetHomePositionResponse)  = 0;

    /// Web service operation 'ContinuousMove' (returns error code or SOAP_OK)
    virtual	int ContinuousMove(_ptzws__ContinuousMove *ptzws__ContinuousMove, _ptzws__ContinuousMoveResponse &ptzws__ContinuousMoveResponse)  = 0;

    /// Web service operation 'RelativeMove' (returns error code or SOAP_OK)
    virtual	int RelativeMove(_ptzws__RelativeMove *ptzws__RelativeMove, _ptzws__RelativeMoveResponse &ptzws__RelativeMoveResponse)  = 0;

    /// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
    virtual	int SendAuxiliaryCommand(_ptzws__SendAuxiliaryCommand *ptzws__SendAuxiliaryCommand, _ptzws__SendAuxiliaryCommandResponse &ptzws__SendAuxiliaryCommandResponse)  = 0;

    /// Web service operation 'AbsoluteMove' (returns error code or SOAP_OK)
    virtual	int AbsoluteMove(_ptzws__AbsoluteMove *ptzws__AbsoluteMove, _ptzws__AbsoluteMoveResponse &ptzws__AbsoluteMoveResponse)  = 0;

    /// Web service operation 'Stop' (returns error code or SOAP_OK)
    virtual	int Stop(_ptzws__Stop *ptzws__Stop, _ptzws__StopResponse &ptzws__StopResponse)  = 0;

    /// Web service operation 'GetPresetTours' (returns error code or SOAP_OK)
    virtual	int GetPresetTours(_ptzws__GetPresetTours *ptzws__GetPresetTours, _ptzws__GetPresetToursResponse &ptzws__GetPresetToursResponse)  = 0;

    /// Web service operation 'GetPresetTour' (returns error code or SOAP_OK)
    virtual	int GetPresetTour(_ptzws__GetPresetTour *ptzws__GetPresetTour, _ptzws__GetPresetTourResponse &ptzws__GetPresetTourResponse)  = 0;

    /// Web service operation 'GetPresetTourOptions' (returns error code or SOAP_OK)
    virtual	int GetPresetTourOptions(_ptzws__GetPresetTourOptions *ptzws__GetPresetTourOptions, _ptzws__GetPresetTourOptionsResponse &ptzws__GetPresetTourOptionsResponse)  = 0;

    /// Web service operation 'CreatePresetTour' (returns error code or SOAP_OK)
    virtual	int CreatePresetTour(_ptzws__CreatePresetTour *ptzws__CreatePresetTour, _ptzws__CreatePresetTourResponse &ptzws__CreatePresetTourResponse)  = 0;

    /// Web service operation 'ModifyPresetTour' (returns error code or SOAP_OK)
    virtual	int ModifyPresetTour(_ptzws__ModifyPresetTour *ptzws__ModifyPresetTour, _ptzws__ModifyPresetTourResponse &ptzws__ModifyPresetTourResponse)  = 0;

    /// Web service operation 'OperatePresetTour' (returns error code or SOAP_OK)
    virtual	int OperatePresetTour(_ptzws__OperatePresetTour *ptzws__OperatePresetTour, _ptzws__OperatePresetTourResponse &ptzws__OperatePresetTourResponse)  = 0;

    /// Web service operation 'RemovePresetTour' (returns error code or SOAP_OK)
    virtual	int RemovePresetTour(_ptzws__RemovePresetTour *ptzws__RemovePresetTour, _ptzws__RemovePresetTourResponse &ptzws__RemovePresetTourResponse)  = 0;

    /// Web service operation 'GetCompatibleConfigurations' (returns error code or SOAP_OK)
    virtual	int GetCompatibleConfigurations(_ptzws__GetCompatibleConfigurations *ptzws__GetCompatibleConfigurations, _ptzws__GetCompatibleConfigurationsResponse &ptzws__GetCompatibleConfigurationsResponse)  = 0;

};

#endif // PTZSERVICEEXTABST_H
