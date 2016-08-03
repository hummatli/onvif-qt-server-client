#ifndef ANALYTICSSERVICEEXTABST_H
#define ANALYTICSSERVICEEXTABST_H

#include "soap/onvifanalyticsH.h"

class AnalyticsServiceExtAbst
{
public:
    AnalyticsServiceExtAbst(){

    };

    /// Web service operation 'GetSupportedRules' (returns error code or SOAP_OK)
    virtual	int GetSupportedRules(_analyticsws__GetSupportedRules *analyticsws__GetSupportedRules, _analyticsws__GetSupportedRulesResponse &analyticsws__GetSupportedRulesResponse)  = 0;

    /// Web service operation 'CreateRules' (returns error code or SOAP_OK)
    virtual	int CreateRules(_analyticsws__CreateRules *analyticsws__CreateRules, _analyticsws__CreateRulesResponse &analyticsws__CreateRulesResponse)  = 0;

    /// Web service operation 'DeleteRules' (returns error code or SOAP_OK)
    virtual	int DeleteRules(_analyticsws__DeleteRules *analyticsws__DeleteRules, _analyticsws__DeleteRulesResponse &analyticsws__DeleteRulesResponse)  = 0;

    /// Web service operation 'GetRules' (returns error code or SOAP_OK)
    virtual	int GetRules(_analyticsws__GetRules *analyticsws__GetRules, _analyticsws__GetRulesResponse &analyticsws__GetRulesResponse)  = 0;

    /// Web service operation 'ModifyRules' (returns error code or SOAP_OK)
    virtual	int ModifyRules(_analyticsws__ModifyRules *analyticsws__ModifyRules, _analyticsws__ModifyRulesResponse &analyticsws__ModifyRulesResponse)  = 0;

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_analyticsws__GetServiceCapabilities *analyticsws__GetServiceCapabilities, _analyticsws__GetServiceCapabilitiesResponse &analyticsws__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetSupportedAnalyticsModules' (returns error code or SOAP_OK)
    virtual	int GetSupportedAnalyticsModules(_analyticsws__GetSupportedAnalyticsModules *analyticsws__GetSupportedAnalyticsModules, _analyticsws__GetSupportedAnalyticsModulesResponse &analyticsws__GetSupportedAnalyticsModulesResponse)  = 0;

    /// Web service operation 'CreateAnalyticsModules' (returns error code or SOAP_OK)
    virtual	int CreateAnalyticsModules(_analyticsws__CreateAnalyticsModules *analyticsws__CreateAnalyticsModules, _analyticsws__CreateAnalyticsModulesResponse &analyticsws__CreateAnalyticsModulesResponse)  = 0;

    /// Web service operation 'DeleteAnalyticsModules' (returns error code or SOAP_OK)
    virtual	int DeleteAnalyticsModules(_analyticsws__DeleteAnalyticsModules *analyticsws__DeleteAnalyticsModules, _analyticsws__DeleteAnalyticsModulesResponse &analyticsws__DeleteAnalyticsModulesResponse)  = 0;

    /// Web service operation 'GetAnalyticsModules' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsModules(_analyticsws__GetAnalyticsModules *analyticsws__GetAnalyticsModules, _analyticsws__GetAnalyticsModulesResponse &analyticsws__GetAnalyticsModulesResponse)  = 0;

    /// Web service operation 'ModifyAnalyticsModules' (returns error code or SOAP_OK)
    virtual	int ModifyAnalyticsModules(_analyticsws__ModifyAnalyticsModules *analyticsws__ModifyAnalyticsModules, _analyticsws__ModifyAnalyticsModulesResponse &analyticsws__ModifyAnalyticsModulesResponse)  = 0;

};

#endif // ANALYTICSSERVICEEXTABST_H
