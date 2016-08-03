/*
 gsoapios.m
 
 iOS plugin (iPhone and iPad)
 
 gSOAP XML Web services tools
 Copyright (C) 2000-2012, Robert van Engelen, Genivia Inc., All Rights Reserved.
 This part of the software is released under one of the following licenses:
 GPL, the gSOAP public license, or Genivia's license for commercial use.
 -------------------------------------------------------------------------------
 gSOAP public license.
 
 The contents of this file are subject to the gSOAP Public License Version 1.3
 (the "License"); you may not use this file except in compliance with the
 License. You may obtain a copy of the License at
 http://www.cs.fsu.edu/~engelen/soaplicense.html
 Software distributed under the License is distributed on an "AS IS" basis,
 WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 for the specific language governing rights and limitations under the License.
 
 The Initial Developer of the Original Code is Robert A. van Engelen.
 Copyright (C) 2000-2008, Robert van Engelen, Genivia Inc., All Rights Reserved.
 -------------------------------------------------------------------------------
 GPL license.
 
 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU General Public License as published by the Free Software
 Foundation; either version 2 of the License, or (at your option) any later
 version.
 
 This program is distributed in the hope that it will be useful, but WITHOUT ANY
 WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 PARTICULAR PURPOSE. See the GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License along with
 this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 Place, Suite 330, Boston, MA 02111-1307 USA
 
 Author contact information:
 engelen@genivia.com / engelen@acm.org
 
 This program is released under the GPL with the additional exemption that
 compiling, linking, and/or using OpenSSL is allowed.
 -------------------------------------------------------------------------------
 A commercial use license is available from Genivia, Inc., contact@genivia.com
 -------------------------------------------------------------------------------
 */

/**
 @mainpage
 
 - @ref ios_0 documents the iOS plugin to facilitate the development of
 client applications on iOS plarforms (iPhone and iPad) using the gSOAP toolkit.
  
 To use the plugin for development of client applications on iOS platforms,
 registration of this plugin is required:
 @code
 #import "gsoapios.h"
 
 struct soap *soap = soap_new();
 soap_register_plugin(soap, soap_ios);
 @endcode
 */

