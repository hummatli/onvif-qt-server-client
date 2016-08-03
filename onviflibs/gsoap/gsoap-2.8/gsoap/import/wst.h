/*
	wst.h

	Generated with:
	wsdl2h -cuyx -o wst.h -t WS/WS-typemap.dat WS/WS-Trust.xsd

	- Removed //gsoapopt
	- Changed //gsoap wst schema namespace directive to import directive
	- Changed "wsa.h" to "wsa5.h" and wsa__ to wsa5__ to support both versions
	- Added #import "wstx.h" at the end of these definitions

*/

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   http://schemas.xmlsoap.org/ws/2005/02/trust                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/

#import "wsse.h"
#import "wsu.h"
#import "wsa5.h"

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/

#define SOAP_NAMESPACE_OF_wst	"http://schemas.xmlsoap.org/ws/2005/02/trust"
//gsoap wst   schema import:	http://schemas.xmlsoap.org/ws/2005/02/trust
//gsoap wst   schema elementForm:	qualified
//gsoap wst   schema attributeForm:	unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/

// Imported type "http://schemas.xmlsoap.org/ws/2004/08/addressing":EndpointReferenceType defined by wsa__EndpointReferenceType

/// Imported element "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd":SecurityTokenReference from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.


/// Typedef synonym for struct wst__RequestSecurityTokenType.
typedef struct wst__RequestSecurityTokenType wst__RequestSecurityTokenType;

/// Typedef synonym for struct wst__RequestSecurityTokenResponseType.
typedef struct wst__RequestSecurityTokenResponseType wst__RequestSecurityTokenResponseType;

/// Imported complexType "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedSecurityTokenType from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
typedef struct wst__RequestedSecurityTokenType
{	_wsse__SecurityTokenReference *wsse__SecurityTokenReference;
} wst__RequestedSecurityTokenType;

/// Typedef synonym for struct wst__BinarySecretType.
typedef struct wst__BinarySecretType wst__BinarySecretType;

/// Typedef synonym for struct wst__ClaimsType.
typedef struct wst__ClaimsType wst__ClaimsType;

/// Imported complexType "http://schemas.xmlsoap.org/ws/2005/02/trust":EntropyType from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
typedef struct wst__EntropyType
{	struct wst__BinarySecretType *BinarySecret;
} wst__EntropyType;

/// Typedef synonym for struct wst__LifetimeType.
typedef struct wst__LifetimeType wst__LifetimeType;

/// Typedef synonym for struct wst__RequestedReferenceType.
typedef struct wst__RequestedReferenceType wst__RequestedReferenceType;

/// Typedef synonym for struct wst__RequestedProofTokenType.
typedef struct wst__RequestedProofTokenType wst__RequestedProofTokenType;

/// Typedef synonym for struct wst__RequestSecurityTokenResponseCollectionType.
typedef struct wst__RequestSecurityTokenResponseCollectionType wst__RequestSecurityTokenResponseCollectionType;

/// Typedef synonym for struct wst__RenewTargetType.
typedef struct wst__RenewTargetType wst__RenewTargetType;

/// Typedef synonym for struct wst__AllowPostdatingType.
typedef struct wst__AllowPostdatingType wst__AllowPostdatingType;

/// Typedef synonym for struct wst__RenewingType.
typedef struct wst__RenewingType wst__RenewingType;

/// Typedef synonym for struct wst__CancelTargetType.
typedef struct wst__CancelTargetType wst__CancelTargetType;

/// Typedef synonym for struct wst__RequestedTokenCancelledType.
typedef struct wst__RequestedTokenCancelledType wst__RequestedTokenCancelledType;

/// Typedef synonym for struct wst__StatusType.
typedef struct wst__StatusType wst__StatusType;

/// Typedef synonym for struct wst__SignChallengeType.
typedef struct wst__SignChallengeType wst__SignChallengeType;

/// Typedef synonym for struct wst__BinaryExchangeType.
typedef struct wst__BinaryExchangeType wst__BinaryExchangeType;

/// Typedef synonym for struct wst__RequestKETType.
typedef struct wst__RequestKETType wst__RequestKETType;

/// Typedef synonym for struct wst__KeyExchangeTokenType.
typedef struct wst__KeyExchangeTokenType wst__KeyExchangeTokenType;

/// Typedef synonym for struct wst__AuthenticatorType.
typedef struct wst__AuthenticatorType wst__AuthenticatorType;

