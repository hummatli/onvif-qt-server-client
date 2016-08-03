//
//  CalcViewController.h
//  Calc
//
//  Created by Wei Zhang on 5/19/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalcViewController : UIViewController {
	UITextField *op1; // operand1
	UITextField *op2; // operand2

}

@property (nonatomic, retain) IBOutlet UITextField *op1;
@property (nonatomic, retain) IBOutlet UITextField *op2;

- (IBAction) buttonPressed;
@end

