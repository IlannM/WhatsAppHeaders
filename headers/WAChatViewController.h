//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAChatMessagesViewController.h"

#import "UIDropInteractionDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WAAutoCompleteSelectorViewDelegate-Protocol.h"
#import "WAChatBarCameraPluginDelegate-Protocol.h"
#import "WAChatBarDelegate-Protocol.h"
#import "WAChatBarHelperDelegate-Protocol.h"
#import "WAChatBarMenuPluginDelegate-Protocol.h"
#import "WAChatBarShareContactPluginDelegate-Protocol.h"
#import "WAChatBarShareDocumentPluginDelegate-Protocol.h"
#import "WAChatBarShareLocationPluginDelegate-Protocol.h"
#import "WAChatSessionNotificationViewDelegate-Protocol.h"
#import "WAConversationHeaderViewDelegate-Protocol.h"
#import "WADraggablePopUpViewControllerDelegate-Protocol.h"
#import "WAGIFSearchViewControllerDelegate-Protocol.h"
#import "WAGroupInfoViewControllerDelegate-Protocol.h"
#import "WAMentionsSelectorViewDelegate-Protocol.h"
#import "WAMessageSearchPreparingTextControllerDelegate-Protocol.h"
#import "WAMultiSendMediaPickerControllerDelegate-Protocol.h"
#import "WAMultiSendPreviewViewControllerDelegate-Protocol.h"
#import "WANavigationControllerPushAnimating-Protocol.h"
#import "WANavigationItemCustomBackButtonTitle-Protocol.h"
#import "WANotificationsPresentationParticipant-Protocol.h"
#import "WAPttComponentDelegate-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"
#import "WAStatusViewerViewControllerDelegate-Protocol.h"
#import "WAStickerSearchViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSNumber, NSString, NSUserActivity, UIGestureRecognizer, UIImageView, UIImpactFeedbackGenerator, UITapGestureRecognizer, UIView, WABlocklistAlertManager, WACatalogForwarder, WAChatBar, WAChatBarCameraPlugin, WAChatBarHelper, WAChatBarShareContactPlugin, WAChatBarShareLocationPlugin, WAChatPromptBannerController, WAChatSearchBar, WAChatSession, WAChatSessionNotificationView, WAConversationHeaderView, WAMentionsSelectorView, WAMessage, WAMessageBubbleTableViewCell, WAMessageSearchPreparingTextController, WAName, WAPlaceholderViewEventLogger, WAProgressAlertController, WAPttComponent, WAScrollToBottomButton, WAScrollToNextCatchUpButton, WASearchResultsController, WAUserJID, WAViewControllerConnectionObserver;
@protocol UIViewControllerPreviewing, WAQuickReplyHelper;

