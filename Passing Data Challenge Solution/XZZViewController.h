//
//  XZZViewController.h
//  Passing Data Challenge Solution
//
//  Created by Zac on 8/12/2014.
//  Copyright (c) 2014 1st1k. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XZZDetailViewController.h"

@interface XZZViewController : UIViewController <XZZDetailViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UITextField *textField;

@end
