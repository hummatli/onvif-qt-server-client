//
//  CalcAppDelegate.h
//  Calc
//
//  Created by Wei Zhang on 5/19/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CalcViewController;

@interface CalcAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    CalcViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet CalcViewController *viewController;

@end

