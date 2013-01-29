//
//  ViewController.h
//  UnitConverter
//
//  Created by Pablo Espuny Rodrigo on 28/01/13.
//  Copyright (c) 2013 pespuny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong,nonatomic) IBOutlet UILabel *resultLabel;
@property (strong,nonatomic) IBOutlet UITextField *tempText;

- (IBAction)convertTemp:(id)sender;

- (IBAction)textFieldReturn:(id)sender;

- (IBAction)backgroundTouched:(id)sender;


@end
