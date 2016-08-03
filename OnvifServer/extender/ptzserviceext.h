#ifndef PTZSERVICEEXT_H
#define PTZSERVICEEXT_H
#include "onvif/ptzserviceextabst.h"


class PTZServiceExt : public PTZServiceExtAbst
{
public:
    PTZServiceExt();

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    int GetServiceCapabilities(_ptzws__GetServiceCapabilities *ptzws__GetServiceCapabilities, _ptzws__GetServiceCapabilitiesResponse &ptzws__GetServiceCapabilitiesResponse);

    /// Web service operation 'GetConfigurations' (returns error code or SOAP_OK)
    int GetConfigurations(_ptzws__GetConfigurations *ptzws__GetConfigurations, _ptzws__GetConfigurationsResponse &ptzws__GetConfigurationsResponse);

    /// Web service operation 'GetPresets' (returns error code or SOAP_OK)
    int GetPresets(_ptzws__GetPresets *ptzws__GetPresets, _ptzws__GetPresetsResponse &ptzws__GetPresetsResponse);

    /// Web service operation 'SetPreset' (returns error code or SOAP_OK)
    int SetPreset(_ptzws__SetPreset *ptzws__SetPreset, _ptzws__SetPresetResponse &ptzws__SetPresetResponse);

    /// Web service operation 'RemovePreset' (returns error code or SOAP_OK)
    int RemovePreset(_ptzws__RemovePreset *ptzws__RemovePreset, _ptzws__RemovePresetResponse &ptzws__RemovePresetResponse);

    /// Web service operation 'GotoPreset' (returns error code or SOAP_OK)
    int GotoPreset(_ptzws__GotoPreset *ptzws__GotoPreset, _ptzws__GotoPresetResponse &ptzws__GotoPresetResponse);

    /// Web service operation 'GetStatus' (returns error code or SOAP_OK)
    int GetStatus(_ptzws__GetStatus *ptzws__GetStatus, _ptzws__GetStatusResponse &ptzws__GetStatusResponse);

    /// Web service operation 'GetConfiguration' (returns error code or SOAP_OK)
    int GetConfiguration(_ptzws__GetConfiguration *ptzws__GetConfiguration, _ptzws__GetConfigurationResponse &ptzws__GetConfigurationResponse);

    /// Web service operation 'GetNodes' (returns error code or SOAP_OK)
    int GetNodes(_ptzws__GetNodes *ptzws__GetNodes, _ptzws__GetNodesResponse &ptzws__GetNodesResponse);

    /// Web service operation 'GetNode' (returns error code or SOAP_OK)
    int GetNode(_ptzws__GetNode *ptzws__GetNode, _ptzws__GetNodeResponse &ptzws__GetNodeResponse);

    /// Web service operation 'SetConfiguration' (returns error code or SOAP_OK)
    int SetConfiguration(_ptzws__SetConfiguration *ptzws__SetConfiguration, _ptzws__SetConfigurationResponse &ptzws__SetConfigurationResponse);

    /// Web service operation 'GetConfigurationOptions' (returns error code or SOAP_OK)
    int GetConfigurationOptions(_ptzws__GetConfigurationOptions *ptzws__GetConfigurationOptions, _ptzws__GetConfigurationOptionsResponse &ptzws__GetConfigurationOptionsResponse);

    /// Web service operation 'GotoHomePosition' (returns error code or SOAP_OK)
    int GotoHomePosition(_ptzws__GotoHomePosition *ptzws__GotoHomePosition, _ptzws__GotoHomePositionResponse &ptzws__GotoHomePositionResponse);

    /// Web service operation 'SetHomePosition' (returns error code or SOAP_OK)
    int SetHomePosition(_ptzws__SetHomePosition *ptzws__SetHomePosition, _ptzws__SetHomePositionResponse &ptzws__SetHomePositionResponse);

    /// Web service operation 'ContinuousMove' (returns error code or SOAP_OK)
    int ContinuousMove(_ptzws__ContinuousMove *ptzws__ContinuousMove, _ptzws__ContinuousMoveResponse &ptzws__ContinuousMoveResponse);

    /// Web service operation 'RelativeMove' (returns error code or SOAP_OK)
    int RelativeMove(_ptzws__RelativeMove *ptzws__RelativeMove, _ptzws__RelativeMoveResponse &ptzws__RelativeMoveResponse);

    /// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
    int SendAuxiliaryCommand(_ptzws__SendAuxiliaryCommand *ptzws__SendAuxiliaryCommand, _ptzws__SendAuxiliaryCommandResponse &ptzws__SendAuxiliaryCommandResponse);

    /// Web service operation 'AbsoluteMove' (returns error code or SOAP_OK)
    int AbsoluteMove(_ptzws__AbsoluteMove *ptzws__AbsoluteMove, _ptzws__AbsoluteMoveResponse &ptzws__AbsoluteMoveResponse);

    /// Web service operation 'Stop' (returns error code or SOAP_OK)
    int Stop(_ptzws__Stop *ptzws__Stop, _ptzws__StopResponse &ptzws__StopResponse);

    /// Web service operation 'GetPresetTours' (returns error code or SOAP_OK)
    int GetPresetTours(_ptzws__GetPresetTours *ptzws__GetPresetTours, _ptzws__GetPresetToursResponse &ptzws__GetPresetToursResponse);

    /// Web service operation 'GetPresetTour' (returns error code or SOAP_OK)
    int GetPresetTour(_ptzws__GetPresetTour *ptzws__GetPresetTour, _ptzws__GetPresetTourResponse &ptzws__GetPresetTourResponse);

    /// Web service operation 'GetPresetTourOptions' (returns error code or SOAP_OK)
    int GetPresetTourOptions(_ptzws__GetPresetTourOptions *ptzws__GetPresetTourOptions, _ptzws__GetPresetTourOptionsResponse &ptzws__GetPresetTourOptionsResponse);

    /// Web service operation 'CreatePresetTour' (returns error code or SOAP_OK)
    int CreatePresetTour(_ptzws__CreatePresetTour *ptzws__CreatePresetTour, _ptzws__CreatePresetTourResponse &ptzws__CreatePresetTourResponse);

    /// Web service operation 'ModifyPresetTour' (returns error code or SOAP_OK)
    int ModifyPresetTour(_ptzws__ModifyPresetTour *ptzws__ModifyPresetTour, _ptzws__ModifyPresetTourResponse &ptzws__ModifyPresetTourResponse);

    /// Web service operation 'OperatePresetTour' (returns error code or SOAP_OK)
    int OperatePresetTour(_ptzws__OperatePresetTour *ptzws__OperatePresetTour, _ptzws__OperatePresetTourResponse &ptzws__OperatePresetTourResponse);

    /// Web service operation 'RemovePresetTour' (returns error code or SOAP_OK)
    int RemovePresetTour(_ptzws__RemovePresetTour *ptzws__RemovePresetTour, _ptzws__RemovePresetTourResponse &ptzws__RemovePresetTourResponse);

    /// Web service operation 'GetCompatibleConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleConfigurations(_ptzws__GetCompatibleConfigurations *ptzws__GetCompatibleConfigurations, _ptzws__GetCompatibleConfigurationsResponse &ptzws__GetCompatibleConfigurationsResponse);

};

#endif // PTZSERVICEEXT_H
