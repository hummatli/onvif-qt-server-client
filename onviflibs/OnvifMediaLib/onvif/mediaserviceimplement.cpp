#include "soap/onvifmediaMediaBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/mediaservice.h"

MediaServiceExtAbst * MediaService::serviceExt = NULL;

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int MediaBindingService::GetServiceCapabilities(_mediaws__GetServiceCapabilities *mediaws__GetServiceCapabilities, _mediaws__GetServiceCapabilitiesResponse &mediaws__GetServiceCapabilitiesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetServiceCapabilities(mediaws__GetServiceCapabilities, mediaws__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSources( mediaws__GetVideoSources, mediaws__GetVideoSourcesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSources( mediaws__GetAudioSources,  mediaws__GetAudioSourcesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputs( mediaws__GetAudioOutputs,  mediaws__GetAudioOutputsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
int MediaBindingService::CreateProfile(_mediaws__CreateProfile *mediaws__CreateProfile, _mediaws__CreateProfileResponse &mediaws__CreateProfileResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->CreateProfile( mediaws__CreateProfile,  mediaws__CreateProfileResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetProfile' (returns error code or SOAP_OK)
int MediaBindingService::GetProfile(_mediaws__GetProfile *mediaws__GetProfile, _mediaws__GetProfileResponse &mediaws__GetProfileResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetProfile( mediaws__GetProfile,  mediaws__GetProfileResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
int MediaBindingService::GetProfiles(_mediaws__GetProfiles *mediaws__GetProfiles, _mediaws__GetProfilesResponse &mediaws__GetProfilesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetProfiles( mediaws__GetProfiles,  mediaws__GetProfilesResponse) ;
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddVideoEncoderConfiguration(_mediaws__AddVideoEncoderConfiguration *mediaws__AddVideoEncoderConfiguration, _mediaws__AddVideoEncoderConfigurationResponse &mediaws__AddVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddVideoEncoderConfiguration( mediaws__AddVideoEncoderConfiguration,  mediaws__AddVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddVideoSourceConfiguration(_mediaws__AddVideoSourceConfiguration *mediaws__AddVideoSourceConfiguration, _mediaws__AddVideoSourceConfigurationResponse &mediaws__AddVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddVideoSourceConfiguration( mediaws__AddVideoSourceConfiguration, mediaws__AddVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioEncoderConfiguration(_mediaws__AddAudioEncoderConfiguration *mediaws__AddAudioEncoderConfiguration, _mediaws__AddAudioEncoderConfigurationResponse &mediaws__AddAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddAudioEncoderConfiguration( mediaws__AddAudioEncoderConfiguration, mediaws__AddAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioSourceConfiguration(_mediaws__AddAudioSourceConfiguration *mediaws__AddAudioSourceConfiguration, _mediaws__AddAudioSourceConfigurationResponse &mediaws__AddAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddAudioSourceConfiguration( mediaws__AddAudioSourceConfiguration, mediaws__AddAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddPTZConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddPTZConfiguration(_mediaws__AddPTZConfiguration *mediaws__AddPTZConfiguration, _mediaws__AddPTZConfigurationResponse &mediaws__AddPTZConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddPTZConfiguration( mediaws__AddPTZConfiguration, mediaws__AddPTZConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddVideoAnalyticsConfiguration(_mediaws__AddVideoAnalyticsConfiguration *mediaws__AddVideoAnalyticsConfiguration, _mediaws__AddVideoAnalyticsConfigurationResponse &mediaws__AddVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddVideoAnalyticsConfiguration( mediaws__AddVideoAnalyticsConfiguration, mediaws__AddVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddMetadataConfiguration(_mediaws__AddMetadataConfiguration *mediaws__AddMetadataConfiguration, _mediaws__AddMetadataConfigurationResponse &mediaws__AddMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddMetadataConfiguration( mediaws__AddMetadataConfiguration, mediaws__AddMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioOutputConfiguration(_mediaws__AddAudioOutputConfiguration *mediaws__AddAudioOutputConfiguration, _mediaws__AddAudioOutputConfigurationResponse &mediaws__AddAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddAudioOutputConfiguration( mediaws__AddAudioOutputConfiguration, mediaws__AddAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioDecoderConfiguration(_mediaws__AddAudioDecoderConfiguration *mediaws__AddAudioDecoderConfiguration, _mediaws__AddAudioDecoderConfigurationResponse &mediaws__AddAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddAudioDecoderConfiguration( mediaws__AddAudioDecoderConfiguration, mediaws__AddAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveVideoEncoderConfiguration(_mediaws__RemoveVideoEncoderConfiguration *mediaws__RemoveVideoEncoderConfiguration, _mediaws__RemoveVideoEncoderConfigurationResponse &mediaws__RemoveVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveVideoEncoderConfiguration( mediaws__RemoveVideoEncoderConfiguration,  mediaws__RemoveVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveVideoSourceConfiguration(_mediaws__RemoveVideoSourceConfiguration *mediaws__RemoveVideoSourceConfiguration, _mediaws__RemoveVideoSourceConfigurationResponse &mediaws__RemoveVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveVideoSourceConfiguration( mediaws__RemoveVideoSourceConfiguration,  mediaws__RemoveVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioEncoderConfiguration(_mediaws__RemoveAudioEncoderConfiguration *mediaws__RemoveAudioEncoderConfiguration, _mediaws__RemoveAudioEncoderConfigurationResponse &mediaws__RemoveAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveAudioEncoderConfiguration( mediaws__RemoveAudioEncoderConfiguration, mediaws__RemoveAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioSourceConfiguration(_mediaws__RemoveAudioSourceConfiguration *mediaws__RemoveAudioSourceConfiguration, _mediaws__RemoveAudioSourceConfigurationResponse &mediaws__RemoveAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveAudioSourceConfiguration( mediaws__RemoveAudioSourceConfiguration, mediaws__RemoveAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemovePTZConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemovePTZConfiguration(_mediaws__RemovePTZConfiguration *mediaws__RemovePTZConfiguration, _mediaws__RemovePTZConfigurationResponse &mediaws__RemovePTZConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemovePTZConfiguration( mediaws__RemovePTZConfiguration, mediaws__RemovePTZConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveVideoAnalyticsConfiguration(_mediaws__RemoveVideoAnalyticsConfiguration *mediaws__RemoveVideoAnalyticsConfiguration, _mediaws__RemoveVideoAnalyticsConfigurationResponse &mediaws__RemoveVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveVideoAnalyticsConfiguration( mediaws__RemoveVideoAnalyticsConfiguration, mediaws__RemoveVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveMetadataConfiguration(_mediaws__RemoveMetadataConfiguration *mediaws__RemoveMetadataConfiguration, _mediaws__RemoveMetadataConfigurationResponse &mediaws__RemoveMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveMetadataConfiguration( mediaws__RemoveMetadataConfiguration, mediaws__RemoveMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioOutputConfiguration(_mediaws__RemoveAudioOutputConfiguration *mediaws__RemoveAudioOutputConfiguration, _mediaws__RemoveAudioOutputConfigurationResponse &mediaws__RemoveAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveAudioOutputConfiguration(mediaws__RemoveAudioOutputConfiguration,  mediaws__RemoveAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioDecoderConfiguration(_mediaws__RemoveAudioDecoderConfiguration *mediaws__RemoveAudioDecoderConfiguration, _mediaws__RemoveAudioDecoderConfigurationResponse &mediaws__RemoveAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveAudioDecoderConfiguration( mediaws__RemoveAudioDecoderConfiguration, mediaws__RemoveAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
int MediaBindingService::DeleteProfile(_mediaws__DeleteProfile *mediaws__DeleteProfile, _mediaws__DeleteProfileResponse &mediaws__DeleteProfileResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->DeleteProfile( mediaws__DeleteProfile, mediaws__DeleteProfileResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceConfigurations(_mediaws__GetVideoSourceConfigurations *mediaws__GetVideoSourceConfigurations, _mediaws__GetVideoSourceConfigurationsResponse &mediaws__GetVideoSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceConfigurations( mediaws__GetVideoSourceConfigurations,  mediaws__GetVideoSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoEncoderConfigurations(_mediaws__GetVideoEncoderConfigurations *mediaws__GetVideoEncoderConfigurations, _mediaws__GetVideoEncoderConfigurationsResponse &mediaws__GetVideoEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoEncoderConfigurations( mediaws__GetVideoEncoderConfigurations,  mediaws__GetVideoEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSourceConfigurations(_mediaws__GetAudioSourceConfigurations *mediaws__GetAudioSourceConfigurations, _mediaws__GetAudioSourceConfigurationsResponse &mediaws__GetAudioSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSourceConfigurations(mediaws__GetAudioSourceConfigurations,  mediaws__GetAudioSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioEncoderConfigurations(_mediaws__GetAudioEncoderConfigurations *mediaws__GetAudioEncoderConfigurations, _mediaws__GetAudioEncoderConfigurationsResponse &mediaws__GetAudioEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioEncoderConfigurations( mediaws__GetAudioEncoderConfigurations,  mediaws__GetAudioEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoAnalyticsConfigurations(_mediaws__GetVideoAnalyticsConfigurations *mediaws__GetVideoAnalyticsConfigurations, _mediaws__GetVideoAnalyticsConfigurationsResponse &mediaws__GetVideoAnalyticsConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoAnalyticsConfigurations( mediaws__GetVideoAnalyticsConfigurations,  mediaws__GetVideoAnalyticsConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetMetadataConfigurations(_mediaws__GetMetadataConfigurations *mediaws__GetMetadataConfigurations, _mediaws__GetMetadataConfigurationsResponse &mediaws__GetMetadataConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetMetadataConfigurations( mediaws__GetMetadataConfigurations,  mediaws__GetMetadataConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputConfigurations(_mediaws__GetAudioOutputConfigurations *mediaws__GetAudioOutputConfigurations, _mediaws__GetAudioOutputConfigurationsResponse &mediaws__GetAudioOutputConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputConfigurations( mediaws__GetAudioOutputConfigurations,  mediaws__GetAudioOutputConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioDecoderConfigurations(_mediaws__GetAudioDecoderConfigurations *mediaws__GetAudioDecoderConfigurations, _mediaws__GetAudioDecoderConfigurationsResponse &mediaws__GetAudioDecoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioDecoderConfigurations( mediaws__GetAudioDecoderConfigurations,  mediaws__GetAudioDecoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceConfiguration(_mediaws__GetVideoSourceConfiguration *mediaws__GetVideoSourceConfiguration, _mediaws__GetVideoSourceConfigurationResponse &mediaws__GetVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceConfiguration( mediaws__GetVideoSourceConfiguration,  mediaws__GetVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoEncoderConfiguration(_mediaws__GetVideoEncoderConfiguration *mediaws__GetVideoEncoderConfiguration, _mediaws__GetVideoEncoderConfigurationResponse &mediaws__GetVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoEncoderConfiguration( mediaws__GetVideoEncoderConfiguration,  mediaws__GetVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSourceConfiguration(_mediaws__GetAudioSourceConfiguration *mediaws__GetAudioSourceConfiguration, _mediaws__GetAudioSourceConfigurationResponse &mediaws__GetAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSourceConfiguration( mediaws__GetAudioSourceConfiguration,  mediaws__GetAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioEncoderConfiguration(_mediaws__GetAudioEncoderConfiguration *mediaws__GetAudioEncoderConfiguration, _mediaws__GetAudioEncoderConfigurationResponse &mediaws__GetAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioEncoderConfiguration( mediaws__GetAudioEncoderConfiguration, mediaws__GetAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoAnalyticsConfiguration(_mediaws__GetVideoAnalyticsConfiguration *mediaws__GetVideoAnalyticsConfiguration, _mediaws__GetVideoAnalyticsConfigurationResponse &mediaws__GetVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoAnalyticsConfiguration( mediaws__GetVideoAnalyticsConfiguration,  mediaws__GetVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetMetadataConfiguration(_mediaws__GetMetadataConfiguration *mediaws__GetMetadataConfiguration, _mediaws__GetMetadataConfigurationResponse &mediaws__GetMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetMetadataConfiguration( mediaws__GetMetadataConfiguration,  mediaws__GetMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputConfiguration(_mediaws__GetAudioOutputConfiguration *mediaws__GetAudioOutputConfiguration, _mediaws__GetAudioOutputConfigurationResponse &mediaws__GetAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputConfiguration( mediaws__GetAudioOutputConfiguration,  mediaws__GetAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioDecoderConfiguration(_mediaws__GetAudioDecoderConfiguration *mediaws__GetAudioDecoderConfiguration, _mediaws__GetAudioDecoderConfigurationResponse &mediaws__GetAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioDecoderConfiguration( mediaws__GetAudioDecoderConfiguration,  mediaws__GetAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleVideoEncoderConfigurations(_mediaws__GetCompatibleVideoEncoderConfigurations *mediaws__GetCompatibleVideoEncoderConfigurations, _mediaws__GetCompatibleVideoEncoderConfigurationsResponse &mediaws__GetCompatibleVideoEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleVideoEncoderConfigurations( mediaws__GetCompatibleVideoEncoderConfigurations,  mediaws__GetCompatibleVideoEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleVideoSourceConfigurations(_mediaws__GetCompatibleVideoSourceConfigurations *mediaws__GetCompatibleVideoSourceConfigurations, _mediaws__GetCompatibleVideoSourceConfigurationsResponse &mediaws__GetCompatibleVideoSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleVideoSourceConfigurations( mediaws__GetCompatibleVideoSourceConfigurations,  mediaws__GetCompatibleVideoSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioEncoderConfigurations(_mediaws__GetCompatibleAudioEncoderConfigurations *mediaws__GetCompatibleAudioEncoderConfigurations, _mediaws__GetCompatibleAudioEncoderConfigurationsResponse &mediaws__GetCompatibleAudioEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioEncoderConfigurations( mediaws__GetCompatibleAudioEncoderConfigurations,  mediaws__GetCompatibleAudioEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioSourceConfigurations(_mediaws__GetCompatibleAudioSourceConfigurations *mediaws__GetCompatibleAudioSourceConfigurations, _mediaws__GetCompatibleAudioSourceConfigurationsResponse &mediaws__GetCompatibleAudioSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioSourceConfigurations( mediaws__GetCompatibleAudioSourceConfigurations, mediaws__GetCompatibleAudioSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleVideoAnalyticsConfigurations(_mediaws__GetCompatibleVideoAnalyticsConfigurations *mediaws__GetCompatibleVideoAnalyticsConfigurations, _mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse &mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleVideoAnalyticsConfigurations( mediaws__GetCompatibleVideoAnalyticsConfigurations, mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleMetadataConfigurations(_mediaws__GetCompatibleMetadataConfigurations *mediaws__GetCompatibleMetadataConfigurations, _mediaws__GetCompatibleMetadataConfigurationsResponse &mediaws__GetCompatibleMetadataConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleMetadataConfigurations( mediaws__GetCompatibleMetadataConfigurations, mediaws__GetCompatibleMetadataConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioOutputConfigurations(_mediaws__GetCompatibleAudioOutputConfigurations *mediaws__GetCompatibleAudioOutputConfigurations, _mediaws__GetCompatibleAudioOutputConfigurationsResponse &mediaws__GetCompatibleAudioOutputConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioOutputConfigurations( mediaws__GetCompatibleAudioOutputConfigurations, mediaws__GetCompatibleAudioOutputConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioDecoderConfigurations(_mediaws__GetCompatibleAudioDecoderConfigurations *mediaws__GetCompatibleAudioDecoderConfigurations, _mediaws__GetCompatibleAudioDecoderConfigurationsResponse &mediaws__GetCompatibleAudioDecoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioDecoderConfigurations( mediaws__GetCompatibleAudioDecoderConfigurations, mediaws__GetCompatibleAudioDecoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoSourceConfiguration(_mediaws__SetVideoSourceConfiguration *mediaws__SetVideoSourceConfiguration, _mediaws__SetVideoSourceConfigurationResponse &mediaws__SetVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoSourceConfiguration( mediaws__SetVideoSourceConfiguration, mediaws__SetVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoEncoderConfiguration(_mediaws__SetVideoEncoderConfiguration *mediaws__SetVideoEncoderConfiguration, _mediaws__SetVideoEncoderConfigurationResponse &mediaws__SetVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoEncoderConfiguration( mediaws__SetVideoEncoderConfiguration, mediaws__SetVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioSourceConfiguration(_mediaws__SetAudioSourceConfiguration *mediaws__SetAudioSourceConfiguration, _mediaws__SetAudioSourceConfigurationResponse &mediaws__SetAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioSourceConfiguration( mediaws__SetAudioSourceConfiguration, mediaws__SetAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioEncoderConfiguration(_mediaws__SetAudioEncoderConfiguration *mediaws__SetAudioEncoderConfiguration, _mediaws__SetAudioEncoderConfigurationResponse &mediaws__SetAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioEncoderConfiguration( mediaws__SetAudioEncoderConfiguration, mediaws__SetAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoAnalyticsConfiguration(_mediaws__SetVideoAnalyticsConfiguration *mediaws__SetVideoAnalyticsConfiguration, _mediaws__SetVideoAnalyticsConfigurationResponse &mediaws__SetVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoAnalyticsConfiguration( mediaws__SetVideoAnalyticsConfiguration,  mediaws__SetVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetMetadataConfiguration(_mediaws__SetMetadataConfiguration *mediaws__SetMetadataConfiguration, _mediaws__SetMetadataConfigurationResponse &mediaws__SetMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetMetadataConfiguration( mediaws__SetMetadataConfiguration,  mediaws__SetMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioOutputConfiguration(_mediaws__SetAudioOutputConfiguration *mediaws__SetAudioOutputConfiguration, _mediaws__SetAudioOutputConfigurationResponse &mediaws__SetAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioOutputConfiguration( mediaws__SetAudioOutputConfiguration, mediaws__SetAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioDecoderConfiguration(_mediaws__SetAudioDecoderConfiguration *mediaws__SetAudioDecoderConfiguration, _mediaws__SetAudioDecoderConfigurationResponse &mediaws__SetAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioDecoderConfiguration(mediaws__SetAudioDecoderConfiguration,   mediaws__SetAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceConfigurationOptions(_mediaws__GetVideoSourceConfigurationOptions *mediaws__GetVideoSourceConfigurationOptions, _mediaws__GetVideoSourceConfigurationOptionsResponse &mediaws__GetVideoSourceConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceConfigurationOptions( mediaws__GetVideoSourceConfigurationOptions,  mediaws__GetVideoSourceConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoEncoderConfigurationOptions(_mediaws__GetVideoEncoderConfigurationOptions *mediaws__GetVideoEncoderConfigurationOptions, _mediaws__GetVideoEncoderConfigurationOptionsResponse &mediaws__GetVideoEncoderConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoEncoderConfigurationOptions( mediaws__GetVideoEncoderConfigurationOptions, mediaws__GetVideoEncoderConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSourceConfigurationOptions(_mediaws__GetAudioSourceConfigurationOptions *mediaws__GetAudioSourceConfigurationOptions, _mediaws__GetAudioSourceConfigurationOptionsResponse &mediaws__GetAudioSourceConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSourceConfigurationOptions( mediaws__GetAudioSourceConfigurationOptions, mediaws__GetAudioSourceConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioEncoderConfigurationOptions(_mediaws__GetAudioEncoderConfigurationOptions *mediaws__GetAudioEncoderConfigurationOptions, _mediaws__GetAudioEncoderConfigurationOptionsResponse &mediaws__GetAudioEncoderConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioEncoderConfigurationOptions( mediaws__GetAudioEncoderConfigurationOptions, mediaws__GetAudioEncoderConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetMetadataConfigurationOptions(_mediaws__GetMetadataConfigurationOptions *mediaws__GetMetadataConfigurationOptions, _mediaws__GetMetadataConfigurationOptionsResponse &mediaws__GetMetadataConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetMetadataConfigurationOptions( mediaws__GetMetadataConfigurationOptions, mediaws__GetMetadataConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputConfigurationOptions(_mediaws__GetAudioOutputConfigurationOptions *mediaws__GetAudioOutputConfigurationOptions, _mediaws__GetAudioOutputConfigurationOptionsResponse &mediaws__GetAudioOutputConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputConfigurationOptions( mediaws__GetAudioOutputConfigurationOptions,  mediaws__GetAudioOutputConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioDecoderConfigurationOptions(_mediaws__GetAudioDecoderConfigurationOptions *mediaws__GetAudioDecoderConfigurationOptions, _mediaws__GetAudioDecoderConfigurationOptionsResponse &mediaws__GetAudioDecoderConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioDecoderConfigurationOptions( mediaws__GetAudioDecoderConfigurationOptions, mediaws__GetAudioDecoderConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
int MediaBindingService::GetGuaranteedNumberOfVideoEncoderInstances(_mediaws__GetGuaranteedNumberOfVideoEncoderInstances *mediaws__GetGuaranteedNumberOfVideoEncoderInstances, _mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse &mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetGuaranteedNumberOfVideoEncoderInstances( mediaws__GetGuaranteedNumberOfVideoEncoderInstances, mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
int MediaBindingService::GetStreamUri(_mediaws__GetStreamUri *mediaws__GetStreamUri, _mediaws__GetStreamUriResponse &mediaws__GetStreamUriResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetStreamUri( mediaws__GetStreamUri,  mediaws__GetStreamUriResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
int MediaBindingService::StartMulticastStreaming(_mediaws__StartMulticastStreaming *mediaws__StartMulticastStreaming, _mediaws__StartMulticastStreamingResponse &mediaws__StartMulticastStreamingResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->StartMulticastStreaming( mediaws__StartMulticastStreaming, mediaws__StartMulticastStreamingResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
int MediaBindingService::StopMulticastStreaming(_mediaws__StopMulticastStreaming *mediaws__StopMulticastStreaming, _mediaws__StopMulticastStreamingResponse &mediaws__StopMulticastStreamingResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->StopMulticastStreaming( mediaws__StopMulticastStreaming, mediaws__StopMulticastStreamingResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
int MediaBindingService::SetSynchronizationPoint(_mediaws__SetSynchronizationPoint *mediaws__SetSynchronizationPoint, _mediaws__SetSynchronizationPointResponse &mediaws__SetSynchronizationPointResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetSynchronizationPoint( mediaws__SetSynchronizationPoint, mediaws__SetSynchronizationPointResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
int MediaBindingService::GetSnapshotUri(_mediaws__GetSnapshotUri *mediaws__GetSnapshotUri, _mediaws__GetSnapshotUriResponse &mediaws__GetSnapshotUriResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetSnapshotUri( mediaws__GetSnapshotUri, mediaws__GetSnapshotUriResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceModes(_mediaws__GetVideoSourceModes *mediaws__GetVideoSourceModes, _mediaws__GetVideoSourceModesResponse &mediaws__GetVideoSourceModesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceModes( mediaws__GetVideoSourceModes, mediaws__GetVideoSourceModesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoSourceMode(_mediaws__SetVideoSourceMode *mediaws__SetVideoSourceMode, _mediaws__SetVideoSourceModeResponse &mediaws__SetVideoSourceModeResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoSourceMode( mediaws__SetVideoSourceMode, mediaws__SetVideoSourceModeResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
int MediaBindingService::GetOSDs(_mediaws__GetOSDs *mediaws__GetOSDs, _mediaws__GetOSDsResponse &mediaws__GetOSDsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetOSDs( mediaws__GetOSDs, mediaws__GetOSDsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOSD' (returns error code or SOAP_OK)
int MediaBindingService::GetOSD(_mediaws__GetOSD *mediaws__GetOSD, _mediaws__GetOSDResponse &mediaws__GetOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetOSD( mediaws__GetOSD, mediaws__GetOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetOSDOptions(_mediaws__GetOSDOptions *mediaws__GetOSDOptions, _mediaws__GetOSDOptionsResponse &mediaws__GetOSDOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetOSDOptions( mediaws__GetOSDOptions,  mediaws__GetOSDOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetOSD' (returns error code or SOAP_OK)
int MediaBindingService::SetOSD(_mediaws__SetOSD *mediaws__SetOSD, _mediaws__SetOSDResponse &mediaws__SetOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetOSD( mediaws__SetOSD, mediaws__SetOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
int MediaBindingService::CreateOSD(_mediaws__CreateOSD *mediaws__CreateOSD, _mediaws__CreateOSDResponse &mediaws__CreateOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->CreateOSD( mediaws__CreateOSD, mediaws__CreateOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
int MediaBindingService::DeleteOSD(_mediaws__DeleteOSD *mediaws__DeleteOSD, _mediaws__DeleteOSDResponse &mediaws__DeleteOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->DeleteOSD( mediaws__DeleteOSD, mediaws__DeleteOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