/// Typedef synonym for struct wst__OnBehalfOfType.
typedef struct wst__OnBehalfOfType wst__OnBehalfOfType;

/// Typedef synonym for struct wst__EncryptionType.
typedef struct wst__EncryptionType wst__EncryptionType;

/// Typedef synonym for struct wst__ProofEncryptionType.
typedef struct wst__ProofEncryptionType wst__ProofEncryptionType;

/// Typedef synonym for struct wst__UseKeyType.
typedef struct wst__UseKeyType wst__UseKeyType;

/// Typedef synonym for struct wst__DelegateToType.
typedef struct wst__DelegateToType wst__DelegateToType;

/// Typedef synonym for struct wst__ParticipantsType.
typedef struct wst__ParticipantsType wst__ParticipantsType;

/// Typedef synonym for struct wst__ParticipantType.
typedef struct wst__ParticipantType wst__ParticipantType;

/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://schemas.xmlsoap.org/ws/2005/02/trust                              *
 *                                                                            *
\******************************************************************************/


/// union of values "wst:RequestTypeEnum xs:anyURI"
typedef char* wst__RequestTypeOpenEnum;

/// union of values "wst:BinarySecretTypeEnum xs:anyURI"
typedef char* wst__BinarySecretTypeOpenEnum;

/// union of values "wst:ComputedKeyEnum xs:anyURI"
typedef char* wst__ComputedKeyOpenEnum;

/// union of values "wst:StatusCodeEnum xs:anyURI"
typedef char* wst__StatusCodeOpenEnum;

/// union of values "wst:KeyTypeEnum xs:anyURI"
typedef char* wst__KeyTypeOpenEnum;

/// Imported simpleType "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestTypeEnum from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
// simpleType definition intentionally left blank.

/// Imported simpleType "http://schemas.xmlsoap.org/ws/2005/02/trust":BinarySecretTypeEnum from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
// simpleType definition intentionally left blank.

/// Imported simpleType "http://schemas.xmlsoap.org/ws/2005/02/trust":ComputedKeyEnum from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
// simpleType definition intentionally left blank.

/// Imported simpleType "http://schemas.xmlsoap.org/ws/2005/02/trust":StatusCodeEnum from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
// simpleType definition intentionally left blank.

/// Imported simpleType "http://schemas.xmlsoap.org/ws/2005/02/trust":KeyTypeEnum from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
// simpleType definition intentionally left blank.

/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://schemas.xmlsoap.org/ws/2005/02/trust                              *
 *                                                                            *
\******************************************************************************/


