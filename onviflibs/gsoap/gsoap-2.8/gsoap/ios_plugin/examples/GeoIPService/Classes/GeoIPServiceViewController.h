//
//  GeoIPServiceViewController.h
//  GeoIPService
//
//  Created by Wei Zhang on 5/27/12.
//  Copyright Genivia Inc. 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GeoIPServiceViewController : UIViewController {

	UITextField *ipAddress;
	
}


@property (nonatomic, retain) IBOutlet UITextField *ipAddress;

- (IBAction) buttonFindCountry:(id)sender; 


@end

