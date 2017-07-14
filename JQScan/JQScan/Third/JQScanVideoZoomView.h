//
//  JQScanVideoZoomView.h
//  JQScan
//
//  Created by 韩俊强 on 2017/7/12.
//  Copyright © 2017年 HaRi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JQScanVideoZoomView : UIView

/**
 @brief 控件值变化
 */
@property (nonatomic, copy) void (^block)(float value);

- (void)setMaximunValue:(CGFloat)value;

@end