/// "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityTokenType is a complexType.
/// @brief Actual content model is non-deterministic, hence wildcard. The following shows intended content model: <xs:element ref='wst:TokenType' minOccurs='0' /> <xs:element ref='wst:RequestType' /> <xs:element ref='wsp:AppliesTo' minOccurs='0' /> <xs:element ref='wst:Claims' minOccurs='0' /> <xs:element ref='wst:Entropy' minOccurs='0' /> <xs:element ref='wst:Lifetime' minOccurs='0' /> <xs:element ref='wst:AllowPostdating' minOccurs='0' /> <xs:element ref='wst:Renewing' minOccurs='0' /> <xs:element ref='wst:OnBehalfOf' minOccurs='0' /> <xs:element ref='wst:Issuer' minOccurs='0' /> <xs:element ref='wst:AuthenticationType' minOccurs='0' /> <xs:element ref='wst:KeyType' minOccurs='0' /> <xs:element ref='wst:KeySize' minOccurs='0' /> <xs:element ref='wst:SignatureAlgorithm' minOccurs='0' /> <xs:element ref='wst:Encryption' minOccurs='0' /> <xs:element ref='wst:EncryptionAlgorithm' minOccurs='0' /> <xs:element ref='wst:CanonicalizationAlgorithm' minOccurs='0' /> <xs:element ref='wst:ProofEncryption' minOccurs='0' /> <xs:element ref='wst:UseKey' minOccurs='0' /> <xs:element ref='wst:SignWith' minOccurs='0' /> <xs:element ref='wst:EncryptWith' minOccurs='0' /> <xs:element ref='wst:DelegateTo' minOccurs='0' /> <xs:element ref='wst:Forwardable' minOccurs='0' /> <xs:element ref='wst:Delegatable' minOccurs='0' /> <xs:element ref='wsp:Policy' minOccurs='0' /> <xs:element ref='wsp:PolicyReference' minOccurs='0' /> <xs:any namespace='##other' processContents='lax' minOccurs='0' maxOccurs='unbounded' />
struct wst__RequestSecurityTokenType
{
/// TODO: <any namespace="##any" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// Attribute Context of type xs:anyURI.
   @char*                                Context                        0;	///< Optional attribute.
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
/// Member declared in /Users/engelen/Projects/gsoap/WS/WS-typemap.dat
       char*                                TokenType;
/// Member declared in /Users/engelen/Projects/gsoap/WS/WS-typemap.dat
       wst__RequestTypeOpenEnum             RequestType;
/// Member declared in /Users/engelen/Projects/gsoap/WS/WS-typemap.dat
       unsigned int*                        KeySize;
/// Member declared in /Users/engelen/Projects/gsoap/WS/WS-typemap.dat
       struct wst__BinaryExchangeType*      BinaryExchange;
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityTokenResponseType is a complexType.
/// @brief Actual content model is non-deterministic, hence wildcard. The following shows intended content model: <xs:element ref='wst:TokenType' minOccurs='0' /> <xs:element ref='wst:RequestType' /> <xs:element ref='wst:RequestedSecurityToken' minOccurs='0' /> <xs:element ref='wsp:AppliesTo' minOccurs='0' /> <xs:element ref='wst:RequestedAttachedReference' minOccurs='0' /> <xs:element ref='wst:RequestedUnattachedReference' minOccurs='0' /> <xs:element ref='wst:RequestedProofToken' minOccurs='0' /> <xs:element ref='wst:Entropy' minOccurs='0' /> <xs:element ref='wst:Lifetime' minOccurs='0' /> <xs:element ref='wst:Status' minOccurs='0' /> <xs:element ref='wst:AllowPostdating' minOccurs='0' /> <xs:element ref='wst:Renewing' minOccurs='0' /> <xs:element ref='wst:OnBehalfOf' minOccurs='0' /> <xs:element ref='wst:Issuer' minOccurs='0' /> <xs:element ref='wst:AuthenticationType' minOccurs='0' /> <xs:element ref='wst:Authenticator' minOccurs='0' /> <xs:element ref='wst:KeyType' minOccurs='0' /> <xs:element ref='wst:KeySize' minOccurs='0' /> <xs:element ref='wst:SignatureAlgorithm' minOccurs='0' /> <xs:element ref='wst:Encryption' minOccurs='0' /> <xs:element ref='wst:EncryptionAlgorithm' minOccurs='0' /> <xs:element ref='wst:CanonicalizationAlgorithm' minOccurs='0' /> <xs:element ref='wst:ProofEncryption' minOccurs='0' /> <xs:element ref='wst:UseKey' minOccurs='0' /> <xs:element ref='wst:SignWith' minOccurs='0' /> <xs:element ref='wst:EncryptWith' minOccurs='0' /> <xs:element ref='wst:DelegateTo' minOccurs='0' /> <xs:element ref='wst:Forwardable' minOccurs='0' /> <xs:element ref='wst:Delegatable' minOccurs='0' /> <xs:element ref='wsp:Policy' minOccurs='0' /> <xs:element ref='wsp:PolicyReference' minOccurs='0' /> <xs:any namespace='##other' processContents='lax' minOccurs='0' maxOccurs='unbounded' />
struct wst__RequestSecurityTokenResponseType
{
/// TODO: <any namespace="##any" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// Attribute Context of type xs:anyURI.
   @char*                                Context                        0;	///< Optional attribute.
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
/// Member declared in /Users/engelen/Projects/gsoap/WS/WS-typemap.dat
       char*                                TokenType;
/// Member declared in /Users/engelen/Projects/gsoap/WS/WS-typemap.dat
       struct wst__RequestedSecurityTokenType*  RequestedSecurityToken;
/// Member declared in /Users/engelen/Projects/gsoap/WS/WS-typemap.dat
       struct wst__BinaryExchangeType*      BinaryExchange;
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":ClaimsType is a complexType.
struct wst__ClaimsType
{
/// TODO: <any namespace="##any" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// Attribute Dialect of type xs:anyURI.
   @char*                                Dialect                        0;	///< Optional attribute.
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":LifetimeType is a complexType.
struct wst__LifetimeType
{
/// Imported element reference "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd":Created.
    char*                                wsu__Created                   0;	///< Optional element.
/// Imported element reference "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd":Expires.
    char*                                wsu__Expires                   0;	///< Optional element.
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedReferenceType is a complexType.
struct wst__RequestedReferenceType
{
/// Imported element reference "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd":SecurityTokenReference.
    _wsse__SecurityTokenReference        wsse__SecurityTokenReference   1;	///< Required element.
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedProofTokenType is a complexType.
struct wst__RequestedProofTokenType
{
/// TODO: <any namespace="##any">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityTokenResponseCollectionType is a complexType.
struct wst__RequestSecurityTokenResponseCollectionType
{
/// Size of the dynamic array of struct wst__RequestSecurityTokenResponseType* is 1..unbounded
   $int                                  __sizeRequestSecurityTokenResponse 1;
/// Array struct wst__RequestSecurityTokenResponseType* of length 1..unbounded
    struct wst__RequestSecurityTokenResponseType*  RequestSecurityTokenResponse   1;
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":RenewTargetType is a complexType.
struct wst__RenewTargetType
{
/// TODO: <any namespace="##other" minOccurs="1" maxOccurs="1">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":AllowPostdatingType is a complexType.
struct wst__AllowPostdatingType
{
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":RenewingType is a complexType.
struct wst__RenewingType
{
/// Attribute Allow of type xs:boolean.
   @char*                                Allow                          0;	///< Optional attribute.
/// Attribute OK of type xs:boolean.
   @char*                                OK                             0;	///< Optional attribute.
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":CancelTargetType is a complexType.
struct wst__CancelTargetType
{
/// TODO: <any namespace="##other" minOccurs="1" maxOccurs="1">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedTokenCancelledType is a complexType.
struct wst__RequestedTokenCancelledType
{
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":StatusType is a complexType.
struct wst__StatusType
{
/// Element Code of type "http://schemas.xmlsoap.org/ws/2005/02/trust":StatusCodeOpenEnum.
    wst__StatusCodeOpenEnum              Code                           1;	///< Required element.
/// Element Reason of type xs:string.
    char*                                Reason                         0;	///< Optional element.
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":SignChallengeType is a complexType.
struct wst__SignChallengeType
{
/// Element reference "http://schemas.xmlsoap.org/ws/2005/02/trust":Challenge.
    char*                                Challenge                      1;	///< Required element.
/// TODO: <any namespace="##any" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##any">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestKETType is a complexType.
struct wst__RequestKETType
{
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":KeyExchangeTokenType is a complexType.
struct wst__KeyExchangeTokenType
{
/// TODO: <any namespace="##any" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":AuthenticatorType is a complexType.
struct wst__AuthenticatorType
{
/// Element reference "http://schemas.xmlsoap.org/ws/2005/02/trust":CombinedHash.
    char*                                CombinedHash                   0;	///< Optional element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":OnBehalfOfType is a complexType.
struct wst__OnBehalfOfType
{
/// TODO: <any namespace="##any">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":EncryptionType is a complexType.
struct wst__EncryptionType
{
/// TODO: <any namespace="##any">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":ProofEncryptionType is a complexType.
struct wst__ProofEncryptionType
{
/// TODO: <any namespace="##any">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":UseKeyType is a complexType.
struct wst__UseKeyType
{
/// TODO: <any namespace="##any" minOccurs="0">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// Attribute Sig of type xs:anyURI.
   @char*                                Sig                            0;	///< Optional attribute.
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":DelegateToType is a complexType.
struct wst__DelegateToType
{
/// TODO: <any namespace="##any">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":ParticipantsType is a complexType.
struct wst__ParticipantsType
{
/// Element Primary of type "http://schemas.xmlsoap.org/ws/2005/02/trust":ParticipantType.
    struct wst__ParticipantType*         Primary                        0;	///< Optional element.
/// Size of array of struct wst__ParticipantType* is 0..unbounded
   $int                                  __sizeParticipant              0;
/// Array struct wst__ParticipantType* of length 0..unbounded
    struct wst__ParticipantType*         Participant                    0;
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":ParticipantType is a complexType.
struct wst__ParticipantType
{
/// TODO: <any namespace="##any">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":BinarySecretType is a complexType with simpleContent.
struct wst__BinarySecretType
{
/// __item wraps 'xs:base64Binary' simpleContent.
    char*                                __item                        ;
/// Attribute Type of type "http://schemas.xmlsoap.org/ws/2005/02/trust":BinarySecretTypeOpenEnum.
   @wst__BinarySecretTypeOpenEnum        Type                           0;	///< Optional attribute.
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://schemas.xmlsoap.org/ws/2005/02/trust":BinaryExchangeType is a complexType with simpleContent.
struct wst__BinaryExchangeType
{
/// __item wraps 'xs:string' simpleContent.
    char*                                __item                        ;
/// Attribute ValueType of type xs:anyURI.
   @char*                                ValueType                      1;	///< Required attribute.
/// Attribute EncodingType of type xs:anyURI.
   @char*                                EncodingType                   1;	///< Required attribute.
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://schemas.xmlsoap.org/ws/2005/02/trust                              *
 *                                                                            *
\******************************************************************************/


/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityToken of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityTokenType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":TokenType of type xs:anyURI.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestType of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestTypeOpenEnum.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityTokenResponse of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityTokenResponseType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedSecurityToken of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedSecurityTokenType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":BinarySecret of type "http://schemas.xmlsoap.org/ws/2005/02/trust":BinarySecretType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Claims of type "http://schemas.xmlsoap.org/ws/2005/02/trust":ClaimsType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Entropy of type "http://schemas.xmlsoap.org/ws/2005/02/trust":EntropyType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Lifetime of type "http://schemas.xmlsoap.org/ws/2005/02/trust":LifetimeType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":ComputedKey of type "http://schemas.xmlsoap.org/ws/2005/02/trust":ComputedKeyOpenEnum.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedAttachedReference of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedReferenceType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedUnattachedReference of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedReferenceType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedProofToken of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedProofTokenType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityTokenResponseCollection of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityTokenResponseCollectionType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":IssuedTokens of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestSecurityTokenResponseCollectionType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RenewTarget of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RenewTargetType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":AllowPostdating of type "http://schemas.xmlsoap.org/ws/2005/02/trust":AllowPostdatingType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Renewing of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RenewingType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":CancelTarget of type "http://schemas.xmlsoap.org/ws/2005/02/trust":CancelTargetType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedTokenCancelled of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestedTokenCancelledType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Status of type "http://schemas.xmlsoap.org/ws/2005/02/trust":StatusType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":SignChallenge of type "http://schemas.xmlsoap.org/ws/2005/02/trust":SignChallengeType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":SignChallengeResponse of type "http://schemas.xmlsoap.org/ws/2005/02/trust":SignChallengeType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Challenge of type xs:string.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":BinaryExchange of type "http://schemas.xmlsoap.org/ws/2005/02/trust":BinaryExchangeType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestKET of type "http://schemas.xmlsoap.org/ws/2005/02/trust":RequestKETType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":KeyExchangeToken of type "http://schemas.xmlsoap.org/ws/2005/02/trust":KeyExchangeTokenType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Authenticator of type "http://schemas.xmlsoap.org/ws/2005/02/trust":AuthenticatorType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":CombinedHash of type xs:base64Binary.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":OnBehalfOf of type "http://schemas.xmlsoap.org/ws/2005/02/trust":OnBehalfOfType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Issuer of type "http://schemas.xmlsoap.org/ws/2004/08/addressing":EndpointReferenceType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":AuthenticationType of type xs:anyURI.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":KeyType of type "http://schemas.xmlsoap.org/ws/2005/02/trust":KeyTypeOpenEnum.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":KeySize of type xs:unsignedInt.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":SignatureAlgorithm of type xs:anyURI.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":EncryptionAlgorithm of type xs:anyURI.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":CanonicalizationAlgorithm of type xs:anyURI.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":ComputedKeyAlgorithm of type xs:anyURI.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Encryption of type "http://schemas.xmlsoap.org/ws/2005/02/trust":EncryptionType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":ProofEncryption of type "http://schemas.xmlsoap.org/ws/2005/02/trust":ProofEncryptionType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":UseKey of type "http://schemas.xmlsoap.org/ws/2005/02/trust":UseKeyType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":SignWith of type xs:anyURI.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":EncryptWith of type xs:anyURI.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":DelegateTo of type "http://schemas.xmlsoap.org/ws/2005/02/trust":DelegateToType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Forwardable of type xs:boolean.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Delegatable of type xs:boolean.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// Top-level root element "http://schemas.xmlsoap.org/ws/2005/02/trust":Participants of type "http://schemas.xmlsoap.org/ws/2005/02/trust":ParticipantsType.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://schemas.xmlsoap.org/ws/2005/02/trust                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

XML content can be retrieved from:
  - a file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->is = ...
  - a buffer, using the soap->frecv() callback

XML content can be stored to:
  - a file descriptor, using soap->sendfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->os = ...
  - a buffer, using the soap->fsend() callback


@section wst Top-level root elements of schema "http://schemas.xmlsoap.org/ws/2005/02/trust"