/**
 
 @page ios_0 The iOS plugin for developing client applications on iOS (iPhone and iPad) platforms
 
 @section ios_intro Introduction
 
 Consuming Web services on iOS (iPhone and iPad) platforms 
 is inreseasingly in demand today. 
 However, Xcode does not have any built-in tools that make consuming Web 
 services easy. It typically requires knowledge of XML processing
 techniques to send soap requests to the Web services and then parse the
 returning XML results. The gSOAP toolkit that provides an automated SOAP and XML
 data binding for C and C++ can be used directly to develop client applications
 to consuming Web services on iOS platforms such as iPhone and iPad. However, 
 it's default network connection does not leverage the advantages of network 
 connection offered by iOS SDK, instead it uses lower level TCP sockets for
 network connection. This soap plugin facilitates developers to develop Web
 services client applications on iOS platforms without maniulating the XML processing.
 Moreover, it takes andvantages of network connection offered by iOS SDK and 
 supports 3G/4G, wifi etc.
 
 
 Two Xcode examples, @ref ios_example_calc and @ref ios_example_geoip can be 
 found in samples/ios.


 @section ios_1 Getting Started
 
 
 To start building Web services client applications for iPhone and/or iPad with 
 gSOAP , you need: 
 
 \li The gSOAP package from http://www.genivia.com/Products/downloads.html (select
 gSOAP toolkit standard edition from the list of software packages), and 
 
 \li Xcode IDE with the iOS SDK installed.
 
 
 Development of Web services applications on iOS is no different from the
 development SOAP Web services applications on Linux, Unix and Mac OS except 
 with a soap plugin registration. Specifically, there are four steps to 
 develop SOAP Web services client applications on iOS:

 \li Generating application stubs using the gSOAP toolkit and add the source files
 
 \li Creating an iOS application project to the Xcode project
 
 \li Registering the iOS plugin
 
 \li Calling service methods
 
 @subsection iso_register_pulg Registering iOS Plugin (Required)
To register the iOS plugin, simply call <i>soap_register_plugin</i> method:

 @code
 #import "gsoapios.h"
 
 struct soap *soap = soap_new();
 soap_register(soap, soap_ios); // Register the iOS plugin
 ...
 soap_end(soap);  // Clean up temporaries
 soap_destroy(soap); // Free soap context
 @endcode
 
 The plugin is destroyed automatically by the soap context when the soap_end
 method is executed.
 
 @subsection ios_cache_policy Specifying Cache policy (Optional)
 
 The interaction beween the client and the Web servcie server can 
 be controled by specifying the cache policy. To specify the cache policy, call
 the method <i>soap_ios_setcachepolicy(struct soap *soap, unsigned int policy)
 </i>. The method cannot be called before the pluging is registered.
 
 @code
 #import "gsoapios.h"
 
 struct soap *soap = soap_new();
 soap_register(soap, soap_ios); // Register the iOS plugin
 
 // Specify the cache policy for the request 
 // Caveat: this method cannot be called before the plugin is registered
 // If this method is not called, the cache policy is set to NSURLRequestUseProtocolCachePolicy (0) by default.
 soap_ios_setchacepolicy(soap, NSURLRequestReturnCacheDataElseLoad); // (2)
 // Or use the integer directly instead of enum
 // soap_ios_setchacepolicy(soap, 2); // (NSURLRequestReturnCacheDataElseLoad)

 ...
 soap_end(soap);  // clean up allocated temporaries 
 soap_destroy(soap); // Free soap context
 
 @endcode
 
 The available cache policies that can be specified are:
 @code
 enum {
 	NSURLRequestUseProtocolCachePolicy = 0,
	NSURLRequestReloadIgnoringLocalCacheData = 1,
 	NSURLRequestReloadIgnoringCacheData = NSURLRequestReloadIgnoringLocalCacheData,
 	NSURLRequestReturnCacheDataElseLoad = 2,
 	NSURLRequestReturnCacheDataDontLoad = 3,
 	NSURLRequestReloadIgnoringLocalAndRemoteCacheData =4,
 	NSURLRequestReloadRevalidatingCacheData = 5
 }
 @endcode
 
 If this method is not called, the cache policy is set to
 NSURLRequestUseProtocolCachePolicy (0) by default.
 
 
 @subsection ios_timeout_interval Specifying Timeout Interval (Optional)

 The timeout interval for network connection can be specified using the method 
 <i>soap_ios_settimeoutinterval(struct soap *soap, double seconds)</i>. 
 The method cannot be called before the pluging is registered.
 If this method is not called, the timeout interval is 60 seconds by default.
 
 @code
 #import "gsoapios.h"
 
 struct soap *soap = soap_new();
 soap_register(soap, soap_ios); // Register the iOS plugin
 
 // Specify the timout interval in terms of seconds 
 // If this method is not called, the timeout interval is set to 60 seconds by default
 // Caveat: this method cannot be called before the plugin is registered
 soap_ios_settimeoutinterval(soap, 30.0);
 
 ...
 soap_end(soap);
 soap_destroy(soap);
 @endcode
 
 
 @subsection ios_http_auth Handling HTTP Authentication
 
 A server may request user authentication and deny access (HTTP 401 error) 
 when the client tries to connect without HTTP authentication 
 (or with the wrong authentication information).
 
 HTTP authentication (basic) is enabled at the client-side by setting the 
 soap.userid and soap.passwd strings to a username and password, respectively.
 
 Be aware of that both of userid and password must be set in pair, that is,
 if one of them is set, the other must be set too.
 
 If the server requires basic HTTP authentication, for example, the userid and
 password can be specified:
 
 @code
 struct soap *soap = soap_new();
 soap->userid = "someone";
 soap->passwd = "somepass";
 ...
 soap_end(soap); // Clean up temporaries
 soap_destroy(soap);
 @endcode
 
 @section ios_example Examples
 
 This section intoduces two examples to demonstrate the development of client applications 
 consuming SOAP Web services on iOS platforms (iPhone and iPad) using gSOAP
 tools and the iOS plugin. Because gSOAP supports development for both pure C
 and C++, the first example, @ref ios_example_calc, is developed using pure C.
 The second one, @ref ios_example_geoip, is developmed using C++.   

 We assume you already have had the expereince in development of applications
 for iPhone and iPad using Xcode with iOS SDK installed.
 
 @subsection ios_example_calc A Simple Calculator Example (Pure C)
 
 This example shows you how to develop a client application in C using gSOAP 
 and the ios plugin, which consumes a
 simple caculator service on iOS using gSOAP. The simple calculator service was
 developed and deployed as a demo using the gSOAP tools (refer to
 http://www.genivia.com/Products/gsoap/demos/index.html for details). The gSOAP 
 Calculator Service provides several operations such as <i>add</i>, <i>sub</i>, 
 <i>mul</i>, <i>div</i> etc. In this example, we use operation <i>add</i> as a
 demo. Other operations are alled in a similar way. The <i>wsdl</i> file for 
 this service can be obtained at the following link:
  http://www.genivia.com/calc.wsdl 
 
 The Xcode project for this example can be found in samples/ios/calc.

 @subsubsection ios_calc_step_1 Step 1: Generating stubs for C API
 
 To generate codes for the calculator Web service, we first run the <i>wsdl2h</i> 
 tool from the command line on the URL of the WSDL and use option <i>-o</i> to specify 
 the output file (Alternatively, you can download the <i>calc.wsdl</i> and use 
 the local file instead of the URL):
 
 @code
 > wsdl2h -c -o calc.h http://www.genivia.com/calc.wsdl
 @endcode
 
 This generates the <i>calc.h</i> service definition header file with service
 operation definitions and types for the operation's data. The option <i>-c</i> 
 flags the <i>wsdl2h</i> tool to generate the service definition file in pure C.
 By default, gSOAP assumes you will use C++ with STL.

 We have not yet generated the stubs for the CAPI. To do so, run the
 <i>soapcpp2</i> compiler: 

 @code
 > soapcpp2 -i -C calc.h
 @endcode
 
 Option <i>-C</i> indicates client-side only files (<i>soapcpp2</i> generates
 both client and server stubs and skeletons by default). This generates a number
 of soource files for client application development.
 
 
 @subsubsection ios_calc_step_2 Step 2: Creating Xcode project for iPhone
 
 Launch the Xcode, create a View-based Application project and name it
 <i>Calc</i>. Open the <i>CalcViewController.xib</i> file in the Interface Builder.
 Double-click on the View item and populate it with the views
 listed below and shown in Figure 1:
 
 \li Two Labels ("+" and "A Simple Calculator")
 \li Two Text Fields (operand1 and operand2)
 \li One Round Rect Button ("+" button)
 
 @image html calc-view.png "Figure 1. View of the Calculator Web Service Client"
 
 In Xcode, edit the file <i>CalcViewController.h</i> to make it look like the
 following:
 
 @code
 // File: CalcViewController.h
 
 #import <UIKit/UIKit.h>
 
 @interface CalcViewController : UIViewController {
 UITextField *op1; // operand1
 UITextField *op2; // operand2
 
 }
 
 @property (nonatomic, retain) IBOutlet UITextField *op1;
 @property (nonatomic, retain) IBOutlet UITextField *op2;
 
 - (IBAction) buttonPressed;
 @end
 @endcode
 
 Link the op1 and op2 to the two Text Fields and  delegate the button action to 
 method buttonPressed.
 
 
 @subsubsection ios_calc_step_3 Step 3: Adding generated source stubs to the Xcode project
 
 Add the source files <i>soapC.c</i>, <i>soapClient.c</i>, <i>soapH.h</i>, and
 <i>soapStub.h</i> generated in @ref ios_calc_step_1 to the project. Also add files
 <i>stdsoap2.h</i> and <i>stdsoap2.c</i> to the project from gsoap package as well as  
 the iOS pluhin files <i>gsoapios.h</i> and <i>sgsoapios.m</i>.
 
 @subsubsection ios_calc_step_4 Step 4: Implementing the Logic by calling the soap service
 
 Firstly, edit file <i>main.m</i> to import the file <i>./Classes/calc.nsmap</i>.
 Link errors may arise without importing this namespace mapping.
 
 @code
 // File: main.m
 
 #import <UIKit/UIKit.h>
 #import "./Classes/calc.nsmap"
 
 int main(int argc, char *argv[]) {
 
   NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
   int retVal = UIApplicationMain(argc, argv, nil, nil);
   [pool release];
 
   return retVal;
 }
 @endcode

 Then, implememt the source file <i>CalcViewController.m</i> as the following:
 
 @code
 #import "CalcViewController.h"
 #import "soapStub.h"
 #import "gsoapios.h"
 
 @implementation CalcViewController
 
 @synthesize op1; // Set or get opreand1
 @synthesize op2; // Set or get opreand1
 
 - (IBAction) buttonPressed {
 
 double x = [op1.text doubleValue];
 double y = [op2.text doubleValue];
 
 struct soap *soap = soap_new();
 
 if (soap_register_plugin(soap, soap_ios) == SOAP_OK) {
   
 // Specify the cache policy (optional) to NSURLRequestReturnCacheDataElseLoad
   // instead of NSURLRequestUseProtocolCachePolicy by deault
   soap_ios_setcachepolicy(soap, NSURLRequestReturnCacheDataElseLoad);
 
   // Specify the timeout interval (optional) to 45 seconds instead of
   // the default 60 seconds
   soap_ios_settimeoutinterval(soap, 45.0);
 
   double result;
 
   // Call Web service operation add
   int status = soap_call_ns2__add(soap, NULL, NULL, x, y, &result);
 
   soap_free_temp(soap); // Cleanup temporary resources
 
   // Check soap response status
   if (status == SOAP_OK) {
     
     NSString *resultString;
     NSString *tittleString;
 
     if (status == SOAP_OK) {
       resultString = [NSString stringWithFormat:@"%f",result];
       tittleString = [NSString stringWithFormat:@"%f / %f =",x, y];
     }else {
       resultString = [NSString stringWithFormat:@"%@",@"Soap fault!"];
       tittleString = [NSString stringWithFormat:@"%@",@"Warning"];
     }
 
 
     // Show the result in an alert
     UIAlertView *alert = [[UIAlertView alloc] initWithTitle:tittleString
                                               message:resultString	
                                               delegate:self
                                               cancelButtonTitle:@"OK"
																							 otherButtonTitles:nil];
 
     [alert show]; // Show the alert
     [alert release]; // Release the alert
 
     } else {
       // Caveat: Better to extract the error message and show it using an alert
       soap_print_fault(soap,stderr); // Print soap error in console
     }
   }
 
   soap_end(soap); // clean up allocated temporaries 
   soap_free(soap); // Free soap context
  }
 
 ... 
 @endcode
 
 A screen snapshot of the client is shown in Figure 2.
 
 @image html calc-result.png "Figure 2: Snapshot of the CalcViewService result"
 
 
 @subsection ios_example_geoip A GeoIPService (C++) 
 
 GeoIPService is a live SOAP Web service that enables you to look up contries by
 IP address or by Context.  
 
 This example shows you how to develop a client application in C++ using gSOAP 
 and the ios plugin, which consumes the GeoIPSerive on iOS using gSOAP.
 The WSDL file for this servive can be downloaded at the following link:
 http://www.webservicex.net/geoipservice.asmx?WSDL
 
 Devoplopment of he client appliation for this GeoIPService on iOS is similar to
 development for the cleant appliaction for @ref ios_example_calc. The major
 dfferences are highlighted in following:
 
 \li Rename the <i>.m</i> files to <i>.mm</i> files.
   The iOS plugin implementation file <i>gsoapios.m</i> must be renamed to 
    <i>gsoapios.mm</i>. The <i>main.m</i> must be renamed to <i>main.mm</i>. 
    Other files such as your ViewController may also be renamed with <i>.mm</i>.
 
  \li Generate C++ proxy using proper options with <i>wsdl2h</i> and 
     <i>soapcpp2</i>
 
  \li Use the <i>stdsoap2.cpp</i> instead of <i>stdsoap2.c</i> from the gSOAP
      package in your iOS project.
 
  The Xcode project for this example can be found in samples/ios/GeoIPService.
 
 @subsubsection ios_geoip_step_1 Step 1: Generating stubs for C++ Proxy
 
 To generate codes for the GeoIPSerbice Web service, we first run the 
 <i>wsdl2h</i> tool from the command line on the URL of the WSDL and use option
 <i>-o</i> to specify the output file (Alternatively, you can download the
 <i>GeoIPService.wsdl</i> file and use the local file instead of the URL):
 
 @code
 >wsdl2h -o GeoIPService.h http://www.webservicex.net/geoipservice.asmx?WSDL
 @endcode
 
 This generates the <i>GeoIPService.h</i> service definition header file with 
 service operation definitions and types for the operation's data.
 By default, gSOAP assumes you will use C++ with STL.
 
 To generate the stubs for the C++ proxy classes, run the <i>soapcpp2</i> 
 compiler: 
 
 @code
  >soapcpp2 -i -C -I$GSOAP_HOME/import GeoIPService.h
 @endcode
 
 Option <i>-i</i> tells the compiler to generate C++ proxy and 
 option <i>-C</i> indicates client-side only files (<i>soapcpp2</i> generates
 both client and server stubs and skeletons by default). Option -I is needed to
 import the <i>stlvector.h</i> file from the import directory in the gSOAP
 package to support serialization of STL vectors.
 
 @subsubsection ios_geoip_step_2 Step 2: Creating Xcode project for iPhone

 Create a View-based Application project and name it
 <i>GeoIPService</i> and rename the <i>.m</i> source files to <i>.mm</i>.
 Open the <i>GeoIPserviceViewController.xib</i> file in the Interface Builder.
 Double-click on the View item and populate it with the views
 listed below and shown in Figure 3:
 
 \li A Label ("IP Address")
 \li A Text Field
 \li One Round Rect Button ("Find Country" button)
 
 @image html geoip-view.png "Figure 3. View of the GeoIPService Client"
 
 In Xcode, edit the file <i>GeoIPServiceViewController.h</i> to make it look like the
 following:
 
 @code
 // File: GeoIPServiceViewController.h
 
 #import <UIKit/UIKit.h>
  @interface GeoIPServiceViewController : UIViewController {
 
    UITextField *ipAddress;
 
 }
  
 @property (nonatomic, retain) IBOutlet UITextField *ipAddress;
 
 - (IBAction) buttonFindCountry:(id)sender; 
 
 @end
 @endcode
 
 Set the ipAddress outlet and the buttonFindCountry:(id)sender method to 
 delegate action of the button.
 
 
 @subsubsection ios_geoip_step_3 Step 3: Adding generated source stubs to the Xcode project
 
 Add the source files <i>soapC.cpp</i>, <i>GeoIPServiceSoap12Proxy.cpp</i>, 
 <i>GeoIPServiceSoap12Proxy.h</i>, <i>soapH.h</i>, 
 and<i>soapStub.h</i> generated in @ref ios_geoip_step_1 to the project. Also 
 add files<i>stdsoap2.h</i> and <i>stdsoap2.cpp</i> to the project from gsoap
 package and the iOS pluhin files <i>gsoapios.h</i> and <i>sgsoapios.m</i>. 
 Do not forget to rename the <i>sgsoapios.m</i> to <i>sgsoapios.mm</i>
 
 The <i>GeoIPServiceSoap12Proxy.h</i> and <i>GeoIPServiceSoap12Proxy.cpp</i> 
 are C++ proxy header and implementation files for SOAP 1.2 (You may use 
 <i>GeoIPServiceSoapProxy.cpp</i> and <i>GeoIPServiceSoapProxy.h</i>
 for SOAP1.1). 
 
 @subsubsection ios_geoip_step_4 Step 4: Implementing the Logic by calling the soap service
 
 Firstly, edit file <i>main.mm</i> to import the file
 <i>./Classes/GeoIPService.nsmap</i>. Link errors would arise without importing
 this namespace mapping.
 
 @code
 // File: main.mm
 
 #import <UIKit/UIKit.h>
 #import "./Classes/GeoIPServiceSoap12.nsmap"
 
 int main(int argc, char *argv[]) {
 
   NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
   int retVal = UIApplicationMain(argc, argv, nil, nil);
   [pool release];
   return retVal;
 }
 @endcode
 
 Then, implememt the source file <i>GeoIPServiceViewController.m</i> as
 the following:
 
 @code
 #import "GeoIPServiceViewController.h"
 #include "soapGeoIPServiceSoap12Proxy.h"
 #import "gsoapios.h"
 using namespace std;
 
 typedef struct _ns1__GetGeoIP RequestStruct;
 typedef struct _ns1__GetGeoIPResponse ResponseStruct;
 
 
 @implementation GeoIPServiceViewController
 
 @synthesize ipAddress;
 
 - (IBAction)buttonFindCountry:(id)sender {
 
   RequestStruct ip;
   ResponseStruct response;
   GeoIPServiceSoap12Proxy service;
 
   std::string ipAdd = std::string((char *)[ipAddress.text UTF8String]);
   ip.IPAddress = &ipAdd;
 
 
   // ----- register plugin for callbacks ------
   soap_register_plugin(&service, soap_ios);
 
   // Optional: timeout internal, the default is 60.0 seconds
   soap_ios_settimeoutinterval(&service, 30.0);
 
   // Optional: the default policy is NSURLRequestUseProtocolCachePolicy (0)
   soap_ios_setcachepolicy(&service, NSURLRequestReturnCacheDataElseLoad); // (2)
 
   int status = service.GetGeoIP(&ip, &response);
 
   string* result;
   string err_msg = "Invalid IP address";
 
   if ( status == SOAP_OK) {		
     if(response.GetGeoIPResult && response.GetGeoIPResult->CountryName) {
       result = response.GetGeoIPResult->CountryName;
     } else {
       result = &err_msg;
     }
   } else {
     service.soap_stream_fault(std::cerr); 
   }
 
 
   NSString *soapResult;
   NSString *tittleMsg;
 
   if (status == SOAP_OK) {
     soapResult = [NSString stringWithUTF8String:result->c_str()];
     tittleMsg = [NSString stringWithFormat: @"%@", @"Country Found"];
   } else {
     soapResult = [NSString stringWithFormat: @"%@", @"Soap Error!"];
     tittleMsg = [NSString stringWithFormat: @"%@", @"Warning"];
   }
 
   UIAlertView *alert = [[UIAlertView alloc] initWithTitle:tittleMsg	  
                                 message:soapResult
																delegate:self
                       cancelButtonTitle:@"OK"
                       otherButtonTitles:nil];
 
   [alert show];
   [alert release];
 
   service.destroy(); // Free soap context
 }
 
 ... 
 @endcode
 
 A screen snapshot of the client is shown in Figure 4.
 
 @image html geoip-result.png "Figure : Snapshot of the GeoIPServiceViewService result"
  
 */


