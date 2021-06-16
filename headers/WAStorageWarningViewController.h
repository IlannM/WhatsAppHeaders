//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "WAHelperScreenPresenting-Protocol.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface WAStorageWarningViewController : WAViewController <WAHelperScreenPresenting>
{
    _Bool _avoidEnhancedStorage;
    UILabel *_labelTitle;
    UILabel *_labelBody;
    UILabel *_labelItem1;
    UILabel *_labelItem2;
    UILabel *_labelItem3;
    UILabel *_labelItem4;
    UILabel *_labelDescription1;
    UILabel *_labelDescription2;
    UILabel *_labelDescription3;
    UILabel *_labelDescription4;
    UIButton *_buttonClose;
    UIButton *_storageUsageButton;
    NSLayoutConstraint *_buttonDescriptionConstraint;
    NSLayoutConstraint *_buttonListConstraint;
}

- (void).cxx_destruct;
- (void)avoidEnhancedStorage;
@property(nonatomic) __weak UIButton *buttonClose; // @synthesize buttonClose=_buttonClose;
@property(nonatomic) __weak NSLayoutConstraint *buttonDescriptionConstraint; // @synthesize buttonDescriptionConstraint=_buttonDescriptionConstraint;
@property(nonatomic) __weak NSLayoutConstraint *buttonListConstraint; // @synthesize buttonListConstraint=_buttonListConstraint;
- (void)closeAction:(id)arg1;
- (void)dismiss;
@property(nonatomic) __weak UILabel *labelBody; // @synthesize labelBody=_labelBody;
@property(nonatomic) __weak UILabel *labelDescription1; // @synthesize labelDescription1=_labelDescription1;
@property(nonatomic) __weak UILabel *labelDescription2; // @synthesize labelDescription2=_labelDescription2;
@property(nonatomic) __weak UILabel *labelDescription3; // @synthesize labelDescription3=_labelDescription3;
@property(nonatomic) __weak UILabel *labelDescription4; // @synthesize labelDescription4=_labelDescription4;
@property(nonatomic) __weak UILabel *labelItem1; // @synthesize labelItem1=_labelItem1;
@property(nonatomic) __weak UILabel *labelItem2; // @synthesize labelItem2=_labelItem2;
@property(nonatomic) __weak UILabel *labelItem3; // @synthesize labelItem3=_labelItem3;
@property(nonatomic) __weak UILabel *labelItem4; // @synthesize labelItem4=_labelItem4;
@property(nonatomic) __weak UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (long long)preferredStatusBarStyle;
@property(nonatomic) __weak UIButton *storageUsageButton; // @synthesize storageUsageButton=_storageUsageButton;
- (void)showStorageUsage:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
