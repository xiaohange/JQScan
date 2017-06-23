//
//  JQScanResult.m
//
//  Created by HaRi on 15/11/17.
//  Copyright © 2015年 HaRi. All rights reserved.


#import "JQScanResult.h"

@implementation JQScanResult

- (instancetype)initWithScanString:(NSString*)str imgScan:(UIImage*)img barCodeType:(NSString*)type
{
    if (self = [super init]) {
        
        self.strScanned = str;
        self.imgScanned = img;
        self.strBarCodeType = type;
    }
    
    return self;
}

@end