#import "gsoapios.h"
#import <UIKit/UIKit.h>

// -----------------------------------------------------------------------------
// Start of objective-c Class GSoapiOSURLData implementation
// -----------------------------------------------------------------------------

/**
 Class GSoapiOSURLData
 @brief The class stores the states for connection establishment, buffering soap
 request and response 
 */
@implementation GSoapiOSURLData

@synthesize endpoint; ///< Set or get endpoint
@synthesize host; ///< Set or get host name
@synthesize soap_action; ///< Set or get soap action
@synthesize http_method; ///< Set or get HTTP method
@synthesize content_type; ///< Set or get content type
@synthesize http_req_msg; ///< Set or get HTTP request message
@synthesize soap_req_msg; ///< Set or get SOAP request
@synthesize soap_res_msg; ///< Set or get SOAP response

@synthesize port; ///< Set or get port
@synthesize received_length; ///< Set or get received message length 
@synthesize request_sent; ///< Set or get the flag for the first time sending
@synthesize req_content_length; ///< Set or get request message length

@synthesize timeout_interval; ///< Set or get timeout interval
@synthesize cache_policy; ///< Set or get cache policy

@synthesize user_name; ///< Set or get user ID for authentication
@synthesize password; ///< Set or get password for authentication

/**
 @fn init
 @brief Constructor
 */
