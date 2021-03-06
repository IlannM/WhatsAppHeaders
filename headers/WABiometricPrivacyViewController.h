//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

@class UIButton, UIImage, UIImageView, UILabel, UIView;
@protocol WABiometricPrivacyViewControllerDelegate;

@interface WABiometricPrivacyViewController : WAViewController
{
    UIImageView *_blurredImageView;
    UIButton *_unlockButton;
    UIView *_containerView;
    UIImageView *_lockImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    long long _privacyType;
    id <WABiometricPrivacyViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WABiometricPrivacyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *image;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, getter=isRetryInterfaceHidden) _Bool retryInterfaceHidden;
@property(nonatomic) long long privacyType; // @synthesize privacyType=_privacyType;
- (void)retryUnlock:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end

