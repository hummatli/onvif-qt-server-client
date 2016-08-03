//
//  GeoIPServiceAppDelegate.m
//  GeoIPService
//
//  Created by Wei Zhang on 5/27/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import "GeoIPServiceAppDelegate.h"
#import "GeoIPServiceViewController.h"

@implementation GeoIPServiceAppDelegate

@synthesize window;
@synthesize viewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
	
	return YES;
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