- (id) init {
	[super init];
	
	http_req_msg = [NSMutableData alloc];
	
	timeout_interval = 60.0; // 60 seconds by default
	cache_policy = NSURLRequestUseProtocolCachePolicy; // The default cache policy
	
	return self;
}

/**
 @fn dealloc
 @brief Destructor
 */
- (void) dealloc {
	
	[endpoint release];
	[host release];
	[soap_action release];
	[http_method release];
	[content_type release];
	[http_req_msg release];
	[soap_req_msg release];
	
	[user_name release];
	[password release];
	
	[super dealloc];
}

@end
// -----------------------------------------------------------------------------
// End of objective-c Class GSoapiOSURLData implementation
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
// Start of C plugin implementation
// -----------------------------------------------------------------------------


/** plugin identification for plugin registry */
const char soap_ios_id[13] = SOAP_IOS_ID; // Unique plugin ID

static int soap_ios_copy(struct soap *soap, struct soap_plugin *dst, 
												 struct soap_plugin *src);
static void soap_ios_delete(struct soap *soap, struct soap_plugin *p);
static int soap_ios_init(struct soap *soap, struct soap_ios_data *data);
static SOAP_SOCKET soap_ios_open( struct soap *soap, const char *endpoint,
																 const char *host, int port);
static int soap_ios_close( struct soap *soap);
static int soap_ios_send( struct soap *soap, const char *buf, size_t len);
static size_t soap_ios_recv( struct soap *soap, char *buf, size_t len);