  - <wst:RequestSecurityToken> (use wsdl2h option -g to auto-generate)

  - <wst:TokenType> (use wsdl2h option -g to auto-generate)

  - <wst:RequestType> (use wsdl2h option -g to auto-generate)

  - <wst:RequestSecurityTokenResponse> (use wsdl2h option -g to auto-generate)

  - <wst:RequestedSecurityToken> (use wsdl2h option -g to auto-generate)

  - <wst:BinarySecret> (use wsdl2h option -g to auto-generate)

  - <wst:Claims> (use wsdl2h option -g to auto-generate)

  - <wst:Entropy> (use wsdl2h option -g to auto-generate)

  - <wst:Lifetime> (use wsdl2h option -g to auto-generate)

  - <wst:ComputedKey> (use wsdl2h option -g to auto-generate)

  - <wst:RequestedAttachedReference> (use wsdl2h option -g to auto-generate)

  - <wst:RequestedUnattachedReference> (use wsdl2h option -g to auto-generate)

  - <wst:RequestedProofToken> (use wsdl2h option -g to auto-generate)

  - <wst:RequestSecurityTokenResponseCollection> (use wsdl2h option -g to auto-generate)

  - <wst:IssuedTokens> (use wsdl2h option -g to auto-generate)

  - <wst:RenewTarget> (use wsdl2h option -g to auto-generate)

