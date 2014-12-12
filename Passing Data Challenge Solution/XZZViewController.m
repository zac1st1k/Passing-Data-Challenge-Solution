//
//  XZZViewController.m
//  Passing Data Challenge Solution
//
//  Created by Zac on 8/12/2014.
//  Copyright (c) 2014 1st1k. All rights reserved.
//

#import "XZZViewController.h"
#import "XZZDetailViewController.h"

@interface XZZViewController ()

@end

@implementation XZZViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void) prepareForSegue:(UIStoryboardSegue*)segue sender:(id)sender
{
    XZZDetailViewController *nextViewController = segue.destinationViewController;
    nextViewController.message = self.textField.text;
//    NSString *message = self.textField.text;
//    nextViewController.message = message;
    nextViewController.delegate = self;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma - XZZDetailViewControllerDelegate

- (void)didUpdateText:(NSString *)text
{
    self.textField.text = text;
}

@end