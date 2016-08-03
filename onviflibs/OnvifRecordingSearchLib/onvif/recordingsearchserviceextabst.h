#ifndef RECORDINGSEARCHSERVICEEXTABST_H
#define RECORDINGSEARCHSERVICEEXTABST_H

#include "soap/onvifrecordingsearchH.h"

class RecordingSearchServiceExtAbst
{
public:
    RecordingSearchServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_recordingsearch__GetServiceCapabilities *recordingsearch__GetServiceCapabilities, _recordingsearch__GetServiceCapabilitiesResponse &recordingsearch__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetRecordingSummary' (returns error code or SOAP_OK)
    virtual	int GetRecordingSummary(_recordingsearch__GetRecordingSummary *recordingsearch__GetRecordingSummary, _recordingsearch__GetRecordingSummaryResponse &recordingsearch__GetRecordingSummaryResponse)  = 0;

    /// Web service operation 'GetRecordingInformation' (returns error code or SOAP_OK)
    virtual	int GetRecordingInformation(_recordingsearch__GetRecordingInformation *recordingsearch__GetRecordingInformation, _recordingsearch__GetRecordingInformationResponse &recordingsearch__GetRecordingInformationResponse)  = 0;

    /// Web service operation 'GetMediaAttributes' (returns error code or SOAP_OK)
    virtual	int GetMediaAttributes(_recordingsearch__GetMediaAttributes *recordingsearch__GetMediaAttributes, _recordingsearch__GetMediaAttributesResponse &recordingsearch__GetMediaAttributesResponse)  = 0;

    /// Web service operation 'FindRecordings' (returns error code or SOAP_OK)
    virtual	int FindRecordings(_recordingsearch__FindRecordings *recordingsearch__FindRecordings, _recordingsearch__FindRecordingsResponse &recordingsearch__FindRecordingsResponse)  = 0;

    /// Web service operation 'GetRecordingSearchResults' (returns error code or SOAP_OK)
    virtual	int GetRecordingSearchResults(_recordingsearch__GetRecordingSearchResults *recordingsearch__GetRecordingSearchResults, _recordingsearch__GetRecordingSearchResultsResponse &recordingsearch__GetRecordingSearchResultsResponse)  = 0;

    /// Web service operation 'FindEvents' (returns error code or SOAP_OK)
    virtual	int FindEvents(_recordingsearch__FindEvents *recordingsearch__FindEvents, _recordingsearch__FindEventsResponse &recordingsearch__FindEventsResponse)  = 0;

    /// Web service operation 'GetEventSearchResults' (returns error code or SOAP_OK)
    virtual	int GetEventSearchResults(_recordingsearch__GetEventSearchResults *recordingsearch__GetEventSearchResults, _recordingsearch__GetEventSearchResultsResponse &recordingsearch__GetEventSearchResultsResponse)  = 0;

    /// Web service operation 'FindPTZPosition' (returns error code or SOAP_OK)
    virtual	int FindPTZPosition(_recordingsearch__FindPTZPosition *recordingsearch__FindPTZPosition, _recordingsearch__FindPTZPositionResponse &recordingsearch__FindPTZPositionResponse)  = 0;

    /// Web service operation 'GetPTZPositionSearchResults' (returns error code or SOAP_OK)
    virtual	int GetPTZPositionSearchResults(_recordingsearch__GetPTZPositionSearchResults *recordingsearch__GetPTZPositionSearchResults, _recordingsearch__GetPTZPositionSearchResultsResponse &recordingsearch__GetPTZPositionSearchResultsResponse)  = 0;

    /// Web service operation 'GetSearchState' (returns error code or SOAP_OK)
    virtual	int GetSearchState(_recordingsearch__GetSearchState *recordingsearch__GetSearchState, _recordingsearch__GetSearchStateResponse &recordingsearch__GetSearchStateResponse)  = 0;

    /// Web service operation 'EndSearch' (returns error code or SOAP_OK)
    virtual	int EndSearch(_recordingsearch__EndSearch *recordingsearch__EndSearch, _recordingsearch__EndSearchResponse &recordingsearch__EndSearchResponse)  = 0;

    /// Web service operation 'FindMetadata' (returns error code or SOAP_OK)
    virtual	int FindMetadata(_recordingsearch__FindMetadata *recordingsearch__FindMetadata, _recordingsearch__FindMetadataResponse &recordingsearch__FindMetadataResponse)  = 0;

    /// Web service operation 'GetMetadataSearchResults' (returns error code or SOAP_OK)
    virtual	int GetMetadataSearchResults(_recordingsearch__GetMetadataSearchResults *recordingsearch__GetMetadataSearchResults, _recordingsearch__GetMetadataSearchResultsResponse &recordingsearch__GetMetadataSearchResultsResponse)  = 0;

};

#endif // RECORDINGSEARCHSERVICEEXTABST_H