//void soap_ios_setcachepolicy(struct soap *soap, unsigned int policy);
//void soap_ios_settimeoutinterval(struct soap *soap, double seconds);

/**
 @fn int soap_ios
 @brief Save the old callbacks and set new callbacks to handle soap client
 applications on iOS platforms (iPhone and iPad)
 @param soap  The soap context
 @param[in] p The soap plugin data
 @param[in] arg The arguments for soap plugin
 @return SOAP_OK if registration is successfull; SOAP_EOM otherwise
 */
int soap_ios (struct soap *soap, struct soap_plugin *p, void *arg) {
	
	p->id = soap_ios_id; // set a unique plugin id 
	p->data  = (void*)malloc(sizeof(struct soap_ios_data)); // Allocate memory
	
	p->fcopy = soap_ios_copy; // set fcopy callback for soap_copy(truct soap*)
	p->fdelete = soap_ios_delete; // set fdeete callback
	
	if (p->data) {
		if (soap_ios_init(soap, (struct soap_ios_data*)p->data) != SOAP_OK) {
			free(p->data); // free resource upon failure to initialize plugin
			return SOAP_EOM;
		}
	} 	
		
	return SOAP_OK;	
}

/**
 @fn int soap_ios_copy(struct soap *soap, struct soap_plugin *dst, 
 struct soap_plugin *src)
 @brief Duplicates the plugin context for the soap context
 @param soap The soap context
 @param[out] dst The destination plugin data to store to
 @param[in] src The sources plugin data to be copied from
 @param[in] arg The arguments for plugin (optional)
 @return SOAP_OK if registration is successfull; SOAP_ERR otherwise
 */
