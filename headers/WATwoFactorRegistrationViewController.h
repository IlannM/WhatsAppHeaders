//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WATwoFactorCodeBaseViewController.h"

#import "WARegistrationViewController-Protocol.h"

@class NSString, UIImageView, UILabel, UIProgressView, UIView, WARegistrationSession, WATwoFactorWipeToken, WAWeakTimer;
@protocol WATwoFactorRegistrationViewControllerDelegate;

@interface WATwoFactorRegistrationViewController : WATwoFactorCodeBaseViewController <WARegistrationViewController>
{
    WARegistrationSession *_session;
    WATwoFactorWipeToken *_wipeToken;
    int _codeInputBlockState;
    WAWeakTimer *_codeInputBlockProgressUpdateTimer;
    WAWeakTimer *_emailCodeExistCheckTimer;
    double _emailCodeExistCheckMinPoll;
    NSString *_smsVerificationCodeUsed;
    id <WATwoFactorRegistrationViewControllerDelegate> _delegate;
    UIView *_viewUIBlocked;
    UILabel *_labelUIBlocked;
    UIProgressView *_progressViewBlock;
    UIImageView *_lockIcon;
}

+ (id)localizedRoughTimeStringForInterval:(double)arg1;
- (void).cxx_destruct;
- (void)confirmRestAccount;
- (void)createAndStartEmailExistCheckPollTimer;
@property(nonatomic) __weak id <WATwoFactorRegistrationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableRegistrationDelegate;
- (void)handleCodeCheckRequest:(id)arg1;
- (void)handleCodeCheckResponseForCode:(id)arg1 withResponse:(id)arg2 loginDeviceJID:(id)arg3 error:(id)arg4;
- (void)handleCodeEntered:(id)arg1;
- (void)handleLeftNavigationButtonTapped;
- (void)handleOpenURL:(id)arg1;
- (void)handleRecoveryEmailRequest;
- (void)handleRecoveryEmailResponse:(id)arg1 loginDeviceJID:(id)arg2 error:(id)arg3;
- (void)handleStandardRegistrationResponses:(id)arg1 session:(id)arg2 loginDeviceJID:(id)arg3;
- (void)handleWipeRequest;
- (void)handleWipeResponse:(id)arg1 loginDeviceJID:(id)arg2 error:(id)arg3;
- (id)initSession:(id)arg1 wipeToken:(id)arg2 changeNumberMode:(_Bool)arg3 delegate:(id)arg4;
@property(retain, nonatomic) UILabel *labelUIBlocked; // @synthesize labelUIBlocked=_labelUIBlocked;
@property(retain, nonatomic) UIImageView *lockIcon; // @synthesize lockIcon=_lockIcon;
- (void)pollForEmailResetIfNecessary;
- (void)presentContactSupportAlertWithTitle:(id)arg1 message:(id)arg2 reason:(id)arg3 session:(id)arg4;
- (void)presentForgotPasscodeActionSheet;
- (void)presentGenericAlertWithTitle:(id)arg1 message:(id)arg2 recoverable:(_Bool)arg3;
- (void)presentSupportEmailComposerWithReason:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIProgressView *progressViewBlock; // @synthesize progressViewBlock=_progressViewBlock;
- (void)sameDeviceCompletionForSession:(id)arg1 withRespionse:(id)arg2 loginDeviceJID:(id)arg3 error:(id)arg4;
- (void)setCodeInputBlockState:(int)arg1;
@property(copy, nonatomic) NSString *smsVerificationCodeUsed; // @synthesize smsVerificationCodeUsed=_smsVerificationCodeUsed;
@property(retain, nonatomic) UIView *viewUIBlocked; // @synthesize viewUIBlocked=_viewUIBlocked;
- (void)startCodeInputBlockProgressUpdateTimer;
- (void)updateCodeInputBlockProgress;
- (void)validateCodeInputBlockState;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)wa_fontSizeDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

