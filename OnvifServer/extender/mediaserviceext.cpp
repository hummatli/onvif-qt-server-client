#include "mediaserviceext.h"
#include <QDebug>
#include <QObject>
#include <QString>

MediaServiceExt::MediaServiceExt() : MediaServiceExtAbst()
{

}

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int MediaServiceExt::GetServiceCapabilities(_mediaws__GetServiceCapabilities *mediaws__GetServiceCapabilities, _mediaws__GetServiceCapabilitiesResponse &mediaws__GetServiceCapabilitiesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse) {
    qDebug() << "Media Service GetVideoSources in NVT\n";

    tt__VideoSource * ttVideoSource = new tt__VideoSource();
    //ttVideoSource->token = "000";
    ttVideoSource->Framerate = 25;

    ttVideoSource->Resolution = new tt__VideoResolution();
    ttVideoSource->Resolution->Height = 720;
    ttVideoSource->Resolution->Width = 1080;

    mediaws__GetVideoSourcesResponse.VideoSources.push_back(ttVideoSource);

    return SOAP_OK;
}

/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
int MediaServiceExt::CreateProfile(_mediaws__CreateProfile *mediaws__CreateProfile, _mediaws__CreateProfileResponse &mediaws__CreateProfileResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetProfile' (returns error code or SOAP_OK)
int MediaServiceExt::GetProfile(_mediaws__GetProfile *mediaws__GetProfile, _mediaws__GetProfileResponse &mediaws__GetProfileResponse) {
    qDebug() << "Media Service GetProfile in NVT\n";

    if(mediaws__GetProfile->ProfileToken.compare("profile1") == 0){

                tt__Profile * ttProfile = new tt__Profile();
                ttProfile->fixed = 0;
                ttProfile->token = "profile1";
                ttProfile->Name = "Profile1";

                //VideoSource
                ttProfile->VideoSourceConfiguration = new tt__VideoSourceConfiguration();
                ttProfile->VideoSourceConfiguration->token = "video_source_config";
                ttProfile->VideoSourceConfiguration->Name = "video_source_config";
                ttProfile->VideoSourceConfiguration->UseCount = 1;
                //ttProfile->VideoSourceConfiguration->SourceToken = "video_source";

                ttProfile->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
                ttProfile->VideoSourceConfiguration->Bounds->height = 720;
                ttProfile->VideoSourceConfiguration->Bounds->width =1280;
                ttProfile->VideoSourceConfiguration->Bounds->y =1;
                ttProfile->VideoSourceConfiguration->Bounds->x =1;

                //VideoEncoder
                ttProfile->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
                ttProfile->VideoEncoderConfiguration->token = "video_encoder_config";
                ttProfile->VideoEncoderConfiguration->Name = "video_encoder_config";
                ttProfile->VideoEncoderConfiguration->UseCount = 1;

                ttProfile->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

                ttProfile->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
                ttProfile->VideoEncoderConfiguration->Resolution->Width = 1280;
                ttProfile->VideoEncoderConfiguration->Resolution->Height = 720;
                ttProfile->VideoEncoderConfiguration->Quality = 7;
                ttProfile->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
                ttProfile->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
                ttProfile->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
                ttProfile->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

                ttProfile->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
                ttProfile->VideoEncoderConfiguration->H264->GovLength = 30;
                ttProfile->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

                ttProfile->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
                ttProfile->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
                ttProfile->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
                ttProfile->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
                ttProfile->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

                ttProfile->VideoEncoderConfiguration->Multicast->Port = 0;
                ttProfile->VideoEncoderConfiguration->Multicast->TTL = 3;
                ttProfile->VideoEncoderConfiguration->Multicast->AutoStart = false;

                ttProfile->VideoEncoderConfiguration->SessionTimeout = 1000;

                //PTZ
                ttProfile->PTZConfiguration = new tt__PTZConfiguration;
                ttProfile->PTZConfiguration->Name = "PTZConfig_Channel1";
                ttProfile->PTZConfiguration->UseCount = 2;
                //ttProfile->PTZConfiguration->NodeToken = "000";
                ttProfile->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace = new std::string;
                ttProfile->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace");
                ttProfile->PTZConfiguration->DefaultAbsoluteZoomPositionSpace = new std::string;
                ttProfile->PTZConfiguration->DefaultAbsoluteZoomPositionSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace");
                ttProfile->PTZConfiguration->DefaultRelativePanTiltTranslationSpace = new std::string;
                ttProfile->PTZConfiguration->DefaultRelativePanTiltTranslationSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace");
                ttProfile->PTZConfiguration->DefaultRelativeZoomTranslationSpace = new std::string;
                ttProfile->PTZConfiguration->DefaultRelativeZoomTranslationSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace");
                ttProfile->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace = new std::string;
                ttProfile->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace");
                ttProfile->PTZConfiguration->DefaultContinuousZoomVelocitySpace = new std::string;
                ttProfile->PTZConfiguration->DefaultContinuousZoomVelocitySpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace");

                ttProfile->PTZConfiguration->DefaultPTZSpeed = new tt__PTZSpeed;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt = new tt__Vector2D;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->space = new std::string;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->space->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace");
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->x = 0.8;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->y = 0.8;

                ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom = new tt__Vector1D;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom->space = new std::string;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom->space->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace");

             //   LONG64 tout = 1000;
             //   ttProfile->PTZConfiguration->DefaultPTZTimeout = &tout;

                ttProfile->PTZConfiguration->PanTiltLimits = new tt__PanTiltLimits;
                ttProfile->PTZConfiguration->PanTiltLimits->Range = new tt__Space2DDescription;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
                ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange = new tt__FloatRange;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange->Min = -1.000000;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange->Max = 1.000000;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange = new tt__FloatRange;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange->Min = -1.000000;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange->Max = 1.000000;


                ttProfile->PTZConfiguration->ZoomLimits = new tt__ZoomLimits;
                ttProfile->PTZConfiguration->ZoomLimits->Range = new tt__Space1DDescription;
                ttProfile->PTZConfiguration->ZoomLimits->Range->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
                ttProfile->PTZConfiguration->ZoomLimits->Range->XRange = new tt__FloatRange;
                ttProfile->PTZConfiguration->ZoomLimits->Range->XRange->Min = 0.000000;
                ttProfile->PTZConfiguration->ZoomLimits->Range->XRange->Max = 1.000000;


                mediaws__GetProfileResponse.Profile = ttProfile;



    }else if(mediaws__GetProfile->ProfileToken.compare("profile2") == 0){
        tt__Profile * ttProfile2 = new tt__Profile();
        ttProfile2->fixed = 0;
        ttProfile2->token = "profile2";
        ttProfile2->Name = "Profile2";

        //Video source conf
        ttProfile2->VideoSourceConfiguration = new tt__VideoSourceConfiguration();
        ttProfile2->VideoSourceConfiguration->token = "video_source_config2";
        ttProfile2->VideoSourceConfiguration->Name = "video_source_config2";
        ttProfile2->VideoSourceConfiguration->UseCount = 1;
        //ttProfile2->VideoSourceConfiguration->SourceToken = "video_source2";

        ttProfile2->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
        ttProfile2->VideoSourceConfiguration->Bounds->height = 720;
        ttProfile2->VideoSourceConfiguration->Bounds->width =1280;
        ttProfile2->VideoSourceConfiguration->Bounds->y =1;
        ttProfile2->VideoSourceConfiguration->Bounds->x =1;


        //Video encoder conf
        ttProfile2->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
        ttProfile2->VideoEncoderConfiguration->token = "video_encoder_config2";
        ttProfile2->VideoEncoderConfiguration->Name = "video_encoder_config2";
        ttProfile2->VideoEncoderConfiguration->UseCount = 1;

        ttProfile2->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

        ttProfile2->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
        ttProfile2->VideoEncoderConfiguration->Resolution->Width = 1280;
        ttProfile2->VideoEncoderConfiguration->Resolution->Height = 720;
        ttProfile2->VideoEncoderConfiguration->Quality = 7;
        ttProfile2->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
        ttProfile2->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
        ttProfile2->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
        ttProfile2->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

        ttProfile2->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
        ttProfile2->VideoEncoderConfiguration->H264->GovLength = 30;
        ttProfile2->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

        ttProfile2->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
        ttProfile2->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
        ttProfile2->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
        ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
        ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

        ttProfile2->VideoEncoderConfiguration->Multicast->Port = 0;
        ttProfile2->VideoEncoderConfiguration->Multicast->TTL = 3;
        ttProfile2->VideoEncoderConfiguration->Multicast->AutoStart = false;

        ttProfile2->VideoEncoderConfiguration->SessionTimeout = 1000;


        //PTZ
        ttProfile2->PTZConfiguration = new tt__PTZConfiguration;
        ttProfile2->PTZConfiguration->Name = "PTZConfig_Channel1";
        ttProfile2->PTZConfiguration->UseCount = 2;
        //ttProfile->PTZConfiguration->NodeToken = "000";
        ttProfile2->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace");
        ttProfile2->PTZConfiguration->DefaultAbsoluteZoomPositionSpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultAbsoluteZoomPositionSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace");
        ttProfile2->PTZConfiguration->DefaultRelativePanTiltTranslationSpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultRelativePanTiltTranslationSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace");
        ttProfile2->PTZConfiguration->DefaultRelativeZoomTranslationSpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultRelativeZoomTranslationSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace");
        ttProfile2->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace");
        ttProfile2->PTZConfiguration->DefaultContinuousZoomVelocitySpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultContinuousZoomVelocitySpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace");

        ttProfile2->PTZConfiguration->DefaultPTZSpeed = new tt__PTZSpeed;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt = new tt__Vector2D;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->space = new std::string;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->space->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace");
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->x = 0.8;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->y = 0.8;

        ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom = new tt__Vector1D;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom->space = new std::string;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom->space->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace");

     //   LONG64 tout = 1000;
     //   ttProfile2->PTZConfiguration->DefaultPTZTimeout = &tout;

        ttProfile2->PTZConfiguration->PanTiltLimits = new tt__PanTiltLimits;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range = new tt__Space2DDescription;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange = new tt__FloatRange;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange->Min = -1.000000;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange->Max = 1.000000;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange = new tt__FloatRange;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange->Min = -1.000000;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange->Max = 1.000000;


        ttProfile2->PTZConfiguration->ZoomLimits = new tt__ZoomLimits;
        ttProfile2->PTZConfiguration->ZoomLimits->Range = new tt__Space1DDescription;
        ttProfile2->PTZConfiguration->ZoomLimits->Range->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
        ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange = new tt__FloatRange;
        ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange->Min = 0.000000;
        ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange->Max = 1.000000;



        mediaws__GetProfileResponse.Profile = ttProfile2;


    }
    return SOAP_OK;
}

/// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
int MediaServiceExt::GetProfiles(_mediaws__GetProfiles *mediaws__GetProfiles, _mediaws__GetProfilesResponse &mediaws__GetProfilesResponse) {
   qDebug() << "Media Service GetProfiles in NVTTTTT\n";


   tt__Profile * ttProfile = new tt__Profile();
   ttProfile->fixed = 0;
   ttProfile->token = "profile1";
   ttProfile->Name = "Profile1";

   //VideoSourceConf
   ttProfile->VideoSourceConfiguration = new tt__VideoSourceConfiguration();
   ttProfile->VideoSourceConfiguration->token = "video_source_config";
   ttProfile->VideoSourceConfiguration->Name = "video_source_config";
   ttProfile->VideoSourceConfiguration->UseCount = 1;
   //ttProfile->VideoSourceConfiguration->SourceToken = "video_source";

   ttProfile->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
   ttProfile->VideoSourceConfiguration->Bounds->height = 720;
   ttProfile->VideoSourceConfiguration->Bounds->width =1280;
   ttProfile->VideoSourceConfiguration->Bounds->y =1;
   ttProfile->VideoSourceConfiguration->Bounds->x =1;

   //VideoEncoderConf
   ttProfile->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
   ttProfile->VideoEncoderConfiguration->token = "video_encoder_config";
   ttProfile->VideoEncoderConfiguration->Name = "video_encoder_config";
   ttProfile->VideoEncoderConfiguration->UseCount = 1;

   ttProfile->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

   ttProfile->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
   ttProfile->VideoEncoderConfiguration->Resolution->Width = 1280;
   ttProfile->VideoEncoderConfiguration->Resolution->Height = 720;
   ttProfile->VideoEncoderConfiguration->Quality = 7;
   ttProfile->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
   ttProfile->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
   ttProfile->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
   ttProfile->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

   ttProfile->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
   ttProfile->VideoEncoderConfiguration->H264->GovLength = 30;
   ttProfile->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

   ttProfile->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
   ttProfile->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
   ttProfile->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
   ttProfile->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
   ttProfile->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

   ttProfile->VideoEncoderConfiguration->Multicast->Port = 0;
   ttProfile->VideoEncoderConfiguration->Multicast->TTL = 3;
   ttProfile->VideoEncoderConfiguration->Multicast->AutoStart = false;

   ttProfile->VideoEncoderConfiguration->SessionTimeout = 1000;


   //PTZ
   ttProfile->PTZConfiguration = new tt__PTZConfiguration;
   ttProfile->PTZConfiguration->Name = "PTZConfig_Channel1";
   ttProfile->PTZConfiguration->UseCount = 2;
   //ttProfile->PTZConfiguration->NodeToken = "000";
   ttProfile->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace = new std::string;
   ttProfile->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace");
   ttProfile->PTZConfiguration->DefaultAbsoluteZoomPositionSpace = new std::string;
   ttProfile->PTZConfiguration->DefaultAbsoluteZoomPositionSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace");
   ttProfile->PTZConfiguration->DefaultRelativePanTiltTranslationSpace = new std::string;
   ttProfile->PTZConfiguration->DefaultRelativePanTiltTranslationSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace");
   ttProfile->PTZConfiguration->DefaultRelativeZoomTranslationSpace = new std::string;
   ttProfile->PTZConfiguration->DefaultRelativeZoomTranslationSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace");
   ttProfile->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace = new std::string;
   ttProfile->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace");
   ttProfile->PTZConfiguration->DefaultContinuousZoomVelocitySpace = new std::string;
   ttProfile->PTZConfiguration->DefaultContinuousZoomVelocitySpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace");

   ttProfile->PTZConfiguration->DefaultPTZSpeed = new tt__PTZSpeed;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt = new tt__Vector2D;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->space = new std::string;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->space->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace");
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->x = 0.8;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->y = 0.8;

   ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom = new tt__Vector1D;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom->space = new std::string;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom->space->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace");

//   LONG64 tout = 1000;
//   ttProfile->PTZConfiguration->DefaultPTZTimeout = &tout;

   ttProfile->PTZConfiguration->PanTiltLimits = new tt__PanTiltLimits;
   ttProfile->PTZConfiguration->PanTiltLimits->Range = new tt__Space2DDescription;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
   ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange = new tt__FloatRange;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange->Min = -1.000000;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange->Max = 1.000000;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange = new tt__FloatRange;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange->Min = -1.000000;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange->Max = 1.000000;


   ttProfile->PTZConfiguration->ZoomLimits = new tt__ZoomLimits;
   ttProfile->PTZConfiguration->ZoomLimits->Range = new tt__Space1DDescription;
   ttProfile->PTZConfiguration->ZoomLimits->Range->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
   ttProfile->PTZConfiguration->ZoomLimits->Range->XRange = new tt__FloatRange;
   ttProfile->PTZConfiguration->ZoomLimits->Range->XRange->Min = 0.000000;
   ttProfile->PTZConfiguration->ZoomLimits->Range->XRange->Max = 1.000000;


   mediaws__GetProfilesResponse.Profiles.push_back(ttProfile);

//    //Profile 2------------------------------


   tt__Profile * ttProfile2 = new tt__Profile();
   ttProfile2->fixed = 0;
   ttProfile2->token = "profile2";
   ttProfile2->Name = "Profile2";

   //videosource conf
   ttProfile2->VideoSourceConfiguration = new tt__VideoSourceConfiguration();
   ttProfile2->VideoSourceConfiguration->token = "video_source_config2";
   ttProfile2->VideoSourceConfiguration->Name = "video_source_config2";
   ttProfile2->VideoSourceConfiguration->UseCount = 1;
   //ttProfile2->VideoSourceConfiguration->SourceToken = "video_source2";

   ttProfile2->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
   ttProfile2->VideoSourceConfiguration->Bounds->height = 720;
   ttProfile2->VideoSourceConfiguration->Bounds->width =1280;
   ttProfile2->VideoSourceConfiguration->Bounds->y =1;
   ttProfile2->VideoSourceConfiguration->Bounds->x =1;

   //VideoEncoder conf
   ttProfile2->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
   ttProfile2->VideoEncoderConfiguration->token = "video_encoder_config2";
   ttProfile2->VideoEncoderConfiguration->Name = "video_encoder_config2";
   ttProfile2->VideoEncoderConfiguration->UseCount = 1;

   ttProfile2->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

   ttProfile2->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
   ttProfile2->VideoEncoderConfiguration->Resolution->Width = 1280;
   ttProfile2->VideoEncoderConfiguration->Resolution->Height = 720;
   ttProfile2->VideoEncoderConfiguration->Quality = 7;
   ttProfile2->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
   ttProfile2->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
   ttProfile2->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
   ttProfile2->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

   ttProfile2->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
   ttProfile2->VideoEncoderConfiguration->H264->GovLength = 30;
   ttProfile2->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

   ttProfile2->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
   ttProfile2->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
   ttProfile2->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
   ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
   ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

   ttProfile2->VideoEncoderConfiguration->Multicast->Port = 0;
   ttProfile2->VideoEncoderConfiguration->Multicast->TTL = 3;
   ttProfile2->VideoEncoderConfiguration->Multicast->AutoStart = false;

   ttProfile2->VideoEncoderConfiguration->SessionTimeout = 1000;

   //PTZ
   ttProfile2->PTZConfiguration = new tt__PTZConfiguration;
   ttProfile2->PTZConfiguration->Name = "PTZConfig_Channel1";
   ttProfile2->PTZConfiguration->UseCount = 2;
   //ttProfile->PTZConfiguration->NodeToken = "000";
   ttProfile2->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace");
   ttProfile2->PTZConfiguration->DefaultAbsoluteZoomPositionSpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultAbsoluteZoomPositionSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace");
   ttProfile2->PTZConfiguration->DefaultRelativePanTiltTranslationSpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultRelativePanTiltTranslationSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace");
   ttProfile2->PTZConfiguration->DefaultRelativeZoomTranslationSpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultRelativeZoomTranslationSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace");
   ttProfile2->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace");
   ttProfile2->PTZConfiguration->DefaultContinuousZoomVelocitySpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultContinuousZoomVelocitySpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace");

   ttProfile2->PTZConfiguration->DefaultPTZSpeed = new tt__PTZSpeed;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt = new tt__Vector2D;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->space = new std::string;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->space->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace");
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->x = 0.8;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->y = 0.8;

   ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom = new tt__Vector1D;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom->space = new std::string;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom->space->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace");

//   LONG64 tout = 1000;
//   ttProfile2->PTZConfiguration->DefaultPTZTimeout = &tout;

   ttProfile2->PTZConfiguration->PanTiltLimits = new tt__PanTiltLimits;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range = new tt__Space2DDescription;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange = new tt__FloatRange;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange->Min = -1.000000;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange->Max = 1.000000;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange = new tt__FloatRange;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange->Min = -1.000000;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange->Max = 1.000000;


   ttProfile2->PTZConfiguration->ZoomLimits = new tt__ZoomLimits;
   ttProfile2->PTZConfiguration->ZoomLimits->Range = new tt__Space1DDescription;
   ttProfile2->PTZConfiguration->ZoomLimits->Range->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
   ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange = new tt__FloatRange;
   ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange->Min = 0.000000;
   ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange->Max = 1.000000;



   mediaws__GetProfilesResponse.Profiles.push_back(ttProfile2);

   return SOAP_OK;
}

/// Web service operation 'AddVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddVideoEncoderConfiguration(_mediaws__AddVideoEncoderConfiguration *mediaws__AddVideoEncoderConfiguration, _mediaws__AddVideoEncoderConfigurationResponse &mediaws__AddVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddVideoSourceConfiguration(_mediaws__AddVideoSourceConfiguration *mediaws__AddVideoSourceConfiguration, _mediaws__AddVideoSourceConfigurationResponse &mediaws__AddVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddAudioEncoderConfiguration(_mediaws__AddAudioEncoderConfiguration *mediaws__AddAudioEncoderConfiguration, _mediaws__AddAudioEncoderConfigurationResponse &mediaws__AddAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddAudioSourceConfiguration(_mediaws__AddAudioSourceConfiguration *mediaws__AddAudioSourceConfiguration, _mediaws__AddAudioSourceConfigurationResponse &mediaws__AddAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddPTZConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddPTZConfiguration(_mediaws__AddPTZConfiguration *mediaws__AddPTZConfiguration, _mediaws__AddPTZConfigurationResponse &mediaws__AddPTZConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddVideoAnalyticsConfiguration(_mediaws__AddVideoAnalyticsConfiguration *mediaws__AddVideoAnalyticsConfiguration, _mediaws__AddVideoAnalyticsConfigurationResponse &mediaws__AddVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddMetadataConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddMetadataConfiguration(_mediaws__AddMetadataConfiguration *mediaws__AddMetadataConfiguration, _mediaws__AddMetadataConfigurationResponse &mediaws__AddMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddAudioOutputConfiguration(_mediaws__AddAudioOutputConfiguration *mediaws__AddAudioOutputConfiguration, _mediaws__AddAudioOutputConfigurationResponse &mediaws__AddAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddAudioDecoderConfiguration(_mediaws__AddAudioDecoderConfiguration *mediaws__AddAudioDecoderConfiguration, _mediaws__AddAudioDecoderConfigurationResponse &mediaws__AddAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveVideoEncoderConfiguration(_mediaws__RemoveVideoEncoderConfiguration *mediaws__RemoveVideoEncoderConfiguration, _mediaws__RemoveVideoEncoderConfigurationResponse &mediaws__RemoveVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveVideoSourceConfiguration(_mediaws__RemoveVideoSourceConfiguration *mediaws__RemoveVideoSourceConfiguration, _mediaws__RemoveVideoSourceConfigurationResponse &mediaws__RemoveVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveAudioEncoderConfiguration(_mediaws__RemoveAudioEncoderConfiguration *mediaws__RemoveAudioEncoderConfiguration, _mediaws__RemoveAudioEncoderConfigurationResponse &mediaws__RemoveAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveAudioSourceConfiguration(_mediaws__RemoveAudioSourceConfiguration *mediaws__RemoveAudioSourceConfiguration, _mediaws__RemoveAudioSourceConfigurationResponse &mediaws__RemoveAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemovePTZConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemovePTZConfiguration(_mediaws__RemovePTZConfiguration *mediaws__RemovePTZConfiguration, _mediaws__RemovePTZConfigurationResponse &mediaws__RemovePTZConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveVideoAnalyticsConfiguration(_mediaws__RemoveVideoAnalyticsConfiguration *mediaws__RemoveVideoAnalyticsConfiguration, _mediaws__RemoveVideoAnalyticsConfigurationResponse &mediaws__RemoveVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveMetadataConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveMetadataConfiguration(_mediaws__RemoveMetadataConfiguration *mediaws__RemoveMetadataConfiguration, _mediaws__RemoveMetadataConfigurationResponse &mediaws__RemoveMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveAudioOutputConfiguration(_mediaws__RemoveAudioOutputConfiguration *mediaws__RemoveAudioOutputConfiguration, _mediaws__RemoveAudioOutputConfigurationResponse &mediaws__RemoveAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveAudioDecoderConfiguration(_mediaws__RemoveAudioDecoderConfiguration *mediaws__RemoveAudioDecoderConfiguration, _mediaws__RemoveAudioDecoderConfigurationResponse &mediaws__RemoveAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
int MediaServiceExt::DeleteProfile(_mediaws__DeleteProfile *mediaws__DeleteProfile, _mediaws__DeleteProfileResponse &mediaws__DeleteProfileResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSourceConfigurations(_mediaws__GetVideoSourceConfigurations *mediaws__GetVideoSourceConfigurations, _mediaws__GetVideoSourceConfigurationsResponse &mediaws__GetVideoSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoEncoderConfigurations(_mediaws__GetVideoEncoderConfigurations *mediaws__GetVideoEncoderConfigurations, _mediaws__GetVideoEncoderConfigurationsResponse &mediaws__GetVideoEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioSourceConfigurations(_mediaws__GetAudioSourceConfigurations *mediaws__GetAudioSourceConfigurations, _mediaws__GetAudioSourceConfigurationsResponse &mediaws__GetAudioSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioEncoderConfigurations(_mediaws__GetAudioEncoderConfigurations *mediaws__GetAudioEncoderConfigurations, _mediaws__GetAudioEncoderConfigurationsResponse &mediaws__GetAudioEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoAnalyticsConfigurations(_mediaws__GetVideoAnalyticsConfigurations *mediaws__GetVideoAnalyticsConfigurations, _mediaws__GetVideoAnalyticsConfigurationsResponse &mediaws__GetVideoAnalyticsConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetMetadataConfigurations(_mediaws__GetMetadataConfigurations *mediaws__GetMetadataConfigurations, _mediaws__GetMetadataConfigurationsResponse &mediaws__GetMetadataConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioOutputConfigurations(_mediaws__GetAudioOutputConfigurations *mediaws__GetAudioOutputConfigurations, _mediaws__GetAudioOutputConfigurationsResponse &mediaws__GetAudioOutputConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioDecoderConfigurations(_mediaws__GetAudioDecoderConfigurations *mediaws__GetAudioDecoderConfigurations, _mediaws__GetAudioDecoderConfigurationsResponse &mediaws__GetAudioDecoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSourceConfiguration(_mediaws__GetVideoSourceConfiguration *mediaws__GetVideoSourceConfiguration, _mediaws__GetVideoSourceConfigurationResponse &mediaws__GetVideoSourceConfigurationResponse) {
    qDebug() << "Media Service GetVideoSourceConfiguration in NVT\n";

    mediaws__GetVideoSourceConfigurationResponse.Configuration = new tt__VideoSourceConfiguration();
    mediaws__GetVideoSourceConfigurationResponse.Configuration->token = "video_source_config";
    mediaws__GetVideoSourceConfigurationResponse.Configuration->Name = "video_source_config";
    mediaws__GetVideoSourceConfigurationResponse.Configuration->UseCount = 1;
    //ttProfile->VideoSourceConfiguration->SourceToken = "video_source";

    mediaws__GetVideoSourceConfigurationResponse.Configuration->Bounds = new tt__IntRectangle();
    mediaws__GetVideoSourceConfigurationResponse.Configuration->Bounds->height = 720;
    mediaws__GetVideoSourceConfigurationResponse.Configuration->Bounds->width =1280;
    mediaws__GetVideoSourceConfigurationResponse.Configuration->Bounds->y =1;
    mediaws__GetVideoSourceConfigurationResponse.Configuration->Bounds->x =1;




    return SOAP_OK;
}

/// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoEncoderConfiguration(_mediaws__GetVideoEncoderConfiguration *mediaws__GetVideoEncoderConfiguration, _mediaws__GetVideoEncoderConfigurationResponse &mediaws__GetVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioSourceConfiguration(_mediaws__GetAudioSourceConfiguration *mediaws__GetAudioSourceConfiguration, _mediaws__GetAudioSourceConfigurationResponse &mediaws__GetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioEncoderConfiguration(_mediaws__GetAudioEncoderConfiguration *mediaws__GetAudioEncoderConfiguration, _mediaws__GetAudioEncoderConfigurationResponse &mediaws__GetAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoAnalyticsConfiguration(_mediaws__GetVideoAnalyticsConfiguration *mediaws__GetVideoAnalyticsConfiguration, _mediaws__GetVideoAnalyticsConfigurationResponse &mediaws__GetVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetMetadataConfiguration(_mediaws__GetMetadataConfiguration *mediaws__GetMetadataConfiguration, _mediaws__GetMetadataConfigurationResponse &mediaws__GetMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioOutputConfiguration(_mediaws__GetAudioOutputConfiguration *mediaws__GetAudioOutputConfiguration, _mediaws__GetAudioOutputConfigurationResponse &mediaws__GetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioDecoderConfiguration(_mediaws__GetAudioDecoderConfiguration *mediaws__GetAudioDecoderConfiguration, _mediaws__GetAudioDecoderConfigurationResponse &mediaws__GetAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleVideoEncoderConfigurations(_mediaws__GetCompatibleVideoEncoderConfigurations *mediaws__GetCompatibleVideoEncoderConfigurations, _mediaws__GetCompatibleVideoEncoderConfigurationsResponse &mediaws__GetCompatibleVideoEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleVideoSourceConfigurations(_mediaws__GetCompatibleVideoSourceConfigurations *mediaws__GetCompatibleVideoSourceConfigurations, _mediaws__GetCompatibleVideoSourceConfigurationsResponse &mediaws__GetCompatibleVideoSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleAudioEncoderConfigurations(_mediaws__GetCompatibleAudioEncoderConfigurations *mediaws__GetCompatibleAudioEncoderConfigurations, _mediaws__GetCompatibleAudioEncoderConfigurationsResponse &mediaws__GetCompatibleAudioEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleAudioSourceConfigurations(_mediaws__GetCompatibleAudioSourceConfigurations *mediaws__GetCompatibleAudioSourceConfigurations, _mediaws__GetCompatibleAudioSourceConfigurationsResponse &mediaws__GetCompatibleAudioSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleVideoAnalyticsConfigurations(_mediaws__GetCompatibleVideoAnalyticsConfigurations *mediaws__GetCompatibleVideoAnalyticsConfigurations, _mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse &mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleMetadataConfigurations(_mediaws__GetCompatibleMetadataConfigurations *mediaws__GetCompatibleMetadataConfigurations, _mediaws__GetCompatibleMetadataConfigurationsResponse &mediaws__GetCompatibleMetadataConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleAudioOutputConfigurations(_mediaws__GetCompatibleAudioOutputConfigurations *mediaws__GetCompatibleAudioOutputConfigurations, _mediaws__GetCompatibleAudioOutputConfigurationsResponse &mediaws__GetCompatibleAudioOutputConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleAudioDecoderConfigurations(_mediaws__GetCompatibleAudioDecoderConfigurations *mediaws__GetCompatibleAudioDecoderConfigurations, _mediaws__GetCompatibleAudioDecoderConfigurationsResponse &mediaws__GetCompatibleAudioDecoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetVideoSourceConfiguration(_mediaws__SetVideoSourceConfiguration *mediaws__SetVideoSourceConfiguration, _mediaws__SetVideoSourceConfigurationResponse &mediaws__SetVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetVideoEncoderConfiguration(_mediaws__SetVideoEncoderConfiguration *mediaws__SetVideoEncoderConfiguration, _mediaws__SetVideoEncoderConfigurationResponse &mediaws__SetVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetAudioSourceConfiguration(_mediaws__SetAudioSourceConfiguration *mediaws__SetAudioSourceConfiguration, _mediaws__SetAudioSourceConfigurationResponse &mediaws__SetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetAudioEncoderConfiguration(_mediaws__SetAudioEncoderConfiguration *mediaws__SetAudioEncoderConfiguration, _mediaws__SetAudioEncoderConfigurationResponse &mediaws__SetAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetVideoAnalyticsConfiguration(_mediaws__SetVideoAnalyticsConfiguration *mediaws__SetVideoAnalyticsConfiguration, _mediaws__SetVideoAnalyticsConfigurationResponse &mediaws__SetVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetMetadataConfiguration(_mediaws__SetMetadataConfiguration *mediaws__SetMetadataConfiguration, _mediaws__SetMetadataConfigurationResponse &mediaws__SetMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetAudioOutputConfiguration(_mediaws__SetAudioOutputConfiguration *mediaws__SetAudioOutputConfiguration, _mediaws__SetAudioOutputConfigurationResponse &mediaws__SetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetAudioDecoderConfiguration(_mediaws__SetAudioDecoderConfiguration *mediaws__SetAudioDecoderConfiguration, _mediaws__SetAudioDecoderConfigurationResponse &mediaws__SetAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSourceConfigurationOptions(_mediaws__GetVideoSourceConfigurationOptions *mediaws__GetVideoSourceConfigurationOptions, _mediaws__GetVideoSourceConfigurationOptionsResponse &mediaws__GetVideoSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoEncoderConfigurationOptions(_mediaws__GetVideoEncoderConfigurationOptions *mediaws__GetVideoEncoderConfigurationOptions, _mediaws__GetVideoEncoderConfigurationOptionsResponse &mediaws__GetVideoEncoderConfigurationOptionsResponse) {

//    mediaws__GetVideoEncoderConfigurationOptionsResponse.Options = new tt__VideoEncoderConfigurationOptions;
//    mediaws__GetVideoEncoderConfigurationOptionsResponse.Options->H264 = new tt__H264Options;
//    mediaws__GetVideoEncoderConfigurationOptionsResponse.Options->H264-> = new tt__H264Options;

//    ttProfile2->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
//    ttProfile2->VideoSourceConfiguration->Bounds->height = 720;
//    ttProfile2->VideoSourceConfiguration->Bounds->width =1280;
//    ttProfile2->VideoSourceConfiguration->Bounds->y =1;
//    ttProfile2->VideoSourceConfiguration->Bounds->x =1;

//    ttProfile2->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
//    ttProfile2->VideoEncoderConfiguration->token = "video_encoder_config2";
//    ttProfile2->VideoEncoderConfiguration->Name = "video_encoder_config2";
//    ttProfile2->VideoEncoderConfiguration->UseCount = 1;

//    ttProfile2->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

//    ttProfile2->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
//    ttProfile2->VideoEncoderConfiguration->Resolution->Width = 1280;
//    ttProfile2->VideoEncoderConfiguration->Resolution->Height = 720;
//    ttProfile2->VideoEncoderConfiguration->Quality = 7;
//    ttProfile2->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
//    ttProfile2->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
//    ttProfile2->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
//    ttProfile2->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

//    ttProfile2->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
//    ttProfile2->VideoEncoderConfiguration->H264->GovLength = 30;
//    ttProfile2->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

//    ttProfile2->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
//    ttProfile2->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
//    ttProfile2->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
//    ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
//    ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

//    ttProfile2->VideoEncoderConfiguration->Multicast->Port = 0;
//    ttProfile2->VideoEncoderConfiguration->Multicast->TTL = 3;
//    ttProfile2->VideoEncoderConfiguration->Multicast->AutoStart = false;

//    ttProfile2->VideoEncoderConfiguration->SessionTimeout = 1000;




    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioSourceConfigurationOptions(_mediaws__GetAudioSourceConfigurationOptions *mediaws__GetAudioSourceConfigurationOptions, _mediaws__GetAudioSourceConfigurationOptionsResponse &mediaws__GetAudioSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioEncoderConfigurationOptions(_mediaws__GetAudioEncoderConfigurationOptions *mediaws__GetAudioEncoderConfigurationOptions, _mediaws__GetAudioEncoderConfigurationOptionsResponse &mediaws__GetAudioEncoderConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetMetadataConfigurationOptions(_mediaws__GetMetadataConfigurationOptions *mediaws__GetMetadataConfigurationOptions, _mediaws__GetMetadataConfigurationOptionsResponse &mediaws__GetMetadataConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioOutputConfigurationOptions(_mediaws__GetAudioOutputConfigurationOptions *mediaws__GetAudioOutputConfigurationOptions, _mediaws__GetAudioOutputConfigurationOptionsResponse &mediaws__GetAudioOutputConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioDecoderConfigurationOptions(_mediaws__GetAudioDecoderConfigurationOptions *mediaws__GetAudioDecoderConfigurationOptions, _mediaws__GetAudioDecoderConfigurationOptionsResponse &mediaws__GetAudioDecoderConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
int MediaServiceExt::GetGuaranteedNumberOfVideoEncoderInstances(_mediaws__GetGuaranteedNumberOfVideoEncoderInstances *mediaws__GetGuaranteedNumberOfVideoEncoderInstances, _mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse &mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
int MediaServiceExt::GetStreamUri(_mediaws__GetStreamUri *mediaws__GetStreamUri, _mediaws__GetStreamUriResponse &mediaws__GetStreamUriResponse) {
    qDebug() << "Media Service GetStreamUri in NVT profile token = " << mediaws__GetStreamUri->ProfileToken.data() << "\n";

    tt__MediaUri *ttMediaUri = new tt__MediaUri();
    ttMediaUri->InvalidAfterConnect = true;
    ttMediaUri->InvalidAfterReboot = true;
    ttMediaUri->Timeout = 10000;

    if(mediaws__GetStreamUri->ProfileToken.compare("profile1") == 0){
        ttMediaUri->Uri = "rtsp://172.16.6.79/test.264";
        mediaws__GetStreamUriResponse.MediaUri = ttMediaUri;
    } else if(mediaws__GetStreamUri->ProfileToken.compare("profile2") == 0){
        ttMediaUri->Uri = "rtsp://172.16.6.79:8654/mylink";
        mediaws__GetStreamUriResponse.MediaUri = ttMediaUri;
    }

    return SOAP_OK;
}

/// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
int MediaServiceExt::StartMulticastStreaming(_mediaws__StartMulticastStreaming *mediaws__StartMulticastStreaming, _mediaws__StartMulticastStreamingResponse &mediaws__StartMulticastStreamingResponse) {
    return SOAP_OK;
}

/// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
int MediaServiceExt::StopMulticastStreaming(_mediaws__StopMulticastStreaming *mediaws__StopMulticastStreaming, _mediaws__StopMulticastStreamingResponse &mediaws__StopMulticastStreamingResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
int MediaServiceExt::SetSynchronizationPoint(_mediaws__SetSynchronizationPoint *mediaws__SetSynchronizationPoint, _mediaws__SetSynchronizationPointResponse &mediaws__SetSynchronizationPointResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
int MediaServiceExt::GetSnapshotUri(_mediaws__GetSnapshotUri *mediaws__GetSnapshotUri, _mediaws__GetSnapshotUriResponse &mediaws__GetSnapshotUriResponse) {
    qDebug() << "Media Service GetSnapshotUri in NVT\n";

    mediaws__GetSnapshotUri->ProfileToken;
    tt__MediaUri *ttMediaUri = new tt__MediaUri();
    ttMediaUri->Uri = "http://www.nanowerk.com/images/nanointro3.jpg";
    ttMediaUri->InvalidAfterConnect = true;
    ttMediaUri->InvalidAfterReboot = true;

    mediaws__GetSnapshotUriResponse.MediaUri = ttMediaUri;
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSourceModes(_mediaws__GetVideoSourceModes *mediaws__GetVideoSourceModes, _mediaws__GetVideoSourceModesResponse &mediaws__GetVideoSourceModesResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
int MediaServiceExt::SetVideoSourceMode(_mediaws__SetVideoSourceMode *mediaws__SetVideoSourceMode, _mediaws__SetVideoSourceModeResponse &mediaws__SetVideoSourceModeResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
int MediaServiceExt::GetOSDs(_mediaws__GetOSDs *mediaws__GetOSDs, _mediaws__GetOSDsResponse &mediaws__GetOSDsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetOSD' (returns error code or SOAP_OK)
int MediaServiceExt::GetOSD(_mediaws__GetOSD *mediaws__GetOSD, _mediaws__GetOSDResponse &mediaws__GetOSDResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetOSDOptions(_mediaws__GetOSDOptions *mediaws__GetOSDOptions, _mediaws__GetOSDOptionsResponse &mediaws__GetOSDOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetOSD' (returns error code or SOAP_OK)
int MediaServiceExt::SetOSD(_mediaws__SetOSD *mediaws__SetOSD, _mediaws__SetOSDResponse &mediaws__SetOSDResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
int MediaServiceExt::CreateOSD(_mediaws__CreateOSD *mediaws__CreateOSD, _mediaws__CreateOSDResponse &mediaws__CreateOSDResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
int MediaServiceExt::DeleteOSD(_mediaws__DeleteOSD *mediaws__DeleteOSD, _mediaws__DeleteOSDResponse &mediaws__DeleteOSDResponse) {
    return SOAP_OK;
}
