//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSObject, NSString, VOutDelegate;
@protocol OS_dispatch_queue, WAVideoCaptureViewDelegate;

@interface WAVideoCaptureView : UIView
{
    NSObject<OS_dispatch_queue> *_captureQueue;
    AVCaptureVideoPreviewLayer *_prev_layer;
    AVCaptureSession *_cap_session;
    AVCaptureDeviceInput *_dev_input;
    AVCaptureVideoDataOutput *_video_output;
    VOutDelegate *_vout_delegate;
    NSString *_defaultSessionPreset;
    NSString *_defaultSessionFallbackPreset;
    id <WAVideoCaptureViewDelegate> _delegate;
    long long _minFPS;
    long long _maxFPS;
}

- (void).cxx_destruct;
- (void)addReference:(id)arg1;
- (_Bool)checkValidSessionPreset:(id)arg1;
- (id)connectionWithMediaType:(id)arg1;
- (void)deinit;
- (void)deinitInternal;
@property(nonatomic) __weak id <WAVideoCaptureViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableNativePreview;
- (void)enableNativePreview;
- (void)enableNativePreviewInternal;
- (_Bool)ensureCaptureSessionCreated;
- (id)frontFacingCameraIfAvailable;
- (_Bool)initAVCapture;
- (void)initFailedWithErrorCode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
@property(nonatomic) long long maxFPS; // @synthesize maxFPS=_maxFPS;
@property(nonatomic) long long minFPS; // @synthesize minFPS=_minFPS;
- (void)removeReference:(id)arg1;
- (void)sessionDidStart:(id)arg1;
- (void)sessionDidStop:(id)arg1;
- (void)sessionRuntimeError:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)setInputDevice:(id)arg1;
- (void)setMaxFPSInternal:(long long)arg1;
- (void)setMinFPSInternal:(long long)arg1;
- (void)setPreviewLayerSize:(struct CGRect)arg1;
- (void)setPreviewVideoOrientation:(long long)arg1;
- (void)setReferenceFPS:(long long)arg1 CameraRef:(id)arg2;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)setSessionPreset:(id)arg1;
- (_Bool)setSessionPresetInternal:(id)arg1;
- (void)startCaptureSession;
- (void)startCaptureSessionInternal;
- (void)stopCaptureSession;
- (void)stopCaptureSessionInternal;
- (void)updatedBoundsSize;

@end

