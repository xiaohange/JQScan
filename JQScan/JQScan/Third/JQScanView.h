//
//  JQScanView.h
//
//  Created by HaRi on 15/11/15.
//  Copyright © 2015年 HaRi. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "JQScanLineAnimation.h"
#import "JQScanNetAnimation.h"
#import "JQScanViewStyle.h"

/**
 扫码区域显示效果
 */
@interface JQScanView : UIView

/**
 @brief  初始化
 @param frame 位置大小
 @param style 类型

 @return instancetype
 */
-(id)initWithFrame:(CGRect)frame style:(JQScanViewStyle*)style;

/**
 *  设备启动中文字提示
 */
- (void)startDeviceReadyingWithText:(NSString*)text;

/**
 *  设备启动完成
 */
- (void)stopDeviceReadying;

/**
 *  开始扫描动画
 */
- (void)startScanAnimation;

/**
 *  结束扫描动画
 */
- (void)stopScanAnimation;

//

/**
 @brief  根据矩形区域，获取识别兴趣区域
 @param view  视频流显示UIView
 @param style 效果界面参数
 @return 识别区域
 */
+ (CGRect)getScanRectWithPreView:(UIView*)view style:(JQScanViewStyle*)style;


@end
