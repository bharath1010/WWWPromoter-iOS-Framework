//
//  ViewController.m
//  WWWPromoter
//
//  Created by macbook on 12/06/17.
//  Copyright © 2017 Falconnect Technologies Private Limited. All rights reserved.
//

#import "ViewController.h"
#import <WWWPromoter/PromoterConnection.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(IBAction)ClickHere:(id)sender
{
//    NSLog(@"appname---->%@",appname);
    [[PromoterConnection sharedManager] getConnection];
}

@end
