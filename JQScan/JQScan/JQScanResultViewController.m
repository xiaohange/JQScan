//
//  JQScanResultViewController.m
//
//  Created by 韩俊强 on 15/11/17.
//  Copyright © 2015年 韩俊强. All rights reserved.
//

#import "JQScanResultViewController.h"

@interface JQScanResultViewController ()

@property (weak, nonatomic) IBOutlet UIImageView *scanImg;
@property (weak, nonatomic) IBOutlet UILabel *labelScanText;
@end

@implementation JQScanResultViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    if ([self respondsToSelector:@selector(setEdgesForExtendedLayout:)]) {
        
        self.edgesForExtendedLayout = UIRectEdgeNone;
    }
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];

    _scanImg.image = _imgScan;
    _labelScanText.text = _strScan;
}


@end
