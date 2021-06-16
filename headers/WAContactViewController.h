//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAPictureContainerViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WACatalogSectionHandlerDelegate-Protocol.h"
#import "WAContactCardItemTableViewCellDelegate-Protocol.h"
#import "WANewContactViewControllerDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"
#import "WAPaymentFlowViewControllerType-Protocol.h"
#import "WAShareContactViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, WAAggregateCallEventOld, WABizDetailsVerificationLevelCell, WABizInfoTableRow, WABizProfile, WABlocklistAlertManager, WACatalogSectionHandler, WAContact, WAMediaBrowserMediaManager, WAName, WAShopsBizProfilePreviewHeaderView, WATableRow, WATableSection, WAUserJID;

@interface WAContactViewController : WAPictureContainerViewController <WAPaymentFlowViewControllerType, UITableViewDataSource, UITableViewDelegate, WAContactCardItemTableViewCellDelegate, WANewContactViewControllerDelegate, WAParticipantPickerViewControllerDelegate, WAShareContactViewControllerDelegate, WACatalogSectionHandlerDelegate>
{
    WATableRow *_rowLabels;
    NSMutableArray *_sections;
    WATableSection *_sectionContactName;
    WATableRow *_rowContactName;
    WATableRow *_rowAbout;
    WATableSection *_sectionCallEvents;
    WATableRow *_rowCallEvents;
    WATableSection *_sectionUnkownContactActions;
    WATableRow *_rowContactCards;
    WATableRow *_rowCreateNewContact;
    WATableRow *_rowAddToExistingContact;
    WATableSection *_sectionMedia;
    WATableRow *_rowMediaStripe;
    WATableRow *_rowMediaLinksDocs;
    WATableRow *_rowStarredMessages;
    WATableRow *_rowPaymentsHistory;
    WATableRow *_rowChatSearch;
    WAMediaBrowserMediaManager *_mediaManager;
    long long _numberOfStarredMessages;
    WATableSection *_sectionSettings;
    WATableRow *_rowMute;
    WATableRow *_rowAppearance;
    WATableRow *_rowNotificationTone;
    WATableRow *_rowSaveIncoming;
    long long _numberOfGroupsInCommon;
    WATableSection *_sectionGroupsInCommon;
    WATableRow *_rowGroupsInCommon;
    WATableSection *_sectionContactDetails;
    WATableSection *_sectionActions;
    WATableRow *_rowExportChat;
    WATableRow *_rowShareContact;
    WATableRow *_rowClearChat;
    WATableSection *_sectionLiveLocation;
    WATableRow *_rowLiveLocation;
    _Bool _currentUserIsSharingLocation;
    _Bool _partnerIsSharingLocation;
    WATableSection *_sectionBlockContact;
    WATableRow *_rowBlockUnblockContact;
    WATableRow *_rowReportContact;
    WATableSection *_sectionPrivacy;
    WATableRow *_rowEphemeralityStatus;
    WATableRow *_rowEncryptionStatus;
    WATableSection *_sectionMultiDevice;
    WATableRow *_rowDeviceInfo;
    NSArray *_vCardSuggestions;
    WAName *_bizNameEntry;
    int _bizRefetchCounter;
    WABizProfile *_bizProfile;
    WATableSection *_sectionBizInfo;
    WATableSection *_sectionShops;
    WABizDetailsVerificationLevelCell *_verificationLevelCell;
    WATableRow *_rowBizVLevel;
    WATableRow *_rowBizDetails;
    WABizInfoTableRow *_rowBizDescription;
    WAShopsBizProfilePreviewHeaderView *_shopsHeaderView;
    WACatalogSectionHandler *_catalogSectionHandler;
    long long _source;
    WAUserJID *_userJID;
    WABlocklistAlertManager *_blocklistAlertManager;
    _Bool _verifyBizOnLoadIfNeeded;
    _Bool _chatContainsMessages;
    _Bool _isBiz;
    WAAggregateCallEventOld *_aggregateCallEvent;
    WAContact *_contact;
}

