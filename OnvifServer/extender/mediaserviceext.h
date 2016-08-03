#ifndef MEDIASERVICEEXT_H
#define MEDIASERVICEEXT_H
#include "onvif/mediaserviceextabst.h"


class MediaServiceExt : public MediaServiceExtAbst
{
public:
    MediaServiceExt();

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    int GetServiceCapabilities(_mediaws__GetServiceCapabilities *mediaws__GetServiceCapabilities, _mediaws__GetServiceCapabilitiesResponse &mediaws__GetServiceCapabilitiesResponse);

    /// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
    int GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse);

    /// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
    int GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse);

    /// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
    int GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse);

    /// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
    int CreateProfile(_mediaws__CreateProfile *mediaws__CreateProfile, _mediaws__CreateProfileResponse &mediaws__CreateProfileResponse);

    /// Web service operation 'GetProfile' (returns error code or SOAP_OK)
    int GetProfile(_mediaws__GetProfile *mediaws__GetProfile, _mediaws__GetProfileResponse &mediaws__GetProfileResponse);

    /// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
    int GetProfiles(_mediaws__GetProfiles *mediaws__GetProfiles, _mediaws__GetProfilesResponse &mediaws__GetProfilesResponse);

    /// Web service operation 'AddVideoEncoderConfiguration' (returns error code or SOAP_OK)
    int AddVideoEncoderConfiguration(_mediaws__AddVideoEncoderConfiguration *mediaws__AddVideoEncoderConfiguration, _mediaws__AddVideoEncoderConfigurationResponse &mediaws__AddVideoEncoderConfigurationResponse);

    /// Web service operation 'AddVideoSourceConfiguration' (returns error code or SOAP_OK)
    int AddVideoSourceConfiguration(_mediaws__AddVideoSourceConfiguration *mediaws__AddVideoSourceConfiguration, _mediaws__AddVideoSourceConfigurationResponse &mediaws__AddVideoSourceConfigurationResponse);

    /// Web service operation 'AddAudioEncoderConfiguration' (returns error code or SOAP_OK)
    int AddAudioEncoderConfiguration(_mediaws__AddAudioEncoderConfiguration *mediaws__AddAudioEncoderConfiguration, _mediaws__AddAudioEncoderConfigurationResponse &mediaws__AddAudioEncoderConfigurationResponse);

    /// Web service operation 'AddAudioSourceConfiguration' (returns error code or SOAP_OK)
    int AddAudioSourceConfiguration(_mediaws__AddAudioSourceConfiguration *mediaws__AddAudioSourceConfiguration, _mediaws__AddAudioSourceConfigurationResponse &mediaws__AddAudioSourceConfigurationResponse);

    /// Web service operation 'AddPTZConfiguration' (returns error code or SOAP_OK)
    int AddPTZConfiguration(_mediaws__AddPTZConfiguration *mediaws__AddPTZConfiguration, _mediaws__AddPTZConfigurationResponse &mediaws__AddPTZConfigurationResponse);

    /// Web service operation 'AddVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    int AddVideoAnalyticsConfiguration(_mediaws__AddVideoAnalyticsConfiguration *mediaws__AddVideoAnalyticsConfiguration, _mediaws__AddVideoAnalyticsConfigurationResponse &mediaws__AddVideoAnalyticsConfigurationResponse);

    /// Web service operation 'AddMetadataConfiguration' (returns error code or SOAP_OK)
    int AddMetadataConfiguration(_mediaws__AddMetadataConfiguration *mediaws__AddMetadataConfiguration, _mediaws__AddMetadataConfigurationResponse &mediaws__AddMetadataConfigurationResponse);

    /// Web service operation 'AddAudioOutputConfiguration' (returns error code or SOAP_OK)
    int AddAudioOutputConfiguration(_mediaws__AddAudioOutputConfiguration *mediaws__AddAudioOutputConfiguration, _mediaws__AddAudioOutputConfigurationResponse &mediaws__AddAudioOutputConfigurationResponse);

    /// Web service operation 'AddAudioDecoderConfiguration' (returns error code or SOAP_OK)
    int AddAudioDecoderConfiguration(_mediaws__AddAudioDecoderConfiguration *mediaws__AddAudioDecoderConfiguration, _mediaws__AddAudioDecoderConfigurationResponse &mediaws__AddAudioDecoderConfigurationResponse);

    /// Web service operation 'RemoveVideoEncoderConfiguration' (returns error code or SOAP_OK)
    int RemoveVideoEncoderConfiguration(_mediaws__RemoveVideoEncoderConfiguration *mediaws__RemoveVideoEncoderConfiguration, _mediaws__RemoveVideoEncoderConfigurationResponse &mediaws__RemoveVideoEncoderConfigurationResponse);

    /// Web service operation 'RemoveVideoSourceConfiguration' (returns error code or SOAP_OK)
    int RemoveVideoSourceConfiguration(_mediaws__RemoveVideoSourceConfiguration *mediaws__RemoveVideoSourceConfiguration, _mediaws__RemoveVideoSourceConfigurationResponse &mediaws__RemoveVideoSourceConfigurationResponse);

    /// Web service operation 'RemoveAudioEncoderConfiguration' (returns error code or SOAP_OK)
    int RemoveAudioEncoderConfiguration(_mediaws__RemoveAudioEncoderConfiguration *mediaws__RemoveAudioEncoderConfiguration, _mediaws__RemoveAudioEncoderConfigurationResponse &mediaws__RemoveAudioEncoderConfigurationResponse);

    /// Web service operation 'RemoveAudioSourceConfiguration' (returns error code or SOAP_OK)
    int RemoveAudioSourceConfiguration(_mediaws__RemoveAudioSourceConfiguration *mediaws__RemoveAudioSourceConfiguration, _mediaws__RemoveAudioSourceConfigurationResponse &mediaws__RemoveAudioSourceConfigurationResponse);

    /// Web service operation 'RemovePTZConfiguration' (returns error code or SOAP_OK)
    int RemovePTZConfiguration(_mediaws__RemovePTZConfiguration *mediaws__RemovePTZConfiguration, _mediaws__RemovePTZConfigurationResponse &mediaws__RemovePTZConfigurationResponse);

    /// Web service operation 'RemoveVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    int RemoveVideoAnalyticsConfiguration(_mediaws__RemoveVideoAnalyticsConfiguration *mediaws__RemoveVideoAnalyticsConfiguration, _mediaws__RemoveVideoAnalyticsConfigurationResponse &mediaws__RemoveVideoAnalyticsConfigurationResponse);

    /// Web service operation 'RemoveMetadataConfiguration' (returns error code or SOAP_OK)
    int RemoveMetadataConfiguration(_mediaws__RemoveMetadataConfiguration *mediaws__RemoveMetadataConfiguration, _mediaws__RemoveMetadataConfigurationResponse &mediaws__RemoveMetadataConfigurationResponse);

    /// Web service operation 'RemoveAudioOutputConfiguration' (returns error code or SOAP_OK)
    int RemoveAudioOutputConfiguration(_mediaws__RemoveAudioOutputConfiguration *mediaws__RemoveAudioOutputConfiguration, _mediaws__RemoveAudioOutputConfigurationResponse &mediaws__RemoveAudioOutputConfigurationResponse);

    /// Web service operation 'RemoveAudioDecoderConfiguration' (returns error code or SOAP_OK)
    int RemoveAudioDecoderConfiguration(_mediaws__RemoveAudioDecoderConfiguration *mediaws__RemoveAudioDecoderConfiguration, _mediaws__RemoveAudioDecoderConfigurationResponse &mediaws__RemoveAudioDecoderConfigurationResponse);

    /// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
    int DeleteProfile(_mediaws__DeleteProfile *mediaws__DeleteProfile, _mediaws__DeleteProfileResponse &mediaws__DeleteProfileResponse);

    /// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
    int GetVideoSourceConfigurations(_mediaws__GetVideoSourceConfigurations *mediaws__GetVideoSourceConfigurations, _mediaws__GetVideoSourceConfigurationsResponse &mediaws__GetVideoSourceConfigurationsResponse);

    /// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
    int GetVideoEncoderConfigurations(_mediaws__GetVideoEncoderConfigurations *mediaws__GetVideoEncoderConfigurations, _mediaws__GetVideoEncoderConfigurationsResponse &mediaws__GetVideoEncoderConfigurationsResponse);

    /// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
    int GetAudioSourceConfigurations(_mediaws__GetAudioSourceConfigurations *mediaws__GetAudioSourceConfigurations, _mediaws__GetAudioSourceConfigurationsResponse &mediaws__GetAudioSourceConfigurationsResponse);

    /// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
    int GetAudioEncoderConfigurations(_mediaws__GetAudioEncoderConfigurations *mediaws__GetAudioEncoderConfigurations, _mediaws__GetAudioEncoderConfigurationsResponse &mediaws__GetAudioEncoderConfigurationsResponse);

    /// Web service operation 'GetVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
    int GetVideoAnalyticsConfigurations(_mediaws__GetVideoAnalyticsConfigurations *mediaws__GetVideoAnalyticsConfigurations, _mediaws__GetVideoAnalyticsConfigurationsResponse &mediaws__GetVideoAnalyticsConfigurationsResponse);

    /// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
    int GetMetadataConfigurations(_mediaws__GetMetadataConfigurations *mediaws__GetMetadataConfigurations, _mediaws__GetMetadataConfigurationsResponse &mediaws__GetMetadataConfigurationsResponse);

    /// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
    int GetAudioOutputConfigurations(_mediaws__GetAudioOutputConfigurations *mediaws__GetAudioOutputConfigurations, _mediaws__GetAudioOutputConfigurationsResponse &mediaws__GetAudioOutputConfigurationsResponse);

    /// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
    int GetAudioDecoderConfigurations(_mediaws__GetAudioDecoderConfigurations *mediaws__GetAudioDecoderConfigurations, _mediaws__GetAudioDecoderConfigurationsResponse &mediaws__GetAudioDecoderConfigurationsResponse);

    /// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
    int GetVideoSourceConfiguration(_mediaws__GetVideoSourceConfiguration *mediaws__GetVideoSourceConfiguration, _mediaws__GetVideoSourceConfigurationResponse &mediaws__GetVideoSourceConfigurationResponse);

    /// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
    int GetVideoEncoderConfiguration(_mediaws__GetVideoEncoderConfiguration *mediaws__GetVideoEncoderConfiguration, _mediaws__GetVideoEncoderConfigurationResponse &mediaws__GetVideoEncoderConfigurationResponse);

    /// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
    int GetAudioSourceConfiguration(_mediaws__GetAudioSourceConfiguration *mediaws__GetAudioSourceConfiguration, _mediaws__GetAudioSourceConfigurationResponse &mediaws__GetAudioSourceConfigurationResponse);

    /// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
    int GetAudioEncoderConfiguration(_mediaws__GetAudioEncoderConfiguration *mediaws__GetAudioEncoderConfiguration, _mediaws__GetAudioEncoderConfigurationResponse &mediaws__GetAudioEncoderConfigurationResponse);

    /// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    int GetVideoAnalyticsConfiguration(_mediaws__GetVideoAnalyticsConfiguration *mediaws__GetVideoAnalyticsConfiguration, _mediaws__GetVideoAnalyticsConfigurationResponse &mediaws__GetVideoAnalyticsConfigurationResponse);

    /// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
    int GetMetadataConfiguration(_mediaws__GetMetadataConfiguration *mediaws__GetMetadataConfiguration, _mediaws__GetMetadataConfigurationResponse &mediaws__GetMetadataConfigurationResponse);

    /// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
    int GetAudioOutputConfiguration(_mediaws__GetAudioOutputConfiguration *mediaws__GetAudioOutputConfiguration, _mediaws__GetAudioOutputConfigurationResponse &mediaws__GetAudioOutputConfigurationResponse);

    /// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
    int GetAudioDecoderConfiguration(_mediaws__GetAudioDecoderConfiguration *mediaws__GetAudioDecoderConfiguration, _mediaws__GetAudioDecoderConfigurationResponse &mediaws__GetAudioDecoderConfigurationResponse);

    /// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleVideoEncoderConfigurations(_mediaws__GetCompatibleVideoEncoderConfigurations *mediaws__GetCompatibleVideoEncoderConfigurations, _mediaws__GetCompatibleVideoEncoderConfigurationsResponse &mediaws__GetCompatibleVideoEncoderConfigurationsResponse);

    /// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleVideoSourceConfigurations(_mediaws__GetCompatibleVideoSourceConfigurations *mediaws__GetCompatibleVideoSourceConfigurations, _mediaws__GetCompatibleVideoSourceConfigurationsResponse &mediaws__GetCompatibleVideoSourceConfigurationsResponse);

    /// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleAudioEncoderConfigurations(_mediaws__GetCompatibleAudioEncoderConfigurations *mediaws__GetCompatibleAudioEncoderConfigurations, _mediaws__GetCompatibleAudioEncoderConfigurationsResponse &mediaws__GetCompatibleAudioEncoderConfigurationsResponse);

    /// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleAudioSourceConfigurations(_mediaws__GetCompatibleAudioSourceConfigurations *mediaws__GetCompatibleAudioSourceConfigurations, _mediaws__GetCompatibleAudioSourceConfigurationsResponse &mediaws__GetCompatibleAudioSourceConfigurationsResponse);

    /// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleVideoAnalyticsConfigurations(_mediaws__GetCompatibleVideoAnalyticsConfigurations *mediaws__GetCompatibleVideoAnalyticsConfigurations, _mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse &mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse);

    /// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleMetadataConfigurations(_mediaws__GetCompatibleMetadataConfigurations *mediaws__GetCompatibleMetadataConfigurations, _mediaws__GetCompatibleMetadataConfigurationsResponse &mediaws__GetCompatibleMetadataConfigurationsResponse);

    /// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleAudioOutputConfigurations(_mediaws__GetCompatibleAudioOutputConfigurations *mediaws__GetCompatibleAudioOutputConfigurations, _mediaws__GetCompatibleAudioOutputConfigurationsResponse &mediaws__GetCompatibleAudioOutputConfigurationsResponse);

    /// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleAudioDecoderConfigurations(_mediaws__GetCompatibleAudioDecoderConfigurations *mediaws__GetCompatibleAudioDecoderConfigurations, _mediaws__GetCompatibleAudioDecoderConfigurationsResponse &mediaws__GetCompatibleAudioDecoderConfigurationsResponse);

    /// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
    int SetVideoSourceConfiguration(_mediaws__SetVideoSourceConfiguration *mediaws__SetVideoSourceConfiguration, _mediaws__SetVideoSourceConfigurationResponse &mediaws__SetVideoSourceConfigurationResponse);

    /// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
    int SetVideoEncoderConfiguration(_mediaws__SetVideoEncoderConfiguration *mediaws__SetVideoEncoderConfiguration, _mediaws__SetVideoEncoderConfigurationResponse &mediaws__SetVideoEncoderConfigurationResponse);

    /// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
    int SetAudioSourceConfiguration(_mediaws__SetAudioSourceConfiguration *mediaws__SetAudioSourceConfiguration, _mediaws__SetAudioSourceConfigurationResponse &mediaws__SetAudioSourceConfigurationResponse);

    /// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
    int SetAudioEncoderConfiguration(_mediaws__SetAudioEncoderConfiguration *mediaws__SetAudioEncoderConfiguration, _mediaws__SetAudioEncoderConfigurationResponse &mediaws__SetAudioEncoderConfigurationResponse);

    /// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    int SetVideoAnalyticsConfiguration(_mediaws__SetVideoAnalyticsConfiguration *mediaws__SetVideoAnalyticsConfiguration, _mediaws__SetVideoAnalyticsConfigurationResponse &mediaws__SetVideoAnalyticsConfigurationResponse);

    /// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
    int SetMetadataConfiguration(_mediaws__SetMetadataConfiguration *mediaws__SetMetadataConfiguration, _mediaws__SetMetadataConfigurationResponse &mediaws__SetMetadataConfigurationResponse);

    /// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
    int SetAudioOutputConfiguration(_mediaws__SetAudioOutputConfiguration *mediaws__SetAudioOutputConfiguration, _mediaws__SetAudioOutputConfigurationResponse &mediaws__SetAudioOutputConfigurationResponse);

    /// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
    int SetAudioDecoderConfiguration(_mediaws__SetAudioDecoderConfiguration *mediaws__SetAudioDecoderConfiguration, _mediaws__SetAudioDecoderConfigurationResponse &mediaws__SetAudioDecoderConfigurationResponse);

    /// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
    int GetVideoSourceConfigurationOptions(_mediaws__GetVideoSourceConfigurationOptions *mediaws__GetVideoSourceConfigurationOptions, _mediaws__GetVideoSourceConfigurationOptionsResponse &mediaws__GetVideoSourceConfigurationOptionsResponse);

    /// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
    int GetVideoEncoderConfigurationOptions(_mediaws__GetVideoEncoderConfigurationOptions *mediaws__GetVideoEncoderConfigurationOptions, _mediaws__GetVideoEncoderConfigurationOptionsResponse &mediaws__GetVideoEncoderConfigurationOptionsResponse);

    /// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioSourceConfigurationOptions(_mediaws__GetAudioSourceConfigurationOptions *mediaws__GetAudioSourceConfigurationOptions, _mediaws__GetAudioSourceConfigurationOptionsResponse &mediaws__GetAudioSourceConfigurationOptionsResponse);

    /// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioEncoderConfigurationOptions(_mediaws__GetAudioEncoderConfigurationOptions *mediaws__GetAudioEncoderConfigurationOptions, _mediaws__GetAudioEncoderConfigurationOptionsResponse &mediaws__GetAudioEncoderConfigurationOptionsResponse);

    /// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
    int GetMetadataConfigurationOptions(_mediaws__GetMetadataConfigurationOptions *mediaws__GetMetadataConfigurationOptions, _mediaws__GetMetadataConfigurationOptionsResponse &mediaws__GetMetadataConfigurationOptionsResponse);

    /// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioOutputConfigurationOptions(_mediaws__GetAudioOutputConfigurationOptions *mediaws__GetAudioOutputConfigurationOptions, _mediaws__GetAudioOutputConfigurationOptionsResponse &mediaws__GetAudioOutputConfigurationOptionsResponse);

    /// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioDecoderConfigurationOptions(_mediaws__GetAudioDecoderConfigurationOptions *mediaws__GetAudioDecoderConfigurationOptions, _mediaws__GetAudioDecoderConfigurationOptionsResponse &mediaws__GetAudioDecoderConfigurationOptionsResponse);

    /// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
    int GetGuaranteedNumberOfVideoEncoderInstances(_mediaws__GetGuaranteedNumberOfVideoEncoderInstances *mediaws__GetGuaranteedNumberOfVideoEncoderInstances, _mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse &mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse);

    /// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
    int GetStreamUri(_mediaws__GetStreamUri *mediaws__GetStreamUri, _mediaws__GetStreamUriResponse &mediaws__GetStreamUriResponse);

    /// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
    int StartMulticastStreaming(_mediaws__StartMulticastStreaming *mediaws__StartMulticastStreaming, _mediaws__StartMulticastStreamingResponse &mediaws__StartMulticastStreamingResponse);

    /// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
    int StopMulticastStreaming(_mediaws__StopMulticastStreaming *mediaws__StopMulticastStreaming, _mediaws__StopMulticastStreamingResponse &mediaws__StopMulticastStreamingResponse);

    /// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
    int SetSynchronizationPoint(_mediaws__SetSynchronizationPoint *mediaws__SetSynchronizationPoint, _mediaws__SetSynchronizationPointResponse &mediaws__SetSynchronizationPointResponse);

    /// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
    int GetSnapshotUri(_mediaws__GetSnapshotUri *mediaws__GetSnapshotUri, _mediaws__GetSnapshotUriResponse &mediaws__GetSnapshotUriResponse);

    /// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
    int GetVideoSourceModes(_mediaws__GetVideoSourceModes *mediaws__GetVideoSourceModes, _mediaws__GetVideoSourceModesResponse &mediaws__GetVideoSourceModesResponse);

    /// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
    int SetVideoSourceMode(_mediaws__SetVideoSourceMode *mediaws__SetVideoSourceMode, _mediaws__SetVideoSourceModeResponse &mediaws__SetVideoSourceModeResponse);

    /// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
    int GetOSDs(_mediaws__GetOSDs *mediaws__GetOSDs, _mediaws__GetOSDsResponse &mediaws__GetOSDsResponse);

    /// Web service operation 'GetOSD' (returns error code or SOAP_OK)
    int GetOSD(_mediaws__GetOSD *mediaws__GetOSD, _mediaws__GetOSDResponse &mediaws__GetOSDResponse);

    /// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
    int GetOSDOptions(_mediaws__GetOSDOptions *mediaws__GetOSDOptions, _mediaws__GetOSDOptionsResponse &mediaws__GetOSDOptionsResponse);

    /// Web service operation 'SetOSD' (returns error code or SOAP_OK)
    int SetOSD(_mediaws__SetOSD *mediaws__SetOSD, _mediaws__SetOSDResponse &mediaws__SetOSDResponse);

    /// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
    int CreateOSD(_mediaws__CreateOSD *mediaws__CreateOSD, _mediaws__CreateOSDResponse &mediaws__CreateOSDResponse);

    /// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
    int DeleteOSD(_mediaws__DeleteOSD *mediaws__DeleteOSD, _mediaws__DeleteOSDResponse &mediaws__DeleteOSDResponse);

};

#endif // MEDIASERVICEEXT_H
