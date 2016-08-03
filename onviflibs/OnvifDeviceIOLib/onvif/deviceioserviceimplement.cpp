#include "soap/onvifdeviceioDeviceIOBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/deviceioservice.h"

DeviceIOServiceExtAbst * DeviceIOService::serviecExt = NULL;


/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetServiceCapabilities(_deviceio__GetServiceCapabilities *deviceio__GetServiceCapabilities, _deviceio__GetServiceCapabilitiesResponse &deviceio__GetServiceCapabilitiesResponse){
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetServiceCapabilities(deviceio__GetServiceCapabilities,deviceio__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRelayOutputOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetRelayOutputOptions(_deviceio__GetRelayOutputOptions *deviceio__GetRelayOutputOptions, _deviceio__GetRelayOutputOptionsResponse &deviceio__GetRelayOutputOptionsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetRelayOutputOptions( deviceio__GetRelayOutputOptions, deviceio__GetRelayOutputOptionsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetAudioSources( mediaws__GetAudioSources, mediaws__GetAudioSourcesResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetAudioOutputs( mediaws__GetAudioOutputs, mediaws__GetAudioOutputsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetVideoSources( mediaws__GetVideoSources,  mediaws__GetVideoSourcesResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoOutputs' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoOutputs(_deviceio__GetVideoOutputs *deviceio__GetVideoOutputs, _deviceio__GetVideoOutputsResponse &deviceio__GetVideoOutputsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetVideoOutputs( deviceio__GetVideoOutputs,  deviceio__GetVideoOutputsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoSourceConfiguration(_deviceio__GetVideoSourceConfiguration *deviceio__GetVideoSourceConfiguration, _deviceio__GetVideoSourceConfigurationResponse &deviceio__GetVideoSourceConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetVideoSourceConfiguration( deviceio__GetVideoSourceConfiguration, deviceio__GetVideoSourceConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoOutputConfiguration(_deviceio__GetVideoOutputConfiguration *deviceio__GetVideoOutputConfiguration, _deviceio__GetVideoOutputConfigurationResponse &deviceio__GetVideoOutputConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetVideoOutputConfiguration( deviceio__GetVideoOutputConfiguration,  deviceio__GetVideoOutputConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioSourceConfiguration(_deviceio__GetAudioSourceConfiguration *deviceio__GetAudioSourceConfiguration, _deviceio__GetAudioSourceConfigurationResponse &deviceio__GetAudioSourceConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetAudioSourceConfiguration( deviceio__GetAudioSourceConfiguration,  deviceio__GetAudioSourceConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioOutputConfiguration(_deviceio__GetAudioOutputConfiguration *deviceio__GetAudioOutputConfiguration, _deviceio__GetAudioOutputConfigurationResponse &deviceio__GetAudioOutputConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetAudioOutputConfiguration( deviceio__GetAudioOutputConfiguration,  deviceio__GetAudioOutputConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetVideoSourceConfiguration(_deviceio__SetVideoSourceConfiguration *deviceio__SetVideoSourceConfiguration, _deviceio__SetVideoSourceConfigurationResponse &deviceio__SetVideoSourceConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->SetVideoSourceConfiguration( deviceio__SetVideoSourceConfiguration, deviceio__SetVideoSourceConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetVideoOutputConfiguration(_deviceio__SetVideoOutputConfiguration *deviceio__SetVideoOutputConfiguration, _deviceio__SetVideoOutputConfigurationResponse &deviceio__SetVideoOutputConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->SetVideoOutputConfiguration( deviceio__SetVideoOutputConfiguration,  deviceio__SetVideoOutputConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetAudioSourceConfiguration(_deviceio__SetAudioSourceConfiguration *deviceio__SetAudioSourceConfiguration, _deviceio__SetAudioSourceConfigurationResponse &deviceio__SetAudioSourceConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->SetAudioSourceConfiguration( deviceio__SetAudioSourceConfiguration,  deviceio__SetAudioSourceConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetAudioOutputConfiguration(_deviceio__SetAudioOutputConfiguration *deviceio__SetAudioOutputConfiguration, _deviceio__SetAudioOutputConfigurationResponse &deviceio__SetAudioOutputConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->SetAudioOutputConfiguration( deviceio__SetAudioOutputConfiguration,  deviceio__SetAudioOutputConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoSourceConfigurationOptions(_deviceio__GetVideoSourceConfigurationOptions *deviceio__GetVideoSourceConfigurationOptions, _deviceio__GetVideoSourceConfigurationOptionsResponse &deviceio__GetVideoSourceConfigurationOptionsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetVideoSourceConfigurationOptions( deviceio__GetVideoSourceConfigurationOptions,  deviceio__GetVideoSourceConfigurationOptionsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoOutputConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoOutputConfigurationOptions(_deviceio__GetVideoOutputConfigurationOptions *deviceio__GetVideoOutputConfigurationOptions, _deviceio__GetVideoOutputConfigurationOptionsResponse &deviceio__GetVideoOutputConfigurationOptionsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetVideoOutputConfigurationOptions( deviceio__GetVideoOutputConfigurationOptions,  deviceio__GetVideoOutputConfigurationOptionsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioSourceConfigurationOptions(_deviceio__GetAudioSourceConfigurationOptions *deviceio__GetAudioSourceConfigurationOptions, _deviceio__GetAudioSourceConfigurationOptionsResponse &deviceio__GetAudioSourceConfigurationOptionsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetAudioSourceConfigurationOptions( deviceio__GetAudioSourceConfigurationOptions,  deviceio__GetAudioSourceConfigurationOptionsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioOutputConfigurationOptions(_deviceio__GetAudioOutputConfigurationOptions *deviceio__GetAudioOutputConfigurationOptions, _deviceio__GetAudioOutputConfigurationOptionsResponse &deviceio__GetAudioOutputConfigurationOptionsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetAudioOutputConfigurationOptions( deviceio__GetAudioOutputConfigurationOptions, deviceio__GetAudioOutputConfigurationOptionsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetRelayOutputs( devicews__GetRelayOutputs,  devicews__GetRelayOutputsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetRelayOutputSettings(_deviceio__SetRelayOutputSettings *deviceio__SetRelayOutputSettings, _deviceio__SetRelayOutputSettingsResponse &deviceio__SetRelayOutputSettingsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->SetRelayOutputSettings( deviceio__SetRelayOutputSettings,  deviceio__SetRelayOutputSettingsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->SetRelayOutputState( devicews__SetRelayOutputState,  devicews__SetRelayOutputStateResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDigitalInputs' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetDigitalInputs(_deviceio__GetDigitalInputs *deviceio__GetDigitalInputs, _deviceio__GetDigitalInputsResponse &deviceio__GetDigitalInputsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetDigitalInputs( deviceio__GetDigitalInputs,  deviceio__GetDigitalInputsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSerialPorts' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetSerialPorts(_deviceio__GetSerialPorts *deviceio__GetSerialPorts, _deviceio__GetSerialPortsResponse &deviceio__GetSerialPortsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetSerialPorts( deviceio__GetSerialPorts,  deviceio__GetSerialPortsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSerialPortConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetSerialPortConfiguration(_deviceio__GetSerialPortConfiguration *deviceio__GetSerialPortConfiguration, _deviceio__GetSerialPortConfigurationResponse &deviceio__GetSerialPortConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetSerialPortConfiguration( deviceio__GetSerialPortConfiguration, deviceio__GetSerialPortConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetSerialPortConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetSerialPortConfiguration(_deviceio__SetSerialPortConfiguration *deviceio__SetSerialPortConfiguration, _deviceio__SetSerialPortConfigurationResponse &deviceio__SetSerialPortConfigurationResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->SetSerialPortConfiguration( deviceio__SetSerialPortConfiguration,  deviceio__SetSerialPortConfigurationResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSerialPortConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetSerialPortConfigurationOptions(_deviceio__GetSerialPortConfigurationOptions *deviceio__GetSerialPortConfigurationOptions, _deviceio__GetSerialPortConfigurationOptionsResponse &deviceio__GetSerialPortConfigurationOptionsResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->GetSerialPortConfigurationOptions( deviceio__GetSerialPortConfigurationOptions, deviceio__GetSerialPortConfigurationOptionsResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SendReceiveSerialCommand' (returns error code or SOAP_OK)
int DeviceIOBindingService::SendReceiveSerialCommand(_deviceio__SendReceiveSerialCommand *deviceio__SendReceiveSerialCommand, _deviceio__SendReceiveSerialCommandResponse &deviceio__SendReceiveSerialCommandResponse) {
    if(DeviceIOService::serviecExt != NULL){
        return DeviceIOService::serviecExt->SendReceiveSerialCommand( deviceio__SendReceiveSerialCommand, deviceio__SendReceiveSerialCommandResponse);
    } else {
        qDebug() << "DeviceIOService::serviecExt is NULL\n";
        return SOAP_ERR;
    }
}
