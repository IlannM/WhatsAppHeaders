//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAPictureContainerViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WAGroupDescriptionTableViewCellDelegate-Protocol.h"
#import "WAGroupParticipantPickerViewControllerDelegate-Protocol.h"
#import "WAGroupParticipantsControllerContentUpdatesDelegate-Protocol.h"
#import "WAGroupParticipantsControllerDelegate-Protocol.h"
#import "WAGroupSubjectEditControllerDelegate-Protocol.h"
#import "WATextInputViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, UIBarButtonItem, WABlocklistAlertManager, WAContactCardItemTableViewCell, WAGroupCreationFooterView, WAGroupJID, WAGroupParticipantsController, WALabelAndButtonHeaderView, WAMediaBrowserMediaManager, WAMutableDictionary, WATableRow, WATableSection, WAUserJID;
@protocol WAGroupInfoViewControllerDelegate;

@interface WAGroupInfoViewController : WAPictureContainerViewController <WAGroupParticipantsControllerContentUpdatesDelegate, WAGroupParticipantPickerViewControllerDelegate, WAGroupDescriptionTableViewCellDelegate, WAGroupParticipantsControllerDelegate, WAGroupSubjectEditControllerDelegate, WATextInputViewControllerDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    WATableRow *_rowLabels;
    long long _beginUpdatesCount;
    WAMediaBrowserMediaManager *_mediaManager;
    UIBarButtonItem *_barButtonShare;
    NSMutableArray *_sections;
    NSArray *_preUpdateSections;
    WATableSection *_sectionGroupSubject;
    WATableRow *_rowGroupSubject;
    WAContactCardItemTableViewCell *_rowGroupSubjectCell;
    _Bool _updatingGroupSubject;
    WATableRow *_rowGroupDescription;
    _Bool _updatingGroupDescription;
    _Bool _canAnimateTableViewChanges;
    _Bool _invitedSectionExpanded;
    WATableSection *_sectionLiveLocation;
    WATableRow *_rowLiveLocation;
    NSArray *_liveLocationSenderJIDs;
    _Bool _currentUserIsSharingLocation;
    WATableSection *_sectionMedia;
    WATableRow *_rowMediaLinksDocs;
    WATableRow *_rowStarredMessages;
    WATableRow *_rowChatHistory;
    WATableRow *_rowPaymentsHistory;
    WATableRow *_rowChatSearch;
    long long _numberOfStarredMessages;
    WATableSection *_sectionSettings;
    WATableRow *_rowMute;
    WATableRow *_rowAppearance;
    WATableRow *_rowNotificationTone;
    WATableRow *_rowSaveIncoming;
    WATableRow *_rowAdminSettings;
    WATableSection *_sectionPrivacy;
    WATableRow *_rowEphemeralityStatus;
    WATableRow *_rowEncryptionStatus;
    WATableSection *_sectionInvitedParticipants;
    WATableRow *_showMoreInvitedParticipantsRow;
    WALabelAndButtonHeaderView *_invitedParticipantsSectionHeaderView;
    NSMutableArray *_invitedParticipants;
    NSMutableSet *_invitesPendingRemoval;
    WATableSection *_sectionParticipants;
    WALabelAndButtonHeaderView *_participantsSectionHeaderView;
    WATableRow *_rowAddParticipants;
    WATableRow *_rowGroupInviteLink;
    double _participantsRowHeight;
    WAMutableDictionary *_aboutMessages;
    WATableSection *_sectionChatActions;
    WATableRow *_rowExportChat;
    WATableRow *_rowClearChat;
    WATableSection *_sectionDestructiveActions;
    WAGroupCreationFooterView *_groupCreationView;
    WATableRow *_rowExitDeleteGroup;
    WATableRow *_rowReportSpam;
    WABlocklistAlertManager *_blocklistAlertManager;
    _Bool _presentWithGroupDescriptionExpanded;
    _Bool _presentEphemeralitySettings;
    _Bool _tableViewSetupInProgress;
    _Bool _chatContainsMessages;
    _Bool _canShowReadonlyGroupWarning;
    struct WAGroupInfoUIStates _uiStates;
    id <WAGroupInfoViewControllerDelegate> _delegate;
    WAGroupParticipantsController *_participantsController;
    WAUserJID *_superAdminJID;
    unsigned long long _numberOfAdmins;
    UIBarButtonItem *_originalBackButton;
}

- (void).cxx_destruct;
- (void)addIcon:(id)arg1 toTableViewCell:(id)arg2;
- (void)chatStorageDidUpdateChatSessions:(id)arg1;
- (void)contactsStorageDidUpdateContactsOrStatus:(id)arg1;
- (id)controller:(id)arg1 didRequestCellForParticipant:(id)arg2 dequeuedForIndex:(long long)arg3 state:(id)arg4;
- (void)controller:(id)arg1 didRequestSelectGroupParticipant:(id)arg2 state:(id)arg3 sourceView:(id)arg4;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerDidDeleteObjectsAtIndexes:(id)arg1;
- (void)controllerDidInsertObjectsAtIndexes:(id)arg1;
- (id)controllerDidRequestPendingAccessoryView:(id)arg1;
- (id)controllerDidRequestUpdatedSupplementaryTopRows:(id)arg1;
- (void)controllerDidUpdateObjectsAtIndexes:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak id <WAGroupInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didExpireGroupInvites:(id)arg1;
- (void)editProfilePicture:(id)arg1;
- (void)groupDescriptionTableViewCellDidChangeHeight:(id)arg1;
- (void)handleMediaManagerDidChangeContentNotification:(id)arg1;
- (void)handleStarredMessageUpdatedNotification:(id)arg1;
- (id)initWithGroupChatSession:(id)arg1;
- (id)initWithGroupChatSession:(id)arg1 delegate:(id)arg2;
- (void)locationSharingEndDateChanged:(id)arg1;
- (void)locationSharingParticipantsChanged:(id)arg1;
- (void)messageNotificationCenterDidUpdateMuteConfig:(id)arg1;
- (void)nameDirectoryDidInvalidateSomeNames:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContactWithoutDismiss:(id)arg2 sourceView:(id)arg3;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
@property(nonatomic) _Bool presentEphemeralitySettings; // @synthesize presentEphemeralitySettings=_presentEphemeralitySettings;
@property(nonatomic) _Bool presentWithGroupDescriptionExpanded; // @synthesize presentWithGroupDescriptionExpanded=_presentWithGroupDescriptionExpanded;
- (void)searchParticipantsAction:(id)arg1;
- (void)shareGroupAction:(id)arg1;
- (void)showLockedGroupAlert;
- (void)subjectEditViewController:(id)arg1 didFinishWithText:(id)arg2;
- (void)subjectEditViewControllerDidCancel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)textInputController:(id)arg1 didFinishWithText:(id)arg2;
- (void)textInputControllerDidCancel:(id)arg1;
- (void)transactionDidProcessMessages:(id)arg1;
- (void)updateArchiveRelatedUI:(id)arg1;
- (void)updateNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)wa_fontSizeDidChange;

// Remaining properties
@property(readonly, nonatomic) WAGroupJID *chatJID; // @dynamic chatJID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