static int soap_ios_copy(struct soap *soap, struct soap_plugin *dst, 
												 struct soap_plugin *src) { 	
	*dst = *src;
	int status = SOAP_ERR;
	if (dst->data = (void*)malloc(sizeof(struct soap_ios_data)))
		status = soap_ios_init(soap, (struct soap_ios_data*)dst->data);

  return status;
}

/**
 @fn void soap_ios_delete(struct soap *soap, struct soap_plugin *p)
 @brief Destroys the plugin context
 @param soap context
 @param[in] p plugin data
 */
static void soap_ios_delete(struct soap *soap, struct soap_plugin *p) {
	if (p != NULL) {
		struct soap_ios_data *data = (struct soap_ios_data*)p->data;
		if (data && data->url_data) [data->url_data release]; // Free url_data
		free(p->data); // Free the pointer to url_data 
	}
}

/**
 @fn int soap_ios_init(struct soap *soap, struct soap_ios_data *data)
 @brief Initializes the plugin data 
 @param soap The soap context
 @param[out] data The plugin data to be initialized
 @return SOAP_OK if initialization is sucessful; SOAP_ERR otherwise
 */
static int soap_ios_init(struct soap *soap, struct soap_ios_data *data) {	
	data->url_data = [[GSoapiOSURLData alloc] init];
	
	if (data->url_data == nil) return SOAP_ERR; // failure to init
	
	// save and set callbacks
	data->fopen = soap->fopen;   // save old fopen callback
	data->fclose = soap->fclose; // save old fclose callback
	data->fsend = soap->fsend;   // save old fsend callback
	data->frecv = soap->frecv;   // save old frecv callback
	
	soap->fopen = soap_ios_open;   // replace open callback
	soap->fclose = soap_ios_close; // replace close callback
	soap->fsend = soap_ios_send;   // replace send callback 
	soap->frecv = soap_ios_recv;   // replace recv callback
		
	return SOAP_OK;
}

