//
//  GeoIPServiceViewController.mm
//  GeoIPService
//
//  Created by Wei Zhang on 5/27/12.
//  Copyright Genivia Inc. 2012. All rights reserved.
//

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
		}
		else {
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

/*
 // The designated initializer. Override to perform setup that is required before the view is loaded.
 - (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
 if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
 // Custom initialization
 }
 return self;
 }
 */

/*
 // Implement loadView to create a view hierarchy programmatically, without using a nib.
 - (void)loadView {
 }
 */


/*
 // Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
 - (void)viewDidLoad {
 [super viewDidLoad];
 }
 */



// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
	// Return YES for supported orientations
	return (interfaceOrientation == UIInterfaceOrientationPortrait ||
					interfaceOrientation == UIInterfaceOrientationPortraitUpsideDown ||
					interfaceOrientation == UIInterfaceOrientationLandscapeLeft ||
					interfaceOrientation == UIInterfaceOrientationLandscapeRight);
}


- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
	[super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)dealloc {
	[ipAddress release];
	[super dealloc];
}

@end