  - <wst:AllowPostdating> (use wsdl2h option -g to auto-generate)

  - <wst:Renewing> (use wsdl2h option -g to auto-generate)

  - <wst:CancelTarget> (use wsdl2h option -g to auto-generate)

  - <wst:RequestedTokenCancelled> (use wsdl2h option -g to auto-generate)

  - <wst:Status> (use wsdl2h option -g to auto-generate)

  - <wst:SignChallenge> (use wsdl2h option -g to auto-generate)

  - <wst:SignChallengeResponse> (use wsdl2h option -g to auto-generate)

  - <wst:Challenge> (use wsdl2h option -g to auto-generate)

  - <wst:BinaryExchange> (use wsdl2h option -g to auto-generate)

  - <wst:RequestKET> (use wsdl2h option -g to auto-generate)

  - <wst:KeyExchangeToken> (use wsdl2h option -g to auto-generate)

  - <wst:Authenticator> (use wsdl2h option -g to auto-generate)

  - <wst:CombinedHash> (use wsdl2h option -g to auto-generate)

  - <wst:OnBehalfOf> (use wsdl2h option -g to auto-generate)

  - <wst:Issuer> (use wsdl2h option -g to auto-generate)

  - <wst:AuthenticationType> (use wsdl2h option -g to auto-generate)