/**
 @fn SOAP_SOCKET soap_ios_open( struct soap *soap, const char *endpoint,
 const char *host, int port)
 @brief Extracts states from soap context and saves states for soap connection  
 @param soap The soap context
 @param[in] endpoint The Web service's endpoint
 @param[in] host The host name
 @param[in] port The port numer
 @return 1 A valid socket
 
 Note: This open function does not create a real socket for communication. The
 actual connection establishment happens in the frecv callback
 */
static SOAP_SOCKET soap_ios_open( struct soap *soap, const char *endpoint,
																 const char *host, int port) {
	
	// Pull out the pluin data
	struct soap_ios_data *data =
	(struct soap_ios_data *)soap_lookup_plugin(soap, soap_ios_id);
	
	if (data == NULL || data->url_data == nil) return SOAP_INVALID_SOCKET;	
	GSoapiOSURLData * url_data = data->url_data;
	
	[url_data setEndpoint:[NSString stringWithUTF8String:endpoint]];
	[url_data setHost:[NSString stringWithUTF8String:host]];
	[url_data setPort:port];
	[url_data setRequest_sent:false];
	[url_data setReceived_length:0];
	[url_data setSoap_action:[NSString stringWithUTF8String:soap->action]];
	[url_data setReq_content_length:soap->count];
	
	
	// Extract a pair of userid and password if present
	if (soap->userid && soap->passwd) {
		[url_data setUser_name:[NSString stringWithUTF8String:soap->userid]];
		[url_data setPassword:[NSString stringWithUTF8String:soap->passwd]];
	} else {
		[url_data setUser_name:nil];
		[url_data setPassword:nil];
	}
		
	// Extracts and saves http-method
	switch (soap->status){
		case SOAP_POST:
			[url_data setHttp_method:@"POST"];
			break;
		case SOAP_GET:
			[url_data setHttp_method:@"GET"];
			break;	
		case SOAP_DEL:
			[url_data setHttp_method:@"DELETE"];
			break;
		case SOAP_CONNECT:
			[url_data setHttp_method:@"CONNECT"];
			break;
		default:
			[url_data setHttp_method:@"POST"];
			break;			
	}
	
	// Extracts and saves http content-type
	if((soap->mode & SOAP_ENC_DIME) && !(soap->mode & SOAP_ENC_MTOM)){
		[url_data setContent_type:@"application/dime"];
	}	else if (soap->version == 2){
		if (soap->mode & SOAP_ENC_MTOM){
			[url_data setContent_type:@"application/xop+xml; charset=utf-8; \
			 type=\"application/soap+xml\""];		
		}else{
			[url_data setContent_type:@"application/soap+xml; charset=utf-8"];
		}
	}else if (soap->mode & SOAP_ENC_MTOM) {
		[url_data setContent_type:@"application/xop+xml; charset=utf-8; \
		 type=\"text/xml\""];
	} else {
		[url_data setContent_type:@"tex/xml; charset=utf-8"];
	}
	
	return 1;
}

/**
 @fn int soap_ios_close( struct soap *soap)
 @param soap The soap context
 @param[in] endpoint The Web service's endpoint
 @param[in] host The host name
 @param[in] port The port numer
 @return 0
 
 Note: This open function does not create a real socket for communication. The
 actual connection establishment happens in the frecv callback
 */
static int soap_ios_close( struct soap *soap) {
		
	return 0;
}


/**
 @fn int soap_ios_send( struct soap *soap, const char *buf, size_t len)
 @brief Buffers the http/soap request in plugin data  
 @param soap The soap context
 @param[in] buf The buffer holding the serialized http/soap request
 @param[in] len The buffer size
 @return The number of bytes buffered
 
 Note: This send function does not send any data to its peer. Rather it buffers
 the serialied soap request including http header to the plugin data.
 The sending happens actually in frecv function.
 */
static int soap_ios_send( struct soap *soap, const char *buf, size_t len) {
	
	struct soap_ios_data *data = 
	(struct soap_ios_data*)soap_lookup_plugin(soap,soap_ios_id);
	
	GSoapiOSURLData *url_data = data->url_data;
	
	[url_data.http_req_msg appendBytes:buf length: len];
	
	return len > 0 ? SOAP_OK : SOAP_EOF;
}

/**
 @fn size_t soap_ios_recv( struct soap *soap, char *buf, size_t len)
 @brief Sends soap request, buffers soap response and serialize the response
 @param soap The soap context
 @param[out] buf The buffer for the received data
 @param[in] len The number of bytes received
 @return The number of bytes received
 
 Note: This recv function sends a synchronous soap request through NSURLRequest,
 receives soap response, serializes response.
 */
