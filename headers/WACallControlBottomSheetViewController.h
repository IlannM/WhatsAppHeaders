//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WACallControlBaseBottomSheetViewController.h"

#import "WACallInfoParticipantViewCellDelegate-Protocol.h"

@class NSArray, NSString, WACallControlBottomSheetHeaderView, WACallParticipant, WACallVoiceOverManager, WAUserJID;
@protocol WACallControlDelegate;

@interface WACallControlBottomSheetViewController : WACallControlBaseBottomSheetViewController <WACallInfoParticipantViewCellDelegate>
{
    WACallParticipant *_selfParticipant;
    NSArray *_peerParticipants;
    NSArray *_callControlTableSections;
    double _totalTableViewHeight;
    int _callState;
    _Bool _isVideoCall;
    WACallControlBottomSheetHeaderView *_headerView;
    _Bool _minimizable;
    _Bool _shouldEnableAddParticipantButton;
    _Bool _expandable;
    WAUserJID *_lastSelfInvitedParticipantJID;
    WAUserJID *_lastPeerInvitedParticipantJID;
    WACallVoiceOverManager *_voiceOverManager;
    _Bool _seenInLineEducation;
    id <WACallControlDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)acceptButton;
- (void)addParticipantJID:(id)arg1;
- (void)animateDownBottomSheetWithDelay:(double)arg1;
- (void)animateSelfInvitedParticpantCellWithParticipantJID:(id)arg1;
- (void)animateUpBottomSheetWithDelay:(double)arg1;
- (void)calculateTotalTableViewHeight;
- (unsigned long long)callControlTableSectionFromSectionIndex:(long long)arg1;
- (void)callInfoParticipantViewCellRingRequested:(id)arg1 participantJID:(id)arg2;
- (id)contentViewBackgroundColor;
- (void)dealloc;
@property(nonatomic) __weak id <WACallControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)didTapAddedParticipantNotficationWithParticipantJID:(id)arg1;
- (void)didUpdateParticipants:(id)arg1;
- (void)disableButtons;
- (_Bool)dismissible;
- (void)enableButtons;
- (id)excludedJIDsForWASinglePersonPicker:(id)arg1;
- (_Bool)expandable;
- (id)extraHeaderView;
- (id)getPeerParticipants:(id)arg1;
- (_Bool)hideTableViewWhenNotExpanded;
- (id)indexPathForParticipant:(id)arg1;
- (id)initWithSelfParticipant:(id)arg1 callParticipants:(id)arg2 voiceOverManager:(id)arg3;
- (_Bool)isHandlingAVSwitchTransition:(int)arg1;
- (_Bool)isIncomingCall:(int)arg1;
- (_Bool)isIncomingOrOutgoingCall:(int)arg1;
- (double)maximumHeight;
- (_Bool)minimizable;
- (double)minimumHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)rotateButtonsIfNeeded;
- (void)scrollToParticipant:(id)arg1;
- (void)setIsVideoCall:(_Bool)arg1;
- (void)setLastPeerInvitedParticipantJID:(id)arg1;
- (void)setLastSelfInvitedParticipantJID:(id)arg1;
- (void)setMuteSelected:(_Bool)arg1;
- (void)setPanelHeight:(double)arg1 layoutImmediately:(_Bool)arg2;
- (void)setSelfParticipant:(id)arg1;
- (id)setupInfoViewCell:(id)arg1;
- (_Bool)shouldShowinlineEducation;
- (void)singlePersonPicker:(id)arg1 didSelectContact:(id)arg2 frequentlyContacted:(_Bool)arg3;
- (void)singlePersonPickerDidCancel:(id)arg1;
- (_Bool)singlePersonPickerShouldSearchPushNamesForChatsSection:(id)arg1;
- (void)speakerVoiceButtonRoutingAllowed:(_Bool)arg1 route:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateBottomSheetViewState:(int)arg1;
- (void)updateCallState:(int)arg1;
- (void)updateCallState:(int)arg1 suppressVisibility:(_Bool)arg2;
- (void)updateCallState:(int)arg1 suppressVisibility:(_Bool)arg2 peerParticipants:(id)arg3;
- (void)updateInLineEducationIsSeenIfNecessary;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