  - <wst:KeyType> (use wsdl2h option -g to auto-generate)

  - <wst:KeySize> (use wsdl2h option -g to auto-generate)

  - <wst:SignatureAlgorithm> (use wsdl2h option -g to auto-generate)

  - <wst:EncryptionAlgorithm> (use wsdl2h option -g to auto-generate)

  - <wst:CanonicalizationAlgorithm> (use wsdl2h option -g to auto-generate)

  - <wst:ComputedKeyAlgorithm> (use wsdl2h option -g to auto-generate)

  - <wst:Encryption> (use wsdl2h option -g to auto-generate)

  - <wst:ProofEncryption> (use wsdl2h option -g to auto-generate)

  - <wst:UseKey> (use wsdl2h option -g to auto-generate)

  - <wst:SignWith> (use wsdl2h option -g to auto-generate)

  - <wst:EncryptWith> (use wsdl2h option -g to auto-generate)

  - <wst:DelegateTo> (use wsdl2h option -g to auto-generate)

  - <wst:Forwardable> (use wsdl2h option -g to auto-generate)

  - <wst:Delegatable> (use wsdl2h option -g to auto-generate)

  - <wst:Participants> (use wsdl2h option -g to auto-generate)

*/

#import "wstx.h"

/* End of wst.h */
