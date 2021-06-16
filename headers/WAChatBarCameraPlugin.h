//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAChatBarMenuPlugin-Protocol.h"
#import "WAMultiShotCameraControllerDelegate-Protocol.h"

@class NSString, UIButton, UIViewController;
@protocol WAMultiSendMediaPickerControllerDelegate><WAChatBarCameraPluginDelegate;

@interface WAChatBarCameraPlugin : NSObject <WAChatBarMenuPlugin, WAMultiShotCameraControllerDelegate>
{
    UIViewController<WAMultiSendMediaPickerControllerDelegate><WAChatBarCameraPluginDelegate> *_viewController;
    UIButton *_cameraButton;
    UIButton *_attachMediaButton;
}

+ (_Bool)shouldShowInMenuForChatSession:(id)arg1;
- (void).cxx_destruct;
- (void)addMenuItemToActionSheet:(id)arg1 withChatSession:(id)arg2;
@property(nonatomic) __weak UIButton *attachMediaButton; // @synthesize attachMediaButton=_attachMediaButton;
@property(nonatomic) __weak UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
- (_Bool)hasSufficientDiskSpaceToUseCamera;
- (id)initWithHostViewController:(id)arg1 cameraButton:(id)arg2 attachMediaButton:(id)arg3;
- (void)multiShotCameraController:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)multiShotCameraController:(id)arg1 didCaptureItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)multiShotCameraController:(id)arg1 didRequestAddContactWithDetails:(id)arg2;
- (void)multiShotCameraController:(id)arg1 didRequestPresentPhotoLibraryWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)multiShotCameraController:(id)arg1 didRequestStartChatWithDetails:(id)arg2;
- (void)presentInsufficientDiskSpaceAlert;
- (void)showCameraFromActionSheetWithChatSession:(id)arg1;
- (void)showCameraFromChatBar:(_Bool)arg1 withChatSession:(id)arg2;
- (void)showCameraFromChatBarWithChatSession:(id)arg1;
- (void)showMultiShotCameraFromChatBar:(_Bool)arg1 withChatSession:(id)arg2;
@property(readonly, nonatomic) __weak UIViewController<WAMultiSendMediaPickerControllerDelegate><WAChatBarCameraPluginDelegate> *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

