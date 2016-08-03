#ifndef RECORDINGCONTROLSERVICEEXTABST_H
#define RECORDINGCONTROLSERVICEEXTABST_H

#include "soap/onvifrecordingcontrolH.h"

class RecordingControlServiceExtAbst
{
public:
    RecordingControlServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_recordingcontrol__GetServiceCapabilities *recordingcontrol__GetServiceCapabilities, _recordingcontrol__GetServiceCapabilitiesResponse &recordingcontrol__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'CreateRecording' (returns error code or SOAP_OK)
    virtual	int CreateRecording(_recordingcontrol__CreateRecording *recordingcontrol__CreateRecording, _recordingcontrol__CreateRecordingResponse &recordingcontrol__CreateRecordingResponse)  = 0;

    /// Web service operation 'DeleteRecording' (returns error code or SOAP_OK)
    virtual	int DeleteRecording(_recordingcontrol__DeleteRecording *recordingcontrol__DeleteRecording, _recordingcontrol__DeleteRecordingResponse &recordingcontrol__DeleteRecordingResponse)  = 0;

    /// Web service operation 'GetRecordings' (returns error code or SOAP_OK)
    virtual	int GetRecordings(_recordingcontrol__GetRecordings *recordingcontrol__GetRecordings, _recordingcontrol__GetRecordingsResponse &recordingcontrol__GetRecordingsResponse)  = 0;

    /// Web service operation 'SetRecordingConfiguration' (returns error code or SOAP_OK)
    virtual	int SetRecordingConfiguration(_recordingcontrol__SetRecordingConfiguration *recordingcontrol__SetRecordingConfiguration, _recordingcontrol__SetRecordingConfigurationResponse &recordingcontrol__SetRecordingConfigurationResponse)  = 0;

    /// Web service operation 'GetRecordingConfiguration' (returns error code or SOAP_OK)
    virtual	int GetRecordingConfiguration(_recordingcontrol__GetRecordingConfiguration *recordingcontrol__GetRecordingConfiguration, _recordingcontrol__GetRecordingConfigurationResponse &recordingcontrol__GetRecordingConfigurationResponse)  = 0;

    /// Web service operation 'GetRecordingOptions' (returns error code or SOAP_OK)
    virtual	int GetRecordingOptions(_recordingcontrol__GetRecordingOptions *recordingcontrol__GetRecordingOptions, _recordingcontrol__GetRecordingOptionsResponse &recordingcontrol__GetRecordingOptionsResponse)  = 0;

    /// Web service operation 'CreateTrack' (returns error code or SOAP_OK)
    virtual	int CreateTrack(_recordingcontrol__CreateTrack *recordingcontrol__CreateTrack, _recordingcontrol__CreateTrackResponse &recordingcontrol__CreateTrackResponse)  = 0;

    /// Web service operation 'DeleteTrack' (returns error code or SOAP_OK)
    virtual	int DeleteTrack(_recordingcontrol__DeleteTrack *recordingcontrol__DeleteTrack, _recordingcontrol__DeleteTrackResponse &recordingcontrol__DeleteTrackResponse)  = 0;

    /// Web service operation 'GetTrackConfiguration' (returns error code or SOAP_OK)
    virtual	int GetTrackConfiguration(_recordingcontrol__GetTrackConfiguration *recordingcontrol__GetTrackConfiguration, _recordingcontrol__GetTrackConfigurationResponse &recordingcontrol__GetTrackConfigurationResponse)  = 0;

    /// Web service operation 'SetTrackConfiguration' (returns error code or SOAP_OK)
    virtual	int SetTrackConfiguration(_recordingcontrol__SetTrackConfiguration *recordingcontrol__SetTrackConfiguration, _recordingcontrol__SetTrackConfigurationResponse &recordingcontrol__SetTrackConfigurationResponse)  = 0;

    /// Web service operation 'CreateRecordingJob' (returns error code or SOAP_OK)
    virtual	int CreateRecordingJob(_recordingcontrol__CreateRecordingJob *recordingcontrol__CreateRecordingJob, _recordingcontrol__CreateRecordingJobResponse &recordingcontrol__CreateRecordingJobResponse)  = 0;

    /// Web service operation 'DeleteRecordingJob' (returns error code or SOAP_OK)
    virtual	int DeleteRecordingJob(_recordingcontrol__DeleteRecordingJob *recordingcontrol__DeleteRecordingJob, _recordingcontrol__DeleteRecordingJobResponse &recordingcontrol__DeleteRecordingJobResponse)  = 0;

    /// Web service operation 'GetRecordingJobs' (returns error code or SOAP_OK)
    virtual	int GetRecordingJobs(_recordingcontrol__GetRecordingJobs *recordingcontrol__GetRecordingJobs, _recordingcontrol__GetRecordingJobsResponse &recordingcontrol__GetRecordingJobsResponse)  = 0;

    /// Web service operation 'SetRecordingJobConfiguration' (returns error code or SOAP_OK)
    virtual	int SetRecordingJobConfiguration(_recordingcontrol__SetRecordingJobConfiguration *recordingcontrol__SetRecordingJobConfiguration, _recordingcontrol__SetRecordingJobConfigurationResponse &recordingcontrol__SetRecordingJobConfigurationResponse)  = 0;

    /// Web service operation 'GetRecordingJobConfiguration' (returns error code or SOAP_OK)
    virtual	int GetRecordingJobConfiguration(_recordingcontrol__GetRecordingJobConfiguration *recordingcontrol__GetRecordingJobConfiguration, _recordingcontrol__GetRecordingJobConfigurationResponse &recordingcontrol__GetRecordingJobConfigurationResponse)  = 0;

    /// Web service operation 'SetRecordingJobMode' (returns error code or SOAP_OK)
    virtual	int SetRecordingJobMode(_recordingcontrol__SetRecordingJobMode *recordingcontrol__SetRecordingJobMode, _recordingcontrol__SetRecordingJobModeResponse &recordingcontrol__SetRecordingJobModeResponse)  = 0;

    /// Web service operation 'GetRecordingJobState' (returns error code or SOAP_OK)
    virtual	int GetRecordingJobState(_recordingcontrol__GetRecordingJobState *recordingcontrol__GetRecordingJobState, _recordingcontrol__GetRecordingJobStateResponse &recordingcontrol__GetRecordingJobStateResponse)  = 0;

    /// Web service operation 'ExportRecordedData' (returns error code or SOAP_OK)
    virtual	int ExportRecordedData(_recordingcontrol__ExportRecordedData *recordingcontrol__ExportRecordedData, _recordingcontrol__ExportRecordedDataResponse &recordingcontrol__ExportRecordedDataResponse)  = 0;

    /// Web service operation 'StopExportRecordedData' (returns error code or SOAP_OK)
    virtual	int StopExportRecordedData(_recordingcontrol__StopExportRecordedData *recordingcontrol__StopExportRecordedData, _recordingcontrol__StopExportRecordedDataResponse &recordingcontrol__StopExportRecordedDataResponse)  = 0;

    /// Web service operation 'GetExportRecordedDataState' (returns error code or SOAP_OK)
    virtual	int GetExportRecordedDataState(_recordingcontrol__GetExportRecordedDataState *recordingcontrol__GetExportRecordedDataState, _recordingcontrol__GetExportRecordedDataStateResponse &recordingcontrol__GetExportRecordedDataStateResponse)  = 0;


};

#endif // RECORDINGCONTROLSERVICEEXTABST_H
