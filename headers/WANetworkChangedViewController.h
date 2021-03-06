//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

@class UIButton, UIImageView, UILabel, UIView;
@protocol WANetworkChangedControllerDelegate;

@interface WANetworkChangedViewController : WAViewController
{
    UIImageView *_imageViewTower;
    UILabel *_labelHelperTextTop;
    UILabel *_labelHelperTextBottom;
    UIView *_viewButtons;
    UIButton *_buttonChangeNumber;
    UIButton *_buttonKeepNumber;
    id <WANetworkChangedControllerDelegate> _delegate;
}

+ (id)controller;
- (void).cxx_destruct;
- (void)changeNumber:(id)arg1;
@property(nonatomic) __weak id <WANetworkChangedControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finishControllerWithResult:(_Bool)arg1;
- (void)keepNumber:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

