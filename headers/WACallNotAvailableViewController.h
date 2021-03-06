//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

@class NSArray, UIButton, UILabel;

@interface WACallNotAvailableViewController : WAViewController
{
    unsigned long long _error;
    _Bool _isGroupError;
    _Bool _isGenericError;
    NSArray *_peerJIDs;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_bottomButton;
    UIButton *_closeButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(nonatomic) __weak UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
- (void)bottomButtonTapped:(id)arg1;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeButtonTapped:(id)arg1;
- (id)initWithGenericErrorWithJIDs:(id)arg1;
- (id)initWithGroupCallError:(unsigned long long)arg1 withJIDs:(id)arg2;
- (id)initWithNackError:(unsigned long long)arg1 withJIDs:(id)arg2;
- (long long)preferredStatusBarStyle;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)wa_applicationDidEnterBackground;

@end

