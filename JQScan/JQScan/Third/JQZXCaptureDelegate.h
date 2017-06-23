//
//  JQZXCaptureDelegate.h
//
//  Created by HaRi on 15/1/6.
//  Copyright (c) 2015年 HaRi. All rights reserved.
//
@class JQZXCapture;
@class ZXResult;

@protocol JQZXCaptureDelegate <NSObject>

- (void)captureResult:(JQZXCapture *)capture result:(ZXResult *)result scanImage:(UIImage*)img;

@optional
- (void)LBXCaptureSize:(JQZXCapture *)capture
              width:(NSNumber *)width
             height:(NSNumber *)height;

- (void)LBXCaptureCameraIsReady:(JQZXCapture *)capture;

@end
