//
//  GeoIPServiceAppDelegate.h
//  GeoIPService
//
//  Created by Wei Zhang on 5/27/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GeoIPServiceViewController;

@interface GeoIPServiceAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    GeoIPServiceViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet GeoIPServiceViewController *viewController;

@end