@interface WAChatViewController : WAChatMessagesViewController <WANavigationControllerPushAnimating, WAChatSessionNotificationViewDelegate, WAChatBarDelegate, WAGIFSearchViewControllerDelegate, WAMentionsSelectorViewDelegate, WAStickerSearchViewControllerDelegate, WADraggablePopUpViewControllerDelegate, WAAutoCompleteSelectorViewDelegate, UIGestureRecognizerDelegate, WAMultiSendMediaPickerControllerDelegate, WAMultiSendPreviewViewControllerDelegate, WAConversationHeaderViewDelegate, WAGroupInfoViewControllerDelegate, WASearchResultsControllerDelegate, UISearchBarDelegate, WAMessageSearchPreparingTextControllerDelegate, UIDropInteractionDelegate, WAStatusViewerViewControllerDelegate, WAChatBarCameraPluginDelegate, WAChatBarShareDocumentPluginDelegate, WAChatBarShareContactPluginDelegate, WAChatBarShareLocationPluginDelegate, WANotificationsPresentationParticipant, UIViewControllerPreviewingDelegate, WANavigationItemCustomBackButtonTitle, WAChatBarMenuPluginDelegate, WAChatBarHelperDelegate, WAPttComponentDelegate>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    WAMentionsSelectorView *_mentionsSelectorView;
    NSArray *_vCardMessagesForUnknownContact;
    _Bool _showingShareMyContactChatUI;
    long long _suspiciousChatType;
    _Bool _hasOutgoingMessagesInMaybeSuspiciousChat;
    _Bool _hasOutgoingMessagesAfterSpamBlockShown;
    WABlocklistAlertManager *_blocklistAlertManager;
    _Bool _didShowKeyboard;
    long long _preventAdjustContentOffsetOnChatBarBottomInsetChangeCounter;
    WAScrollToBottomButton *_scrollToMostRecentButton;
    WAScrollToNextCatchUpButton *_scrollToNextCatchUpButton;
    UITapGestureRecognizer *_scrollDownOverridingGesture;
    _Bool _canMakeActiveWhenPartiallyLoaded;
    NSMutableArray *_messagesAddedWhileInactive;
    _Bool _needsBulkSendReadReceiptsForRecentMessages;
    _Bool _swipeToDetailsInProgress;
    _Bool _alwaysRequireSwipeToDetailsToSucceed;
    WAMessageBubbleTableViewCell *_messageCellForSwipeToDetails;
    UIView *_messageCellForSwipeToDetailsSnapshot;
    WAViewControllerConnectionObserver *_connectionObserver;
    WAConversationHeaderView *_headerView;
    id <UIViewControllerPreviewing> _profilePicturePreviewingContext;
    double _initialViewDidAppearTimestamp;
    _Bool _refetchedBizProfile;
    WAPttComponent *_pttComponent;
    UIGestureRecognizer *_swipeToReplyGesture;
    _Bool _swipeToReplyActivated;
    WAMessageBubbleTableViewCell *_messageCellForSwipeToReply;
    double _initialForwardButtonAlpha;
    UIImageView *_replyImageView;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    _Bool _sending;
    _Bool _cancelExportRequested;
    NSMutableArray *_mediaItems;
    WAProgressAlertController *_exportProgressController;
    WASearchResultsController *_inChatSearchResultsController;
    UIView *_originalNavBarTitleView;
    NSMutableArray *_messageMatches;
    long long _currentInChatSearchResultIndex;
    unsigned long long _searchUpdateIndex;
    WAChatSearchBar *_searchBar;
    NSNumber *_totalCountOfSearchTermMatches;
    _Bool _needsEnterChatSearchModeOnAppear;
    UIView *_chatSearchDatePickerInputView;
    WAMessageSearchPreparingTextController *_searchPreparingTextController;
    WAChatSessionNotificationView *_notificationView;
    _Bool _notificationIsDisappearing;
    int _newestUnavailablePlaceholderSort;
    WAName *_newNumberName;
    WAName *_oldNumberName;
    _Bool _isOldChatSession;
    _Bool _needsDescriptionNUXUntilDisappear;
    WAMessage *_lastCatchUpMessage;
    long long _displayMessagesForCatchUpCount;
    NSMutableArray *_messagesForCatchUp;
    _Bool _needsUpdateGroupCatchUpMessagesForVisibleCells;
    id _chatPromptBannerController;
    int _featureOptions;
    NSMutableArray *_messageNavigationStack;
    NSUserActivity *_userActivity;
    _Bool _preloaded;
    _Bool _groupCallButtonDisabledDueToGroupInfo;
    WACatalogForwarder *_catalogForwarder;
    int _initialUnreadSort;
    NSMutableSet *_autoplayMessageSortHistory;
    _Bool _alreadyLogPlaceholderViewEvent;
    WAPlaceholderViewEventLogger *_placeholderViewEventLogger;
    _Bool _isKeyboardVisibleBeforeTransitionToNewSize;
    _Bool _hasSetToPreviewMode;
    _Bool _highlightsFirstVisibleMessageInitially;
    _Bool _showKeyboardOnAppear;
    _Bool _ignoreUnsentTextOnDisappear;
    _Bool _hasTextFromURL;
    _Bool _openedFromURL;
    _Bool _showingEphemeralNUX;
    WAChatSession *_chatSession;
    WAMessage *_highlightedMessage;
    WAMessage *_firstVisibleMessage;
    WAChatBar *_chatBar;
    WAChatBarCameraPlugin *_cameraPlugin;
    WAChatBarShareLocationPlugin *_shareLocationPlugin;
    WAChatBarShareContactPlugin *_shareContactPlugin;
    WAChatBarHelper *_inputViewHelper;
    id <WAQuickReplyHelper> _quickReplyHelper;
    double _openChatStartTime;
    NSArray *_chatPreviewActionItems;
}

