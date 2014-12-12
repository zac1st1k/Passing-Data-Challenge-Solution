//
//  XZZDetailViewController.h
//  Passing Data Challenge Solution
//
//  Created by Zac on 8/12/2014.
//  Copyright (c) 2014 1st1k. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol XZZDetailViewControllerDelegate <NSObject>

- (void) didUpdateText:(NSString *)text;

@end

@interface XZZDetailViewController : UIViewController

@property (weak, nonatomic) id <XZZDetailViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UILabel *label;
@property (strong, nonatomic) NSString *message;
@property (strong, nonatomic) IBOutlet UITextField *textField2;
- (IBAction)button2:(id)sender;

@end
