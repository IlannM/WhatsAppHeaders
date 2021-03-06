//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAQRCodeScannerViewController.h>

#import "WAQRHelpViewDelegate-Protocol.h"

@class NSString, NSTimer, UIBarButtonItem, UILabel, UIView, WABubbleTextView, WAWebClientQRHelpView;

@interface WAWebClientQRCodeScannerViewController : WAQRCodeScannerViewController <WAQRHelpViewDelegate>
{
    WAWebClientQRHelpView *_helpView;
    UILabel *_titleLabel;
    UIView *_titleBackgroundView;
    WABubbleTextView *_retryingView;
    _Bool _shouldAnimateHelp;
    NSTimer *_retryingViewTimer;
    UIBarButtonItem *_debugEnterCodeButton;
}

- (void).cxx_destruct;
- (void)didAcceptQRCode;
- (void)dismissHelpView;
- (void)hideRetryingView;
- (id)initWithExitButtonAppearanceDelay:(double)arg1 animatedHelp:(_Bool)arg2;
- (void)invalidateRetryingViewTimer;
- (void)qrHelpViewWillDismiss;
- (void)restart;
- (void)retry;
- (void)scheduleRetryingViewTimer;
- (void)showRetryingView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAcceptQRCode;
- (void)willShowExitButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

