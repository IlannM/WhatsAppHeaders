//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WATwoFactorCodeBaseViewController.h"

@protocol WATwoFactorCodeViewControllerDelegate;

@interface WATwoFactorCodeViewController : WATwoFactorCodeBaseViewController
{
    id <WATwoFactorCodeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WATwoFactorCodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleCodeEntered:(id)arg1;
- (void)handleLeftNavigationButtonTapped;
- (void)handleOpenURL:(id)arg1;
- (void)hideOverlayWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (void)resetPasscodeField;
- (void)shakePasscodeField;
- (void)showOverlayWithMessage:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

