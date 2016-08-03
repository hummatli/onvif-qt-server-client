#ifndef MEDIASERVICEEXTABST_H
#define MEDIASERVICEEXTABST_H

#include "soap/onvifmediaH.h"

class MediaServiceExtAbst
{
public:
    MediaServiceExtAbst(){

    };


    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_mediaws__GetServiceCapabilities *mediaws__GetServiceCapabilities, _mediaws__GetServiceCapabilitiesResponse &mediaws__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
    virtual	int GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse)  = 0;

    /// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
    virtual	int GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse)  = 0;

    /// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
    virtual	int GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse)  = 0;

    /// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
    virtual	int CreateProfile(_mediaws__CreateProfile *mediaws__CreateProfile, _mediaws__CreateProfileResponse &mediaws__CreateProfileResponse)  = 0;

    /// Web service operation 'GetProfile' (returns error code or SOAP_OK)
    virtual	int GetProfile(_mediaws__GetProfile *mediaws__GetProfile, _mediaws__GetProfileResponse &mediaws__GetProfileResponse)  = 0;

    /// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
    virtual	int GetProfiles(_mediaws__GetProfiles *mediaws__GetProfiles, _mediaws__GetProfilesResponse &mediaws__GetProfilesResponse)  = 0;

    /// Web service operation 'AddVideoEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int AddVideoEncoderConfiguration(_mediaws__AddVideoEncoderConfiguration *mediaws__AddVideoEncoderConfiguration, _mediaws__AddVideoEncoderConfigurationResponse &mediaws__AddVideoEncoderConfigurationResponse)  = 0;

    /// Web service operation 'AddVideoSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int AddVideoSourceConfiguration(_mediaws__AddVideoSourceConfiguration *mediaws__AddVideoSourceConfiguration, _mediaws__AddVideoSourceConfigurationResponse &mediaws__AddVideoSourceConfigurationResponse)  = 0;

    /// Web service operation 'AddAudioEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int AddAudioEncoderConfiguration(_mediaws__AddAudioEncoderConfiguration *mediaws__AddAudioEncoderConfiguration, _mediaws__AddAudioEncoderConfigurationResponse &mediaws__AddAudioEncoderConfigurationResponse)  = 0;

    /// Web service operation 'AddAudioSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int AddAudioSourceConfiguration(_mediaws__AddAudioSourceConfiguration *mediaws__AddAudioSourceConfiguration, _mediaws__AddAudioSourceConfigurationResponse &mediaws__AddAudioSourceConfigurationResponse)  = 0;

    /// Web service operation 'AddPTZConfiguration' (returns error code or SOAP_OK)
    virtual	int AddPTZConfiguration(_mediaws__AddPTZConfiguration *mediaws__AddPTZConfiguration, _mediaws__AddPTZConfigurationResponse &mediaws__AddPTZConfigurationResponse)  = 0;

    /// Web service operation 'AddVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    virtual	int AddVideoAnalyticsConfiguration(_mediaws__AddVideoAnalyticsConfiguration *mediaws__AddVideoAnalyticsConfiguration, _mediaws__AddVideoAnalyticsConfigurationResponse &mediaws__AddVideoAnalyticsConfigurationResponse)  = 0;

    /// Web service operation 'AddMetadataConfiguration' (returns error code or SOAP_OK)
    virtual	int AddMetadataConfiguration(_mediaws__AddMetadataConfiguration *mediaws__AddMetadataConfiguration, _mediaws__AddMetadataConfigurationResponse &mediaws__AddMetadataConfigurationResponse)  = 0;

    /// Web service operation 'AddAudioOutputConfiguration' (returns error code or SOAP_OK)
    virtual	int AddAudioOutputConfiguration(_mediaws__AddAudioOutputConfiguration *mediaws__AddAudioOutputConfiguration, _mediaws__AddAudioOutputConfigurationResponse &mediaws__AddAudioOutputConfigurationResponse)  = 0;

    /// Web service operation 'AddAudioDecoderConfiguration' (returns error code or SOAP_OK)
    virtual	int AddAudioDecoderConfiguration(_mediaws__AddAudioDecoderConfiguration *mediaws__AddAudioDecoderConfiguration, _mediaws__AddAudioDecoderConfigurationResponse &mediaws__AddAudioDecoderConfigurationResponse)  = 0;

    /// Web service operation 'RemoveVideoEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int RemoveVideoEncoderConfiguration(_mediaws__RemoveVideoEncoderConfiguration *mediaws__RemoveVideoEncoderConfiguration, _mediaws__RemoveVideoEncoderConfigurationResponse &mediaws__RemoveVideoEncoderConfigurationResponse)  = 0;

    /// Web service operation 'RemoveVideoSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int RemoveVideoSourceConfiguration(_mediaws__RemoveVideoSourceConfiguration *mediaws__RemoveVideoSourceConfiguration, _mediaws__RemoveVideoSourceConfigurationResponse &mediaws__RemoveVideoSourceConfigurationResponse)  = 0;

    /// Web service operation 'RemoveAudioEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int RemoveAudioEncoderConfiguration(_mediaws__RemoveAudioEncoderConfiguration *mediaws__RemoveAudioEncoderConfiguration, _mediaws__RemoveAudioEncoderConfigurationResponse &mediaws__RemoveAudioEncoderConfigurationResponse)  = 0;

    /// Web service operation 'RemoveAudioSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int RemoveAudioSourceConfiguration(_mediaws__RemoveAudioSourceConfiguration *mediaws__RemoveAudioSourceConfiguration, _mediaws__RemoveAudioSourceConfigurationResponse &mediaws__RemoveAudioSourceConfigurationResponse)  = 0;

    /// Web service operation 'RemovePTZConfiguration' (returns error code or SOAP_OK)
    virtual	int RemovePTZConfiguration(_mediaws__RemovePTZConfiguration *mediaws__RemovePTZConfiguration, _mediaws__RemovePTZConfigurationResponse &mediaws__RemovePTZConfigurationResponse)  = 0;

    /// Web service operation 'RemoveVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    virtual	int RemoveVideoAnalyticsConfiguration(_mediaws__RemoveVideoAnalyticsConfiguration *mediaws__RemoveVideoAnalyticsConfiguration, _mediaws__RemoveVideoAnalyticsConfigurationResponse &mediaws__RemoveVideoAnalyticsConfigurationResponse)  = 0;

    /// Web service operation 'RemoveMetadataConfiguration' (returns error code or SOAP_OK)
    virtual	int RemoveMetadataConfiguration(_mediaws__RemoveMetadataConfiguration *mediaws__RemoveMetadataConfiguration, _mediaws__RemoveMetadataConfigurationResponse &mediaws__RemoveMetadataConfigurationResponse)  = 0;

    /// Web service operation 'RemoveAudioOutputConfiguration' (returns error code or SOAP_OK)
    virtual	int RemoveAudioOutputConfiguration(_mediaws__RemoveAudioOutputConfiguration *mediaws__RemoveAudioOutputConfiguration, _mediaws__RemoveAudioOutputConfigurationResponse &mediaws__RemoveAudioOutputConfigurationResponse)  = 0;

    /// Web service operation 'RemoveAudioDecoderConfiguration' (returns error code or SOAP_OK)
    virtual	int RemoveAudioDecoderConfiguration(_mediaws__RemoveAudioDecoderConfiguration *mediaws__RemoveAudioDecoderConfiguration, _mediaws__RemoveAudioDecoderConfigurationResponse &mediaws__RemoveAudioDecoderConfigurationResponse)  = 0;

    /// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
    virtual	int DeleteProfile(_mediaws__DeleteProfile *mediaws__DeleteProfile, _mediaws__DeleteProfileResponse &mediaws__DeleteProfileResponse)  = 0;

    /// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
    virtual	int GetVideoSourceConfigurations(_mediaws__GetVideoSourceConfigurations *mediaws__GetVideoSourceConfigurations, _mediaws__GetVideoSourceConfigurationsResponse &mediaws__GetVideoSourceConfigurationsResponse)  = 0;

    /// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
    virtual	int GetVideoEncoderConfigurations(_mediaws__GetVideoEncoderConfigurations *mediaws__GetVideoEncoderConfigurations, _mediaws__GetVideoEncoderConfigurationsResponse &mediaws__GetVideoEncoderConfigurationsResponse)  = 0;

    /// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
    virtual	int GetAudioSourceConfigurations(_mediaws__GetAudioSourceConfigurations *mediaws__GetAudioSourceConfigurations, _mediaws__GetAudioSourceConfigurationsResponse &mediaws__GetAudioSourceConfigurationsResponse)  = 0;

    /// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
    virtual	int GetAudioEncoderConfigurations(_mediaws__GetAudioEncoderConfigurations *mediaws__GetAudioEncoderConfigurations, _mediaws__GetAudioEncoderConfigurationsResponse &mediaws__GetAudioEncoderConfigurationsResponse)  = 0;

    /// Web service operation 'GetVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
    virtual	int GetVideoAnalyticsConfigurations(_mediaws__GetVideoAnalyticsConfigurations *mediaws__GetVideoAnalyticsConfigurations, _mediaws__GetVideoAnalyticsConfigurationsResponse &mediaws__GetVideoAnalyticsConfigurationsResponse)  = 0;

    /// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
    virtual	int GetMetadataConfigurations(_mediaws__GetMetadataConfigurations *mediaws__GetMetadataConfigurations, _mediaws__GetMetadataConfigurationsResponse &mediaws__GetMetadataConfigurationsResponse)  = 0;

    /// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
    virtual	int GetAudioOutputConfigurations(_mediaws__GetAudioOutputConfigurations *mediaws__GetAudioOutputConfigurations, _mediaws__GetAudioOutputConfigurationsResponse &mediaws__GetAudioOutputConfigurationsResponse)  = 0;

    /// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
    virtual	int GetAudioDecoderConfigurations(_mediaws__GetAudioDecoderConfigurations *mediaws__GetAudioDecoderConfigurations, _mediaws__GetAudioDecoderConfigurationsResponse &mediaws__GetAudioDecoderConfigurationsResponse)  = 0;

    /// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int GetVideoSourceConfiguration(_mediaws__GetVideoSourceConfiguration *mediaws__GetVideoSourceConfiguration, _mediaws__GetVideoSourceConfigurationResponse &mediaws__GetVideoSourceConfigurationResponse)  = 0;

    /// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int GetVideoEncoderConfiguration(_mediaws__GetVideoEncoderConfiguration *mediaws__GetVideoEncoderConfiguration, _mediaws__GetVideoEncoderConfigurationResponse &mediaws__GetVideoEncoderConfigurationResponse)  = 0;

    /// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int GetAudioSourceConfiguration(_mediaws__GetAudioSourceConfiguration *mediaws__GetAudioSourceConfiguration, _mediaws__GetAudioSourceConfigurationResponse &mediaws__GetAudioSourceConfigurationResponse)  = 0;

    /// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int GetAudioEncoderConfiguration(_mediaws__GetAudioEncoderConfiguration *mediaws__GetAudioEncoderConfiguration, _mediaws__GetAudioEncoderConfigurationResponse &mediaws__GetAudioEncoderConfigurationResponse)  = 0;

    /// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    virtual	int GetVideoAnalyticsConfiguration(_mediaws__GetVideoAnalyticsConfiguration *mediaws__GetVideoAnalyticsConfiguration, _mediaws__GetVideoAnalyticsConfigurationResponse &mediaws__GetVideoAnalyticsConfigurationResponse)  = 0;

    /// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
    virtual	int GetMetadataConfiguration(_mediaws__GetMetadataConfiguration *mediaws__GetMetadataConfiguration, _mediaws__GetMetadataConfigurationResponse &mediaws__GetMetadataConfigurationResponse)  = 0;

    /// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
    virtual	int GetAudioOutputConfiguration(_mediaws__GetAudioOutputConfiguration *mediaws__GetAudioOutputConfiguration, _mediaws__GetAudioOutputConfigurationResponse &mediaws__GetAudioOutputConfigurationResponse)  = 0;

    /// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
    virtual	int GetAudioDecoderConfiguration(_mediaws__GetAudioDecoderConfiguration *mediaws__GetAudioDecoderConfiguration, _mediaws__GetAudioDecoderConfigurationResponse &mediaws__GetAudioDecoderConfigurationResponse)  = 0;

    /// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
    virtual	int GetCompatibleVideoEncoderConfigurations(_mediaws__GetCompatibleVideoEncoderConfigurations *mediaws__GetCompatibleVideoEncoderConfigurations, _mediaws__GetCompatibleVideoEncoderConfigurationsResponse &mediaws__GetCompatibleVideoEncoderConfigurationsResponse)  = 0;

    /// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
    virtual	int GetCompatibleVideoSourceConfigurations(_mediaws__GetCompatibleVideoSourceConfigurations *mediaws__GetCompatibleVideoSourceConfigurations, _mediaws__GetCompatibleVideoSourceConfigurationsResponse &mediaws__GetCompatibleVideoSourceConfigurationsResponse)  = 0;

    /// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
    virtual	int GetCompatibleAudioEncoderConfigurations(_mediaws__GetCompatibleAudioEncoderConfigurations *mediaws__GetCompatibleAudioEncoderConfigurations, _mediaws__GetCompatibleAudioEncoderConfigurationsResponse &mediaws__GetCompatibleAudioEncoderConfigurationsResponse)  = 0;

    /// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
    virtual	int GetCompatibleAudioSourceConfigurations(_mediaws__GetCompatibleAudioSourceConfigurations *mediaws__GetCompatibleAudioSourceConfigurations, _mediaws__GetCompatibleAudioSourceConfigurationsResponse &mediaws__GetCompatibleAudioSourceConfigurationsResponse)  = 0;

    /// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
    virtual	int GetCompatibleVideoAnalyticsConfigurations(_mediaws__GetCompatibleVideoAnalyticsConfigurations *mediaws__GetCompatibleVideoAnalyticsConfigurations, _mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse &mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse)  = 0;

    /// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
    virtual	int GetCompatibleMetadataConfigurations(_mediaws__GetCompatibleMetadataConfigurations *mediaws__GetCompatibleMetadataConfigurations, _mediaws__GetCompatibleMetadataConfigurationsResponse &mediaws__GetCompatibleMetadataConfigurationsResponse)  = 0;

    /// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
    virtual	int GetCompatibleAudioOutputConfigurations(_mediaws__GetCompatibleAudioOutputConfigurations *mediaws__GetCompatibleAudioOutputConfigurations, _mediaws__GetCompatibleAudioOutputConfigurationsResponse &mediaws__GetCompatibleAudioOutputConfigurationsResponse)  = 0;

    /// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
    virtual	int GetCompatibleAudioDecoderConfigurations(_mediaws__GetCompatibleAudioDecoderConfigurations *mediaws__GetCompatibleAudioDecoderConfigurations, _mediaws__GetCompatibleAudioDecoderConfigurationsResponse &mediaws__GetCompatibleAudioDecoderConfigurationsResponse)  = 0;

    /// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int SetVideoSourceConfiguration(_mediaws__SetVideoSourceConfiguration *mediaws__SetVideoSourceConfiguration, _mediaws__SetVideoSourceConfigurationResponse &mediaws__SetVideoSourceConfigurationResponse)  = 0;

    /// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int SetVideoEncoderConfiguration(_mediaws__SetVideoEncoderConfiguration *mediaws__SetVideoEncoderConfiguration, _mediaws__SetVideoEncoderConfigurationResponse &mediaws__SetVideoEncoderConfigurationResponse)  = 0;

    /// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioSourceConfiguration(_mediaws__SetAudioSourceConfiguration *mediaws__SetAudioSourceConfiguration, _mediaws__SetAudioSourceConfigurationResponse &mediaws__SetAudioSourceConfigurationResponse)  = 0;

    /// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioEncoderConfiguration(_mediaws__SetAudioEncoderConfiguration *mediaws__SetAudioEncoderConfiguration, _mediaws__SetAudioEncoderConfigurationResponse &mediaws__SetAudioEncoderConfigurationResponse)  = 0;

    /// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    virtual	int SetVideoAnalyticsConfiguration(_mediaws__SetVideoAnalyticsConfiguration *mediaws__SetVideoAnalyticsConfiguration, _mediaws__SetVideoAnalyticsConfigurationResponse &mediaws__SetVideoAnalyticsConfigurationResponse)  = 0;

    /// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
    virtual	int SetMetadataConfiguration(_mediaws__SetMetadataConfiguration *mediaws__SetMetadataConfiguration, _mediaws__SetMetadataConfigurationResponse &mediaws__SetMetadataConfigurationResponse)  = 0;

    /// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioOutputConfiguration(_mediaws__SetAudioOutputConfiguration *mediaws__SetAudioOutputConfiguration, _mediaws__SetAudioOutputConfigurationResponse &mediaws__SetAudioOutputConfigurationResponse)  = 0;

    /// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioDecoderConfiguration(_mediaws__SetAudioDecoderConfiguration *mediaws__SetAudioDecoderConfiguration, _mediaws__SetAudioDecoderConfigurationResponse &mediaws__SetAudioDecoderConfigurationResponse)  = 0;

    /// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetVideoSourceConfigurationOptions(_mediaws__GetVideoSourceConfigurationOptions *mediaws__GetVideoSourceConfigurationOptions, _mediaws__GetVideoSourceConfigurationOptionsResponse &mediaws__GetVideoSourceConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetVideoEncoderConfigurationOptions(_mediaws__GetVideoEncoderConfigurationOptions *mediaws__GetVideoEncoderConfigurationOptions, _mediaws__GetVideoEncoderConfigurationOptionsResponse &mediaws__GetVideoEncoderConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioSourceConfigurationOptions(_mediaws__GetAudioSourceConfigurationOptions *mediaws__GetAudioSourceConfigurationOptions, _mediaws__GetAudioSourceConfigurationOptionsResponse &mediaws__GetAudioSourceConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioEncoderConfigurationOptions(_mediaws__GetAudioEncoderConfigurationOptions *mediaws__GetAudioEncoderConfigurationOptions, _mediaws__GetAudioEncoderConfigurationOptionsResponse &mediaws__GetAudioEncoderConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetMetadataConfigurationOptions(_mediaws__GetMetadataConfigurationOptions *mediaws__GetMetadataConfigurationOptions, _mediaws__GetMetadataConfigurationOptionsResponse &mediaws__GetMetadataConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioOutputConfigurationOptions(_mediaws__GetAudioOutputConfigurationOptions *mediaws__GetAudioOutputConfigurationOptions, _mediaws__GetAudioOutputConfigurationOptionsResponse &mediaws__GetAudioOutputConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioDecoderConfigurationOptions(_mediaws__GetAudioDecoderConfigurationOptions *mediaws__GetAudioDecoderConfigurationOptions, _mediaws__GetAudioDecoderConfigurationOptionsResponse &mediaws__GetAudioDecoderConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
    virtual	int GetGuaranteedNumberOfVideoEncoderInstances(_mediaws__GetGuaranteedNumberOfVideoEncoderInstances *mediaws__GetGuaranteedNumberOfVideoEncoderInstances, _mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse &mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse)  = 0;

    /// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
    virtual	int GetStreamUri(_mediaws__GetStreamUri *mediaws__GetStreamUri, _mediaws__GetStreamUriResponse &mediaws__GetStreamUriResponse)  = 0;

    /// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
    virtual	int StartMulticastStreaming(_mediaws__StartMulticastStreaming *mediaws__StartMulticastStreaming, _mediaws__StartMulticastStreamingResponse &mediaws__StartMulticastStreamingResponse)  = 0;

    /// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
    virtual	int StopMulticastStreaming(_mediaws__StopMulticastStreaming *mediaws__StopMulticastStreaming, _mediaws__StopMulticastStreamingResponse &mediaws__StopMulticastStreamingResponse)  = 0;

    /// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
    virtual	int SetSynchronizationPoint(_mediaws__SetSynchronizationPoint *mediaws__SetSynchronizationPoint, _mediaws__SetSynchronizationPointResponse &mediaws__SetSynchronizationPointResponse)  = 0;

    /// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
    virtual	int GetSnapshotUri(_mediaws__GetSnapshotUri *mediaws__GetSnapshotUri, _mediaws__GetSnapshotUriResponse &mediaws__GetSnapshotUriResponse)  = 0;

    /// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
    virtual	int GetVideoSourceModes(_mediaws__GetVideoSourceModes *mediaws__GetVideoSourceModes, _mediaws__GetVideoSourceModesResponse &mediaws__GetVideoSourceModesResponse)  = 0;

    /// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
    virtual	int SetVideoSourceMode(_mediaws__SetVideoSourceMode *mediaws__SetVideoSourceMode, _mediaws__SetVideoSourceModeResponse &mediaws__SetVideoSourceModeResponse)  = 0;

    /// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
    virtual	int GetOSDs(_mediaws__GetOSDs *mediaws__GetOSDs, _mediaws__GetOSDsResponse &mediaws__GetOSDsResponse)  = 0;

    /// Web service operation 'GetOSD' (returns error code or SOAP_OK)
    virtual	int GetOSD(_mediaws__GetOSD *mediaws__GetOSD, _mediaws__GetOSDResponse &mediaws__GetOSDResponse)  = 0;

    /// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
    virtual	int GetOSDOptions(_mediaws__GetOSDOptions *mediaws__GetOSDOptions, _mediaws__GetOSDOptionsResponse &mediaws__GetOSDOptionsResponse)  = 0;

    /// Web service operation 'SetOSD' (returns error code or SOAP_OK)
    virtual	int SetOSD(_mediaws__SetOSD *mediaws__SetOSD, _mediaws__SetOSDResponse &mediaws__SetOSDResponse)  = 0;

    /// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
    virtual	int CreateOSD(_mediaws__CreateOSD *mediaws__CreateOSD, _mediaws__CreateOSDResponse &mediaws__CreateOSDResponse)  = 0;

    /// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
    virtual	int DeleteOSD(_mediaws__DeleteOSD *mediaws__DeleteOSD, _mediaws__DeleteOSDResponse &mediaws__DeleteOSDResponse)  = 0;

};

#endif // MEDIASERVICEEXTABST_H
