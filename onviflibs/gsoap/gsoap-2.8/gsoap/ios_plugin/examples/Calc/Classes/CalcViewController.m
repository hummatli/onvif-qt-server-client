//
//  CalcViewController.m
//  Calc
//
//  Created by Wei Zhang on 5/19/12.
//  Copyright Genivia Inc. 2012. All rights reserved.
//

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
		
		if (status == SOAP_OK) {
			NSString *resultString;
			NSString *tittleString;
			
			if (status == SOAP_OK) {
				resultString = [NSString stringWithFormat:@"%f",result];
				tittleString = [NSString stringWithFormat:@"%f / %f =",x, y];
			}
			else {
				resultString = [NSString stringWithFormat:@"%@",@"Soap fault!"];
				tittleString = [NSString stringWithFormat:@"%@",@"Warning"];
			}
			
			
			// Show the result in an alert
			UIAlertView *alert = [[UIAlertView alloc] initWithTitle:tittleString					  
																											message:resultString		  
																										 delegate:self							  
																						cancelButtonTitle:@"OK"							  
																						otherButtonTitles:nil];		
			[alert show];		// Show the alert
			[alert release]; // Release the alert
		} else {
			// Caveat: Better to extract the error message and show it using an alert
			soap_print_fault(soap,stderr); // Print soap error in console
		}
	}
	
	soap_end(soap); // clean up allocated temporaries 
	soap_free(soap); // Free soap context
	
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
	return  interfaceOrientation == UIInterfaceOrientationPortrait ||
	interfaceOrientation == UIInterfaceOrientationPortraitUpsideDown ||
	interfaceOrientation == UIInterfaceOrientationLandscapeLeft ||
	interfaceOrientation == UIInterfaceOrientationLandscapeRight;
	
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
	[op1 release];
	[op2 release];
	[super dealloc];
}

@end
