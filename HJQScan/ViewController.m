//
//  ViewController.m
//  HJQScan
//
//  Created by 韩俊强 on 16/1/28.
//  Copyright © 2016年 韩俊强. All rights reserved.
//

#import "ViewController.h"
#import <LBXScanViewController.h>
#import "SubLBXScanViewController.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

// 扫描二维码
- (IBAction)scanPicture:(UIButton *)sender
{
    
    SubLBXScanViewController *vc = [SubLBXScanViewController new];
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
