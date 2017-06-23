
#import <AVFoundation/AVFoundation.h>
#import "JQZXCaptureDelegate.h"
#import <UIKit/UIKit.h>
@protocol JQZXCaptureDelegate, ZXReader;
@class ZXDecodeHints;

@interface JQZXCapture : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, CAAction>

@property (nonatomic, assign) int camera;
@property (nonatomic, strong) AVCaptureDevice *captureDevice;
@property (nonatomic, copy) NSString *captureToFilename;
@property (nonatomic, weak) id<JQZXCaptureDelegate> delegate;
@property (nonatomic, assign) AVCaptureFocusMode focusMode;
@property (nonatomic, strong) ZXDecodeHints *hints;
@property (nonatomic, assign) CGImageRef lastScannedImage;
@property (nonatomic, assign) BOOL invert;
@property (nonatomic, strong, readonly) CALayer *layer;
@property (nonatomic, assign) BOOL mirror;
@property (nonatomic, strong, readonly) AVCaptureVideoDataOutput *output;
@property (nonatomic, strong) id<ZXReader> reader;
@property (nonatomic, assign) CGFloat rotation;
@property (nonatomic, assign, readonly) BOOL running;
@property (nonatomic, assign) CGRect scanRect;
@property (nonatomic, copy) NSString *sessionPreset;
@property (nonatomic, assign) BOOL torch;
@property (nonatomic, assign) CGAffineTransform transform;

- (int)back;
- (int)front;
- (BOOL)hasBack;
- (BOOL)hasFront;
- (BOOL)hasTorch;

- (void)setTorch:(BOOL)torch;

- (void)changeTorch;

- (CALayer *)binary;
- (void)setBinary:(BOOL)on_off;

- (CALayer *)luminance;
- (void)setLuminance:(BOOL)on_off;

- (void)hard_stop;
- (void)order_skip;
- (void)start;
- (void)stop;


//+ (ZXResult *)regocnizeImage:(UIImage*)image;


@end
