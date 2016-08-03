#ifndef ANALYTICSSERVICEEXT_H
#define ANALYTICSSERVICEEXT_H
#include "onvif/analyticsserviceextabst.h"


class AnalyticsServiceExt : public AnalyticsServiceExtAbst
{
public:
    AnalyticsServiceExt();

    /// Web service operation 'GetSupportedRules' (returns error code or SOAP_OK)
    int GetSupportedRules(_analyticsws__GetSupportedRules *analyticsws__GetSupportedRules, _analyticsws__GetSupportedRulesResponse &analyticsws__GetSupportedRulesResponse);

    /// Web service operation 'CreateRules' (returns error code or SOAP_OK)
    int CreateRules(_analyticsws__CreateRules *analyticsws__CreateRules, _analyticsws__CreateRulesResponse &analyticsws__CreateRulesResponse);

    /// Web service operation 'DeleteRules' (returns error code or SOAP_OK)
    int DeleteRules(_analyticsws__DeleteRules *analyticsws__DeleteRules, _analyticsws__DeleteRulesResponse &analyticsws__DeleteRulesResponse);

    /// Web service operation 'GetRules' (returns error code or SOAP_OK)
    int GetRules(_analyticsws__GetRules *analyticsws__GetRules, _analyticsws__GetRulesResponse &analyticsws__GetRulesResponse);

    /// Web service operation 'ModifyRules' (returns error code or SOAP_OK)
    int ModifyRules(_analyticsws__ModifyRules *analyticsws__ModifyRules, _analyticsws__ModifyRulesResponse &analyticsws__ModifyRulesResponse);

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    int GetServiceCapabilities(_analyticsws__GetServiceCapabilities *analyticsws__GetServiceCapabilities, _analyticsws__GetServiceCapabilitiesResponse &analyticsws__GetServiceCapabilitiesResponse);

    /// Web service operation 'GetSupportedAnalyticsModules' (returns error code or SOAP_OK)
    int GetSupportedAnalyticsModules(_analyticsws__GetSupportedAnalyticsModules *analyticsws__GetSupportedAnalyticsModules, _analyticsws__GetSupportedAnalyticsModulesResponse &analyticsws__GetSupportedAnalyticsModulesResponse);

    /// Web service operation 'CreateAnalyticsModules' (returns error code or SOAP_OK)
    int CreateAnalyticsModules(_analyticsws__CreateAnalyticsModules *analyticsws__CreateAnalyticsModules, _analyticsws__CreateAnalyticsModulesResponse &analyticsws__CreateAnalyticsModulesResponse);

    /// Web service operation 'DeleteAnalyticsModules' (returns error code or SOAP_OK)
    int DeleteAnalyticsModules(_analyticsws__DeleteAnalyticsModules *analyticsws__DeleteAnalyticsModules, _analyticsws__DeleteAnalyticsModulesResponse &analyticsws__DeleteAnalyticsModulesResponse);

    /// Web service operation 'GetAnalyticsModules' (returns error code or SOAP_OK)
    int GetAnalyticsModules(_analyticsws__GetAnalyticsModules *analyticsws__GetAnalyticsModules, _analyticsws__GetAnalyticsModulesResponse &analyticsws__GetAnalyticsModulesResponse);

    /// Web service operation 'ModifyAnalyticsModules' (returns error code or SOAP_OK)
    int ModifyAnalyticsModules(_analyticsws__ModifyAnalyticsModules *analyticsws__ModifyAnalyticsModules, _analyticsws__ModifyAnalyticsModulesResponse &analyticsws__ModifyAnalyticsModulesResponse);


};

#endif // ANALYTICSSERVICEEXT_H