static size_t soap_ios_recv( struct soap *soap, char *buf, size_t len) {
	
	struct soap_ios_data *data = 
	(struct soap_ios_data*)soap_lookup_plugin(soap,soap_ios_id);
	
	GSoapiOSURLData *url_data = data->url_data;

	
	// Handle HTTP basic authentication if present
	if (url_data.user_name && url_data.password) {
		
		NSURLCredential *credential = [NSURLCredential
																	 credentialWithUser:url_data.user_name
																	 password:url_data.password
																	 persistence:NSURLCredentialPersistenceForSession];
		
		
		NSURLProtectionSpace * protectionSpace = [[NSURLProtectionSpace alloc]
																							initWithHost:url_data.host
																							port:url_data.port
																							protocol:@"http"
																							realm:nil
																							authenticationMethod:nil];
				
		[[NSURLCredentialStorage sharedCredentialStorage]
		 setDefaultCredential:credential
		 forProtectionSpace:protectionSpace];
		
		[protectionSpace release];
	}
	
	
	// -------- End of auhentication handling ---------
	
	
	// Execute once: sending the request and receiving response
	// Send request through NSURLRequest sendSynchronousRequest
	// and receive response
	if(url_data.request_sent == false) { 
		
		[url_data setRequest_sent:true];
		
		//int msg_len = [url_data.http_req_msg length];
		NSRange range = NSMakeRange([url_data.http_req_msg length] 
																- url_data.req_content_length, 
																url_data.req_content_length);
		
		url_data.soap_req_msg = [url_data.http_req_msg subdataWithRange:range];
		
				
		NSURL *url = [NSURL URLWithString:url_data.endpoint];		
		NSMutableURLRequest *request = [NSMutableURLRequest
																		requestWithURL:url
																		cachePolicy:url_data.cache_policy
																		timeoutInterval:url_data.timeout_interval];
		
		[request addValue:url_data.host forHTTPHeaderField:@"HOST"];
		[request addValue:url_data.soap_action forHTTPHeaderField:@"SOAPACTION"];		
		[request addValue:url_data.content_type forHTTPHeaderField:@"Content-Type"];
		[request setHTTPMethod:url_data.http_method];	
		
		NSString *conten_length = [NSString stringWithFormat:@"%d",
															 [url_data.soap_req_msg length]];		
		[request addValue:conten_length forHTTPHeaderField:@"Content-Length"];
		[request setHTTPBody:url_data.soap_req_msg];
		
		NSHTTPURLResponse *response = nil;
		NSError *error = nil;
		
		url_data.soap_res_msg = [NSURLConnection 
															sendSynchronousRequest:request 
															returningResponse:&response 
															error:&error];
						
		// Error handling
		if (error) {
			DLog(@"ERROR:<%@>\n", [error localizedDescription]);
			//const char *fault_string = [[error localizedDescription] UTF8String];
			
			soap_receiver_fault(soap, [[error localizedDescription] UTF8String], "");
		} 
		 
	}
	
	// may execute multiple times depending on the buffer size and response length
	if(url_data.request_sent) {
		
		size_t res_len = [url_data.soap_res_msg length]; // response length
		
		if (len + url_data.received_length > res_len) { // Adjustment len
			len = res_len - url_data.received_length;
			//cout << "len = " << len << endl;
		}
		
		const char *res_msg = (const char *)[url_data.soap_res_msg bytes];		
		memcpy(buf, res_msg + url_data.received_length, len);
		url_data.received_length += len;
		
	} 
		
	return url_data.request_sent ? len : 0;
}


/**
 @fn void soap_ios_setcachepolicy(struct soap *soap, unsigned int policy)
 @brief Sets cache policy
 The constants used to specify interaction with the cached responses are:
 
 enum {
 
	NSURLRequestUseProtocolCachePolicy = 0,
 
	NSURLRequestReloadIgnoringLocalCacheData = 1,
 
	NSURLRequestReloadIgnoringCacheData = NSURLRequestReloadIgnoringLocalCacheData,
 
	NSURLRequestReturnCacheDataElseLoad = 2,
 
	NSURLRequestReturnCacheDataDontLoad = 3,

	NSURLRequestReloadIgnoringLocalAndRemoteCacheData =4,

	NSURLRequestReloadRevalidatingCacheData = 5
 
 };
 
 @param soap The soap context
 @param[in] policy The policy to be specified for he request
 */
void soap_ios_setcachepolicy(struct soap *soap, unsigned int policy) {
	struct soap_ios_data *data =
	(struct soap_ios_data *)soap_lookup_plugin(soap, soap_ios_id);
	
	data->url_data.cache_policy = policy;
}


/**
 @fn soap_ios_settimeoutinterval(struct soap *soap, double seconds)
 @brief Sets timeout interval
 @param soap The soap context
 @param[in] seconds The value for the timeout interval to be specifed (in seconds)
 */
void soap_ios_settimeoutinterval(struct soap *soap, double seconds) {
	struct soap_ios_data *data =
	(struct soap_ios_data *)soap_lookup_plugin(soap, soap_ios_id);
	
	data->url_data.timeout_interval = seconds;
}




// -----------------------------------------------------------------------------
// END of C plugin implementation
// -----------------------------------------------------------------------------


