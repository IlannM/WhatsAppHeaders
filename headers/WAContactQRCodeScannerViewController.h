//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WABasicQRCodeScannerViewController.h>

#import "WACameraRollStripViewDelegate-Protocol.h"
#import "WAContactAlertViewControllerDelegate-Protocol.h"
#import "WAContactQRPhotoPreviewViewControllerDelegate-Protocol.h"
#import "WAGroupInviteJoinControllerHelperDelegate-Protocol.h"
#import "WAQRCodeScannerViewControllerDelegate-Protocol.h"
#import "WAQRHelpViewDelegate-Protocol.h"

@class CAShapeLayer, NSString, NSTimer, UIButton, UIImageView, UIView, WACameraRollStripView, WAContactQRHelpView, WAContactQRViewController, WAQRCodeController;
@protocol WAContactQRCodeScannerViewControllerDelegate;

@interface WAContactQRCodeScannerViewController : WABasicQRCodeScannerViewController <WAContactAlertViewControllerDelegate, WAQRCodeScannerViewControllerDelegate, WAContactQRPhotoPreviewViewControllerDelegate, WACameraRollStripViewDelegate, WAQRHelpViewDelegate, WAGroupInviteJoinControllerHelperDelegate>
{
    UIButton *_backButton;
    UIButton *_shareCodeButton;
    UIButton *_photosButton;
    UIButton *_flashButton;
    NSString *_lastScannedQRCode;
    _Bool _statusBarShouldReallyBeHidden;
    _Bool _needsDisplayCameraRollPicker;
    WACameraRollStripView *_stripView;
    CAShapeLayer *_openFrameLayer;
    UIImageView *_topLeftFrame;
    UIImageView *_topRightFrame;
    UIImageView *_bottomRightFrame;
    UIImageView *_bottomLeftFrame;
    UIView *_dimmedMask;
    WAContactQRHelpView *_helpView;
    NSTimer *_helpViewTimer;
    WAQRCodeController *_qrCodeController;
    _Bool _firstTimeViewer;
    id <WAContactQRCodeScannerViewControllerDelegate> _contactQRScannerDelegate;
    WAContactQRViewController *_contactQRViewController;
}

+ (long long)cameraMode;
- (void).cxx_destruct;
- (void)addContactWithUserJID:(id)arg1 pushName:(id)arg2;
- (void)animateFrame;
- (void)backAction:(id)arg1;
- (void)cameraRollStripView:(id)arg1 didLongPressItemAtIndex:(id)arg2;
- (void)cameraRollStripView:(id)arg1 didSelectMediaPickerAsset:(id)arg2;
- (void)cameraRollStripViewDidChangePresentationState:(id)arg1;
- (void)commonInit;
- (void)contactAlertViewController:(id)arg1 didAddContactWithUserJID:(id)arg2 pushName:(id)arg3;
- (void)contactAlertViewController:(id)arg1 sendMessage:(id)arg2 JID:(id)arg3 pushName:(id)arg4;
- (void)contactAlertViewControllerDidAppear:(id)arg1;
- (void)contactAlertViewControllerDidCancel:(id)arg1;
- (void)contactAlertViewControllerRequestedViewDismissalWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)contactAlertViewControllerShouldAppearForExistingContact;
- (void)contactQRPhotoPreviewViewController:(id)arg1 requestAddContactWithUserJID:(id)arg2 pushName:(id)arg3;
- (void)contactQRPhotoPreviewViewController:(id)arg1 requestStartChatWithMessage:(id)arg2 JID:(id)arg3 pushName:(id)arg4;
- (void)contactQRPhotoPreviewViewControllerDidCancel:(id)arg1;
- (void)contactQRPhotoPreviewViewControllerRequestedViewDismissalWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <WAContactQRCodeScannerViewControllerDelegate> contactQRScannerDelegate; // @synthesize contactQRScannerDelegate=_contactQRScannerDelegate;
@property(nonatomic) __weak WAContactQRViewController *contactQRViewController; // @synthesize contactQRViewController=_contactQRViewController;
- (void)dealloc;
- (void)destroyCameraRollPicker;
- (void)dismissQRHelpView;
- (void)groupInviteJoinControllerRequestedViewDismissalWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)prefersStatusBarHidden;
- (void)presentPhotoLibrary:(id)arg1;
- (void)qrCodeScannerViewController:(id)arg1 didFinishWithCode:(id)arg2;
- (_Bool)qrCodeScannerViewController:(id)arg1 shouldAcceptCode:(id)arg2;
- (void)qrCodeScannerViewControllerDidCancel:(id)arg1;
- (void)qrHelpViewWillDismiss;
- (void)refetchLibraryAssetsWithShowPicker:(_Bool)arg1;
- (void)restart;
- (void)scheduleQRHelpViewTimer;
- (void)setFlashButtonAccessibilityLabelFor:(unsigned long long)arg1;
- (void)shareCodeAction:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)showQRHelpView;
- (void)startChatWithMessage:(id)arg1 JID:(id)arg2 pushName:(id)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleFlash:(id)arg1;
- (void)userDidBeginInteractingWithCameraRollStripView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