- (void).cxx_destruct;
- (id)actionCellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (_Bool)addBizDescriptionRowIfNeeded;
- (_Bool)addBizDetailsActionRowIfNeeded;
- (_Bool)addBizInfoSectionIfNeeded;
- (void)addIcon:(id)arg1 toTableViewCell:(id)arg2;
- (id)addSection;
- (void)addShopsProductsPreviewSectionIfNeeded;
- (void)addUnknownContactDataToExistingContact;
@property(retain, nonatomic) WAAggregateCallEventOld *aggregateCallEvent; // @synthesize aggregateCallEvent=_aggregateCallEvent;
- (void)bizProfileDidUpdate:(id)arg1;
- (void)blockContactAndReport:(_Bool)arg1 fromBlockDialog:(_Bool)arg2;
- (void)blockedContactsListDidChange;
- (void)blockedContactsListDidChange:(id)arg1;
- (void)callContactWithJID:(id)arg1 withVideo:(_Bool)arg2;
- (_Bool)canLoadForContext:(id)arg1;
- (void)catalogSectionHandler:(id)arg1 addSection:(id)arg2;
- (void)catalogSectionHandler:(id)arg1 didCreateRow:(id)arg2 atIndex:(long long)arg3;
- (void)catalogSectionHandler:(id)arg1 didCreateSection:(id)arg2;
- (id)catalogSectionHandlerCurrentSections:(id)arg1;
- (double)catalogSectionHandlerHeaderWidth:(id)arg1;
@property(nonatomic) _Bool chatContainsMessages; // @synthesize chatContainsMessages=_chatContainsMessages;
- (void)clearChat;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (void)contactsStorageDidUpdateContacts:(id)arg1;
- (void)createBizInfoSection;
- (id)createShopsSection;
- (void)deleteRow:(id)arg1 updateTableView:(_Bool)arg2;
- (void)deleteSection:(id)arg1 updateTableView:(_Bool)arg2;
- (void)editAction:(id)arg1;
- (void)ephemeralitySettingChanged:(id)arg1;
- (void)exportChatFromTableViewCell:(id)arg1;
- (void)fetchBizProfileIfNeeded;
- (id)getShopsCellBackgroundView;
- (void)handleMediaManagerDidChangeContentNotification:(id)arg1;
- (void)handleStarredMessageUpdatedNotification:(id)arg1;
- (id)identifier;
- (id)initWithContact:(id)arg1 source:(long long)arg2;
- (id)initWithUserJID:(id)arg1 source:(long long)arg2;
- (long long)insertBizProductCatalogSectionInSectionsArray;
- (void)insertRow:(id)arg1 atIndexPath:(id)arg2 updateTableView:(_Bool)arg3;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2 updateTableView:(_Bool)arg3;
- (void)invalidateNumberOfGroupsInCommon;
- (void)invalidateNumberOfStarredMessages;
@property(nonatomic) _Bool isBiz; // @synthesize isBiz=_isBiz;
@property(readonly, nonatomic, getter=isContactBlocked) _Bool contactBlocked;
- (_Bool)isProfileWithShop;
- (_Bool)isShopButtonInContactCardEnabled;
- (void)jumpToInChatSearch;
- (void)loadMediaManagerIfNeeded;
- (void)loadNumberOfGroupsInCommonIfNeededAndUpdateSections:(_Bool)arg1 updateTableView:(_Bool)arg2;
- (void)loadNumberOfStarredMessagesIfNecessary;
- (void)locationSharingEndDateChanged:(id)arg1;
- (void)locationSharingParticipantsChanged:(id)arg1;
- (void)logAddVerifiedNameToContacts;
- (void)logShopsStorefrontEntryEvent:(id)arg1 entryPoint:(long long)arg2;
- (void)messageButtonTappedInContactCardItemCell:(id)arg1;
- (void)messageContactWithJID:(id)arg1;
- (void)nameDirectoryDidInvalidateSomeNames:(id)arg1;
- (void)newContactController:(id)arg1 didRequestContactViewControllerForJID:(id)arg2;
- (void)newContactController:(id)arg1 didSaveContact:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)openEphemeralSettings;
- (void)openStorefrontWithLoggingEntryPoint:(long long)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPickerRequestedCreateNewContact:(id)arg1;
- (void)presentContactsDeletedEducationUI;
- (void)presentDisabledAddressBookViewController;
- (void)presentEditAndSaveScreenForContact:(id)arg1;
- (void)presentSecurityInfoAlert:(id)arg1;
- (void)presentSecurityInfoAlertForInAppSupport;
- (void)presentSecurityInfoAlertWithTitle:(id)arg1 message:(id)arg2 url:(id)arg3;
- (void)promptToBlockOrUnblockContact;
- (void)promptToCallOrMessageJID:(id)arg1 phoneNumber:(id)arg2;
- (void)promptToChangeChatSessionSetting;
- (void)promptToChangeEphemeralitySettingSettings;
- (void)promptToChangeSaveIncomingMediaSettings;
- (void)promptToMuteOrUnmuteChat;
- (void)promptToReportContactAndBlockFromBlockDialog:(_Bool)arg1;
- (void)promptToSelectCustomNotificationTone;
- (void)registerWhatsAppNotifications;
- (void)reloadBizNameRow;
- (void)reloadContactDetailsSectionAndUpdateTableView:(_Bool)arg1;
- (void)reloadDataRefetchingCurrentContact;
- (void)reloadDataWithContact:(id)arg1 andUpdateUI:(_Bool)arg2;
- (_Bool)removeBizDescriptionRow;
- (_Bool)removeBizDetailsActionRow;
- (_Bool)removeBizProfileSectionsIfNeeded;
- (void)reportClearChatAction;
- (void)reportContact;
- (void)requestEphemeralitySettingChange:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;
- (void)saveUnknownContactDataAsNewContact;
- (void)setLiveLocationSectionVisible:(_Bool)arg1 updateTableView:(_Bool)arg2;
- (void)setSuggestedContactCards:(id)arg1;
@property(nonatomic) _Bool verifyBizOnLoadIfNeeded; // @synthesize verifyBizOnLoadIfNeeded=_verifyBizOnLoadIfNeeded;
- (void)setupTableView;
- (void)shareContact;
- (void)shareContactViewController:(id)arg1 didFinishWithVCard:(id)arg2;
- (id)shareContactViewControllerConfirmationButtonTitle:(id)arg1;
- (void)shareContactViewControllerDidCancel:(id)arg1;
- (void)shopSeeAllTapped;
- (void)shopsButtonTappedInContactCardItemCell:(id)arg1;
- (id)shopsHeaderView;
- (_Bool)shouldLogEntryPointEvent;
- (void)showAlertText:(id)arg1;
- (void)showBizDetailsViewControllerWithProfile:(id)arg1 vNameInfo:(id)arg2;
- (void)showBlockedContactWarning:(id)arg1;
- (void)showClearChatActionSheet;
- (_Bool)showContactDetailsSection;
- (void)showContactsDeletedEducationIfNecessary;
- (void)showIdentityVerificationScreen;
- (_Bool)showLiveLocation;
- (void)showSMBUpsellInterstitial;
- (_Bool)showShareContactRow;
- (void)startLoadingUIWithCancelHandler:(CDUnknownBlockType)arg1 context:(id)arg2;
- (void)stopLoadingUIForContext:(id)arg1;
- (void)stopLoadingUIForContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)transactionDidProcessMessages:(id)arg1;
- (void)unblockContact;
- (void)updateAppearanceOfAboutRow;
- (void)updateAppearanceOfChatHistoryActionCells;
- (void)updateAppearanceOfContactCardsRow;
- (void)updateAppearanceOfContactNameRow;
- (void)updateArchiveRelatedUI:(id)arg1;
- (void)updateBizDescriptionRow;
- (void)updateBizDetailsActionRow;
- (void)updateBizInfoSectionWithProfile:(id)arg1;
- (void)updateBlockUnblockRowAppearance;
- (void)updateGroupsInCommonRowIndication;
- (void)updateLiveLocationIndication;
- (void)updateLiveLocationSenders;
- (void)updateMediaCountIndication;
- (void)updateMuteIndication;
- (void)updateMuteTimeoutWithDate:(id)arg1;
- (void)updateNavigationBar;
- (void)updateNotificationToneIndication;
- (void)updateSaveEphemeralitySettingIndication;
- (void)updateSaveIncomingMediaSettingIndication;
- (void)updateStarredMessagesCountIndication;
- (void)updateUIForIsBizIfNeeded;
- (void)verifiedNameDidUpdate:(id)arg1;
- (void)videoCallButtonTappedInContactCardItemCell:(id)arg1;
- (void)viewAllMedia;
- (void)viewContactCards;
- (void)viewContactDetails;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewGroupsInCommon;
- (void)viewLocations;
- (void)viewPaymentsHistory;
- (void)viewStarredMessages;
- (void)viewWillAppear:(_Bool)arg1;
- (void)voiceCallButtonTappedInContactCardItemCell:(id)arg1;
- (void)wa_fontSizeDidChange;

// Remaining properties
@property(readonly, nonatomic) WAUserJID *chatJID; // @dynamic chatJID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