+ (_Bool)canFetchMessagesAsynchronously;
+ (_Bool)canViewMessageInfo;
+ (unsigned long long)chatMessagesControllerOptions;
+ (id)currentlyActiveChatSessionJID;
+ (_Bool)usesEstimatedRowHeights;
+ (_Bool)willTruncateMediaAt:(id)arg1 uploadingOnly:(unsigned long long *)arg2;
- (void).cxx_destruct;
- (void)acionContinueConversionWithBusinessWithJID:(id)arg1;
- (void)actionAddToContactsWithJID:(id)arg1;
- (void)actionBlockContactWithJID:(id)arg1 showingBasicConfirmation:(_Bool)arg2;
- (void)actionReportChatAsSpamWithJID:(id)arg1;
- (void)actionUnblockContactWithJID:(id)arg1;
- (void)activateSearchBarCancelButton;
- (void)addObserverForChatBarNotification;
- (_Bool)allowSwipeToDetailsToComplete:(id)arg1;
- (_Bool)allowsReplyInChatToMessage:(id)arg1;
- (_Bool)allowsReplyPrivatelyToMessage:(id)arg1;
- (void)animateAlongsideSizeTransition;
- (void)animatePopFromMessageInfoTransition:(id)arg1;
- (void)animatePushToMessageInfoTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)announceSearchMatches;
- (void)appendPotentialMessagesForCatchUp:(id)arg1 andIncrementScrollToBottom:(unsigned long long)arg2;
- (void)applicationCallDidBecomeVideo:(id)arg1;
- (void)applicationCallDidBecomeVoice:(id)arg1;
- (void)applicationCallDidEnd:(id)arg1;
- (void)applicationCallDidStart:(id)arg1;
- (void)applicationDidDismissCallScreen:(id)arg1;
- (void)applicationWillPresentCallScreen:(id)arg1;
- (id)attributedStringByPrependingTopTierBusinessNameIfNeededForJID:(id)arg1 toAttributedString:(id)arg2 font:(id)arg3;
- (void)autoCompleteSelectorView:(id)arg1 willBecomeHidden:(_Bool)arg2;
- (id)backButtonForGroupInfoViewController:(id)arg1;
- (id)backButtonItemTitleForViewController:(id)arg1;
- (void)blockedContactsListDidChange:(id)arg1;
- (unsigned long long)bottomPanelModeForController:(id)arg1;
- (id)bottomTextForSpamReportCell;
- (CDUnknownBlockType)bottomTextLinkHandlerForSpamReportCell;
- (id)bottomViewDuringTransitionReturningVisibleHeight:(double *)arg1;
- (struct CGRect)boundsForVLevelImageOfSize:(struct CGSize)arg1 font:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestScrollToQuotedMessage:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 swipeGestureDidChange:(id)arg2;
- (void)businessCallButtonTapped:(id)arg1;
- (id)buttonActionsForShareMyContactCell;
- (id)buttonActionsForSpamReportCell;
- (long long)buttonRowsCountForReportShareMyContactPromptCardCell;
- (long long)buttonRowsCountForReportSpamPromptCardCell;
- (void)callButtonTapped:(id)arg1;
@property(retain, nonatomic) WAChatBarCameraPlugin *cameraPlugin; // @synthesize cameraPlugin=_cameraPlugin;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canInterruptUser;
- (void)cancelInChatSearch;
- (void)cancelInChatSearch:(id)arg1;
- (void)catalogButtonTapped:(id)arg1;
- (id)catalogForwarder;
- (id)changeNumberNotificationTitle;
@property(readonly, nonatomic) WAChatBar *chatBar; // @synthesize chatBar=_chatBar;
- (_Bool)chatBar:(id)arg1 canMentionUserJID:(id)arg2;
- (void)chatBar:(id)arg1 composeMessageWithImage:(id)arg2 caption:(id)arg3 editable:(_Bool)arg4;
- (void)chatBar:(id)arg1 didCancelPTTRecordingByUser:(_Bool)arg2 recordingLocked:(_Bool)arg3;
- (void)chatBar:(id)arg1 didChangeChatViewControllerInputViewToView:(id)arg2;
- (void)chatBar:(id)arg1 didDownloadWebPreviewGIFWithFileURL:(id)arg2 isVideo:(_Bool)arg3;
- (void)chatBar:(id)arg1 didDownloadWebPreviewImageWithFileURL:(id)arg2;
- (void)chatBar:(id)arg1 didEditMentionInRange:(struct _NSRange)arg2;
- (void)chatBar:(id)arg1 didEndPTTRecordingByInterruption:(_Bool)arg2 recordingLocked:(_Bool)arg3;
- (void)chatBar:(id)arg1 didPasteGIFData:(id)arg2 forURL:(id)arg3;
- (void)chatBar:(id)arg1 didPasteImages:(id)arg2;
- (void)chatBar:(id)arg1 didRequestPresentActionSheet:(id)arg2;
- (void)chatBar:(id)arg1 didRequestPresentProgressAlertController:(id)arg2;
- (void)chatBar:(id)arg1 didRequestScrollToFirstMessageOnDate:(id)arg2;
- (void)chatBar:(id)arg1 didRequestScrollToQuotedMessage:(id)arg2;
- (void)chatBar:(id)arg1 didSelectGIFMediaItem:(id)arg2 withGIFThumbnailImageView:(id)arg3;
- (void)chatBar:(id)arg1 didSelectGIFSearchWithPreloadedGIFs:(id)arg2;
- (void)chatBar:(id)arg1 didSelectManagedSticker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)chatBar:(id)arg1 didUpdateKeyboardHeight:(double)arg2;
- (_Bool)chatBar:(id)arg1 sendInterruptedPTTRecording:(id)arg2;
- (void)chatBar:(id)arg1 userDidSubmitText:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)chatBarCameraPlugin:(id)arg1 sendMediaItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)chatBarDidBeginPTTRecording:(id)arg1;
- (void)chatBarDidChangeText:(id)arg1;
- (void)chatBarDidLockPTTRecording:(id)arg1;
- (void)chatBarDidPlayInterruptedPttRecording:(id)arg1;
- (void)chatBarDidRequestUnableToRecordPTTAlert:(id)arg1;
- (void)chatBarDidSelectMessageAdmin:(id)arg1;
- (void)chatBarDidSelectStickerSearch:(id)arg1;
- (void)chatBarDidSelectStickerStore:(id)arg1;
- (void)chatBarDidStopEditingMention:(id)arg1;
- (void)chatBarHelper:(id)arg1 dismissActionSheetCancelled:(_Bool)arg2;
- (void)chatBarHelper:(id)arg1 showActionSheet:(id)arg2 sourceView:(id)arg3;
- (void)chatBarHelper:(id)arg1 showBlockedContactWarning:(id)arg2 forUserJID:(id)arg3;
- (void)chatBarMenuPluginDisableShareTooltips:(id)arg1;
- (void)chatBarMenuPluginDismissKeyboardIfNeeded:(id)arg1;
- (void)chatBarMenuPluginStartPaymentFlow:(id)arg1;
- (void)chatBarShareContactPlugin:(id)arg1 didSelectContacts:(id)arg2 withParticipantPicker:(id)arg3;
- (void)chatBarShareContactPlugin:(id)arg1 presentAddressBookPermissionsScreenWithTitle:(id)arg2;
- (void)chatBarShareContactPlugin:(id)arg1 sendVCard:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)chatBarShareContactPlugin:(id)arg1 showUploadFailedFileTooLargeWithItemCount:(long long)arg2;
- (void)chatBarShareDocumentPlugin:(id)arg1 proceedToSendDocumentAttachments:(id)arg2;
- (void)chatBarShareDocumentPluginDidCancel:(id)arg1;
- (void)chatBarShareLocationPlugin:(id)arg1 sendMessageContainingPlace:(id)arg2 liveLocationEndDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)chatBarShouldBeginPTTRecording:(id)arg1;
- (_Bool)chatBarShouldInterruptPTTRecordingWhenDetachedFromWindow:(id)arg1;
- (_Bool)chatBarShouldTrackMentions:(id)arg1;
- (void)chatBarWantsToAttachMedia:(id)arg1;
- (void)chatBarWantsToPresentCamera:(id)arg1;
- (double)chatBarWillEndPTTRecording:(id)arg1;
- (void)chatListViewControllerDidEndSearchNotification:(id)arg1;
- (void)chatListViewControllerWillBeginSearchNotification:(id)arg1;
- (void)chatMessagesTableViewDidLayout:(id)arg1;
@property(copy, nonatomic) NSArray *chatPreviewActionItems; // @synthesize chatPreviewActionItems=_chatPreviewActionItems;
@property(readonly, nonatomic) WAChatPromptBannerController *chatPromptBannerController;
@property(readonly, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (void)chatSessionNotificationControllerNeedsDismissedKeyboard:(id)arg1;
- (void)chatSessionNotificationControllerNeedsUpdatedHeight:(id)arg1;
- (void)chatSessionNotificationViewDidDismiss:(id)arg1;
- (void)chatSessionNotificationViewWasTapped:(id)arg1;
- (void)chatStorageDidDisplayChatSessionRemotely:(id)arg1;
- (void)chatStorageDidRevokeMessages:(id)arg1;
- (void)chatStorageDidUpdateChatSessions:(id)arg1;
- (void)checkActiveState;
- (void)checkAndOpenURL:(id)arg1 forMessage:(id)arg2 shouldShowPreviewAlert:(_Bool)arg3;
- (void)cleanUpAfterPopFromMessageInfo;
- (void)cleanUpAfterPushToMessageInfo;
- (void)clearAllFromCatchUpMessages;
- (void)clearAttachments;
- (void)composeMessageWithUneditableImage:(id)arg1 caption:(id)arg2;
- (void)configureMentionsSelectorView;
- (void)configureReportSpamCell:(id)arg1;
- (void)configureShareMyContactCell:(id)arg1;
- (void)configureVCardMatchCellButtons:(id)arg1 vCards:(id)arg2;
- (double)contentHeightForChatCellData:(id)arg1;
- (id)copyFileToTemporaryURL:(id)arg1;
- (id)createAdditionalChatBarPlugins;
- (id)createProfilePictureViewController;
- (long long)currentUnreadCount;
- (void)debug_showMovieFileInfoAtURL:(id)arg1;
- (void)didDeleteMessagesInChatSession:(id)arg1;
- (void)didHighlightMessage:(id)arg1 inCellData:(id)arg2;
- (void)didInvalidateSomeNameDirectoryNames;
- (void)didLoadLaterMessages;
- (void)didSendMessageFromChatBarWithCompletion:(CDUnknownBlockType)arg1;
- (void)didUpdateTableViewContentInset;
- (void)dismissKeyboardIfNeeded;
- (void)dismissViewController:(id)arg1 withGesture:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)draggableInputView:(id)arg1 didChangeBottomInsetWithAnimationDuration:(double)arg2 animationCurve:(long long)arg3;
- (void)draggableInputViewDidShowKeyboard:(id)arg1;
- (void)draggablePopUpViewControllerWillDismiss:(id)arg1;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)earliestMessageDateForChatBar:(id)arg1;
- (void)editModeDidChange;
- (void)ephemeralitySettingChanged:(id)arg1;
- (void)fetchMessagesBeyondCursor:(int)arg1 count:(long long)arg2 inChronologicalOrder:(_Bool)arg3 completeAlbumInReverseDirection:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)finishTransitionWithContext:(id)arg1;
@property(retain, nonatomic) WAMessage *firstVisibleMessage; // @synthesize firstVisibleMessage=_firstVisibleMessage;
- (id)firstVisibleMessageForChatBar:(id)arg1;
- (double)footerInset;
- (void)forwardMessage:(id)arg1 inCellData:(id)arg2;
- (void)forwardMessagesInCellData:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gifSearchViewController:(id)arg1 didSelectGIF:(id)arg2;
- (void)groupCallButtonTapped:(id)arg1;
- (void)groupInfoViewController:(id)arg1 setBackButton:(id)arg2;
- (void)handleDroppedFiles:(id)arg1;
- (void)handleDroppedImages:(id)arg1 videos:(id)arg2;
- (void)handleExternalMultiSendMediaItem:(id)arg1 forURL:(id)arg2 fromPasteboard:(_Bool)arg3;
- (void)handleExternalMultiSendMediaItems:(id)arg1 editable:(_Bool)arg2 url:(id)arg3 caption:(id)arg4 fromPasteboard:(_Bool)arg5;
- (void)handleImages:(id)arg1 caption:(id)arg2 editable:(_Bool)arg3;
- (void)handleInteractiveReplyGesture:(id)arg1;
- (void)handlePastedGIFData:(id)arg1 forURL:(id)arg2;
- (void)handlePastedImages:(id)arg1;
- (void)handleSingleTapInBubbleTableViewCell:(id)arg1;
- (void)handleSwipeLeftGestureDidChange:(id)arg1 inBubbleTableViewCell:(id)arg2;
- (void)handleTableViewTap:(id)arg1;
- (void)handleUIForReportSpamWithError:(id)arg1;
- (void)handleUIForReportSpamWithJID:(id)arg1 error:(id)arg2 deleteChat:(_Bool)arg3;
- (void)handleWebPreviewGIFWithFileURL:(id)arg1 isVideo:(_Bool)arg2;
- (void)handleWebPreviewImageWithFileURL:(id)arg1;
- (_Bool)hasFiles:(id)arg1;
- (_Bool)hasMedia:(id)arg1;
@property(nonatomic) _Bool hasTextFromURL; // @synthesize hasTextFromURL=_hasTextFromURL;
@property(readonly, nonatomic) WAConversationHeaderView *headerView;
- (unsigned long long)headerViewBadgeTypeForChatSession:(id)arg1;
- (void)headerViewTapped:(id)arg1;
@property(retain, nonatomic) WAMessage *highlightedMessage; // @synthesize highlightedMessage=_highlightedMessage;
@property(nonatomic) _Bool highlightsFirstVisibleMessageInitially; // @synthesize highlightsFirstVisibleMessageInitially=_highlightsFirstVisibleMessageInitially;
@property(nonatomic) _Bool ignoreUnsentTextOnDisappear; // @synthesize ignoreUnsentTextOnDisappear=_ignoreUnsentTextOnDisappear;
- (id)initWithChatSession:(id)arg1;
- (id)initWithChatSession:(id)arg1 options:(int)arg2;
- (id)inputAccessoryView;
- (id)inputView;
@property(retain, nonatomic) WAChatBarHelper *inputViewHelper; // @synthesize inputViewHelper=_inputViewHelper;
- (void)interruptPTTRecordingIfNecessary;
- (_Bool)isChatWithBusiness;
- (_Bool)isChatWithBusinessWithCatalog;
- (_Bool)isChatWithBusinessWithShop;
- (_Bool)isChatWithEnterpriseClient;
- (_Bool)isFeatureEnabled:(int)arg1;
- (_Bool)isGroupCatchUpEnabled;
@property(readonly, nonatomic, getter=isInChatSearchMode) _Bool inChatSearchMode;
- (_Bool)isPerformingCustomPushAnimation;
- (_Bool)isPersistentNotificationSticky;
- (_Bool)isShowingSuspiciousChatUI;
- (_Bool)isSingleMessageReportableAsSpam;
- (_Bool)isSuspiciousChat;
- (_Bool)isTriggeredSuspiciousChat;
@property(readonly, nonatomic) WAUserJID *jidForVCardMatch;
- (void)jumpToFirstMessageMatchIfPossible;
- (void)jumpToFirstSearchTermMatch;
- (void)jumpToInChatSearchMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 withScrolling:(_Bool)arg3;
- (void)jumpToNextMessageForCatchUp:(id)arg1;
- (void)layoutNotificationAnimated:(_Bool)arg1;
- (void)layoutNotificationIfNecessary;
- (void)leaveGroup;
- (id)loadMessagesBeyondCursor:(int)arg1 count:(long long)arg2 inChronologicalOrder:(_Bool)arg3 hasMoreResults:(_Bool *)arg4 completeAlbumInReverseDirection:(_Bool)arg5 hasMoreResultsInReverseDirection:(_Bool *)arg6;
- (void)locationUpdateDidFail:(id)arg1;
- (void)lockPTTRecording;
- (void)logActionWithJID:(id)arg1 withType:(long long)arg2;
- (void)logProductMessageSentEvent:(id)arg1;
- (void)logShopsStorefrontEntryEvent;
- (id)makeAddToContactsButtonActionForUserJID:(id)arg1;
- (id)makeBlockButtonActionForUserJID:(id)arg1;
- (id)makeBlockReportComboButtonActionForUserJID:(id)arg1;
- (id)makeContinueConversionButtonAction:(id)arg1;
- (id)makeDismissButtonAction;
- (id)makeReportButtonActionForUserJID:(id)arg1;
- (id)makeShareMyContactButtonActionForUserJID:(id)arg1;
- (void)markChatAsTrusted;
- (void)mentionsSelectorView:(id)arg1 didSelectContactWithName:(id)arg2 jid:(id)arg3 forTextRange:(struct _NSRange)arg4;
- (void)messageGroupAdmin;
- (void)messageGroupAdmin:(id)arg1;
- (void)messageSearchPreparingTextControllerDidUpdateText:(id)arg1;
- (void)multiSendMediaPickerController:(id)arg1 didRequestAddContactWithDetails:(id)arg2;
- (void)multiSendMediaPickerController:(id)arg1 didRequestStartChatWithDetails:(id)arg2;
- (void)multiSendMediaPickerController:(id)arg1 didSelectGIFAtURL:(id)arg2;
- (void)multiSendMediaPickerController:(id)arg1 didSelectItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)multiSendMediaPickerControllerDidCancel:(id)arg1;
- (void)multiSendMediaPickerControllerDidTapGIF:(id)arg1;
- (void)multiSendMediaPickerControllerGIFDidFailBecauseOfNetworkError:(CDUnknownBlockType)arg1;
- (id)multiSendPreviewFromMediaItem:(id)arg1 origin:(unsigned long long)arg2;
- (void)multiSendPreviewViewController:(id)arg1 didConfirmItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)multiSendPreviewViewController:(id)arg1 didRequestAddContactWithDetails:(id)arg2;
- (void)multiSendPreviewViewControllerDidCancel:(id)arg1;
- (void)multiSendPreviewViewControllerDidRequestRetakePhoto:(id)arg1;
- (id)newFriendsLocationViewControllerDelegate;
- (id)newHeaderView;
- (void)nextSearchTermMatchButtonTappedInchatBar:(id)arg1;
- (void)noOpGestureHandler:(id)arg1;
@property(nonatomic) double openChatStartTime; // @synthesize openChatStartTime=_openChatStartTime;
- (void)openGIFSearch;
- (void)openGIFSearchWithPreloadedGIFs:(id)arg1;
- (void)openGimmickPicker;
- (_Bool)openPaymentTransactionDetailsFor:(id)arg1;
- (void)openStickerPickerForStarredStickers;
- (void)openStickerPickerForStickerPack:(id)arg1;
@property(nonatomic) _Bool openedFromURL; // @synthesize openedFromURL=_openedFromURL;
- (void)performInitialMessagesControllerSetUp;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (void)prepareToSearch;
- (void)prepareToStopRecording;
- (void)presentFailedToGetLocationAlertWithHandler:(CDUnknownBlockType)arg1;
- (id)presentMenuFromSliceView:(id)arg1 atPoint:(struct CGPoint)arg2 inCell:(id)arg3;
- (void)presentShareTooltip;
- (void)presentTurnOnLocationAlert;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previousSearchTermMatchButtonTappedInchatBar:(id)arg1;
- (void)profilePictureDidChange:(id)arg1;
- (void)profilePictureTapped:(id)arg1;
- (id)promptTextForShareMyContactCell;
- (id)promptTextForSpamReportCell;
- (void)promptToSelectGroupAdmin;
- (void)promptUserIfNecessaryToTruncateVideoAt:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)promptUserToSendMessageIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pttComponentDidFinishProcessingRecording:(id)arg1;
- (void)pttComponentDidStopRecording:(id)arg1;
- (_Bool)pttComponentHostWasOpenedFromURL:(id)arg1;
- (void)pttComponentWillSendRecording:(id)arg1;
- (id)pushAnimationControllerToViewController:(id)arg1;
- (id)pushAnimationInteractionControllerForMessageInfo;
- (id)pushAnimationInteractionControllerToViewController:(id)arg1;
@property(readonly, nonatomic) id <WAQuickReplyHelper> quickReplyHelper; // @synthesize quickReplyHelper=_quickReplyHelper;
- (void)reallyCancelInChatSearch;
- (void)recordShownIfNeededWithJID:(id)arg1;
- (void)recordUserActionIfNeededWithJID:(id)arg1 withType:(long long)arg2;
- (void)refreshBizProfileIfNeeded;
- (void)registerForWhatsAppNotifications;
- (void)reloadAll;
- (void)reloadAndScrollToMessage:(id)arg1 scrollUp:(_Bool)arg2;
- (void)reloadMessagesController;
- (void)reloadMessagesControllerAtMessage:(id)arg1;
- (void)reloadMessagesForCatchUp;
- (void)reloadProfilePictureInNavigationBar;
- (void)removeNotificationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replyInChatToMessage:(id)arg1;
- (void)replyPrivatelyToMessage:(id)arg1;
- (void)reportChatAsSpamAndDelete:(_Bool)arg1;
- (id)reportIndividualChatAsSpamActionSheetMessage;
- (void)reportMessageAsSpam:(id)arg1;
- (id)reportSpamCell;
- (void)resetChatViewControllerInputView;
- (void)resetMessageMatches;
- (void)restoreSavedInput;
- (void)saveNewJID:(id)arg1 forContactWithOldJID:(id)arg2;
- (void)scrollDownButtonTapped:(id)arg1;
- (void)scrollToMessage:(id)arg1 fromMessage:(id)arg2 pushingOnStack:(_Bool)arg3 highlightMessages:(id)arg4;
@property(readonly, nonatomic) WAScrollToBottomButton *scrollToMostRecentButton;
@property(readonly, nonatomic) WAScrollToNextCatchUpButton *scrollToNextCatchUpButton;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)searchBarForChatBar:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchForMatchingVCardsIfNeeded;
- (void)searchResultsController:(id)arg1 didCountSearchTermMatches:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (_Bool)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned long long)arg2;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (_Bool)searchResultsControllerShouldReloadData:(id)arg1;
- (_Bool)searchResultsControllerShouldSearchPushNamesForChatsSection:(id)arg1;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (void)sendDocumentAttachments:(id)arg1;
- (void)sendGIFVideoAtURL:(id)arg1 caption:(id)arg2 contentProvider:(long long)arg3 interactiveAnnotations:(id)arg4;
- (void)sendMediaItems:(id)arg1 pickerStatistics:(id)arg2 clearChatBar:(_Bool)arg3;
- (void)setCTWAContext:(id)arg1;
- (void)setHighlightingForTerms:(id)arg1;
- (void)setNeedsEnterChatSearchModeOnAppear;
- (void)setPausedSessionState;
- (void)setPrefilledText:(id)arg1;
@property(retain, nonatomic) WAChatBarShareContactPlugin *shareContactPlugin; // @synthesize shareContactPlugin=_shareContactPlugin;
@property(retain, nonatomic) WAChatBarShareLocationPlugin *shareLocationPlugin; // @synthesize shareLocationPlugin=_shareLocationPlugin;
@property(nonatomic) _Bool showKeyboardOnAppear; // @synthesize showKeyboardOnAppear=_showKeyboardOnAppear;
- (void)setShowingShareMyContactChatUI:(_Bool)arg1 updateMessagesController:(_Bool)arg2;
- (void)setShowingSuspiciousChatUI:(long long)arg1 updateMessagesController:(_Bool)arg2;
- (void)setToPreviewMode;
- (void)setUpNavigationBarTitle;
- (id)shareMyContactCell;
- (double)shareMyContactCellPreferredHeightForWidth:(double)arg1;
- (void)shopsButtonTapped:(id)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (_Bool)shouldHideBackButton;
- (_Bool)shouldLogShopsButtonTappedEvent;
- (_Bool)shouldOfferAddToContactsForMessage:(id)arg1;
- (_Bool)shouldPresentPersistentNotificationForChangeNumber;
- (_Bool)shouldPresentPersistentNotificationForGroupDescription;
- (_Bool)shouldPresentPersistentNotificationForUnavailableMessages;
- (_Bool)shouldShowProfilePicture;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)showActionSheetForChangeNumberNotificationWithOldJID:(id)arg1 newJID:(id)arg2;
- (void)showActionSheetForGroupMemberJoinMessage:(id)arg1;
- (void)showAlertText:(id)arg1;
- (void)showBlockOrReportActionSheetForUserJID:(id)arg1;
- (void)showGroupParticipantsForInitialGroupCall:(id)arg1;
- (void)showInfoForMessage:(id)arg1;
- (void)showTooltipIfNeeded;
- (id)snapshotOfVisiblePortionOfView:(id)arg1;
- (double)spamCellPreferredHeightForWidth:(double)arg1;
- (unsigned long long)spamReportOrigin;
- (void)startAnimationOnAllVisibleStickersIfNeeded_previewAnimation:(_Bool)arg1 animateIndefinitely:(_Bool)arg2;
- (void)startInChatSearch;
- (void)startPTTRecording;
- (void)startPaymentFlowWithQuotedItem:(id)arg1;
- (void)statusViewerViewController:(id)arg1 muteOrUnmuteChatSession:(id)arg2;
- (void)statusViewerViewControllerDeletePreviewedMessage:(id)arg1;
- (void)stickerSearchViewController:(id)arg1 didRequestPresentActionSheet:(id)arg2;
- (void)stickerSearchViewController:(id)arg1 didSelectManagedSticker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stickerSearchViewControllerDidRequestOpenStickerStore:(id)arg1;
- (void)stopAnimationOnAllVisibleStickersIfNeeded;
- (double)tableViewTopContentInset;
- (id)titleForPreviewHeader;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transactionDidProcessMessages:(id)arg1;
- (void)transactionDidReplaceChatSession:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)transitionToShowingOnlyMostRecentMessagesIfNeeded;
- (void)twoFactorNagDidDisappear:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateButtonsOnGroupInfoChange:(_Bool)arg1;
- (void)updateButtonsOnPTTStatusChange;
- (void)updateChatBarMode;
- (void)updateChatBarUI;
- (void)updateCurrentInChatSearchIndexAfterScrollingToBottom;
- (void)updateCurrentInChatSearchIndexAfterUserScrolling;
- (void)updateGroupCatchUpMessagesForVisibleCells;
- (void)updateHeaderView;
- (void)updateMentionsSelectorViewLayoutWithAnimationCurve:(long long)arg1 animationDuration:(double)arg2;
- (void)updatePersistentNotificationContent:(unsigned long long)arg1;
- (void)updatePersistentNotificationIfNecessaryAnimated:(_Bool)arg1;
- (void)updateScrollToActionButtonsAndIncrementMostRecentBy:(long long)arg1;
- (void)updateSelectorViewLayout:(id)arg1 animationCurve:(long long)arg2 animationDuration:(double)arg3;
- (void)updateSelectorViewsForSizeTransition;
- (void)updateShowingShareMyContactChatUIIfNeededAndUpdateMessagesController:(_Bool)arg1;
- (void)updateShowingSuspiciousChatUIIfNeededAndUpdateMessagesController:(_Bool)arg1 withNewMessages:(_Bool)arg2;
- (void)updateSuspiciousChatOnNewMessages:(_Bool)arg1;
- (void)updateSuspiciousChatPromptBanner;
- (void)updateTitleViewTapability;
- (void)updateTotalMatchesCountIfAllResultsAreLoaded;
- (void)updateUserPresence;
- (void)updateWithAddedNonSystemMessagesAnimated:(_Bool)arg1;
- (id)vCardMatchCell;
- (void)videoCallButtonTapped:(id)arg1;
- (void)viewBroadcastListInfo;
- (void)viewContactInfoForUserJID:(id)arg1;
- (id)viewControllerPresentingInputView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
	- (void)viewDidLoad;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)viewGroupInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)wa_applicationDidBecomeActive;
- (void)wa_applicationDidEnterBackground;
- (void)wa_applicationWillEnterForeground;
- (_Bool)wa_defersNotificationsWhenPresented;
- (_Bool)wa_isBeingPreviewed;
- (id)wa_previewActionItems;
- (_Bool)wa_shouldDeferAlertNotification;
- (void)willAppendMessages:(id)arg1;
- (void)willPrependMessages:(id)arg1;
- (id)willSelectTableViewCellAtIndexPath:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)xmppConnectionChatStateDidChange:(id)arg1;
- (void)xmppConnectionPresenceDidChange:(id)arg1;
- (void)xmppConnectionStateDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
