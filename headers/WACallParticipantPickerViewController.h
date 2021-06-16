//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAParticipantPickerViewController.h"

#import "WAJoinableEducationBannerViewDelegate-Protocol.h"
#import "WALinkLabelDelegate-Protocol.h"

@class NSString, UIView, WAJoinableEducationBannerView, WAParticipantPickerConfiguration, WASlideDownAlertView;

@interface WACallParticipantPickerViewController : WAParticipantPickerViewController <WALinkLabelDelegate, WAJoinableEducationBannerViewDelegate>
{
    WAParticipantPickerConfiguration *_config;
    WASlideDownAlertView *_slideDownAlert;
    UIView *_joinableEducationContainerView;
    WAJoinableEducationBannerView *_educationBannerView;
}

- (void).cxx_destruct;
- (void)bannerViewDidTapClose:(id)arg1;
- (void)configureCell:(id)arg1 forContact:(id)arg2;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (id)init;
- (id)makeContactGrid;
- (void)processContactSelection:(id)arg1 withSelectedJIDs:(id)arg2;
- (unsigned long long)selectionStateForContact:(id)arg1 shouldSelect:(_Bool)arg2;
- (void)setContactGridHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateContactTapability;
- (void)updateInterfaceOnSelectionChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
