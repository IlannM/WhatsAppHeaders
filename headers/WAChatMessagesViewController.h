//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "EKEventEditViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WACalloutViewPresenterDelegate-Protocol.h"
#import "WAChatMessagesControllerDelegate-Protocol.h"
#import "WAChatMessagesTableViewDelegate-Protocol.h"
#import "WAGroupInviteJoinControllerDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WAMessageBubbleTableViewCellDelegate-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"
#import "WANewContactViewControllerDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"
#import "WAReplyButtonsCellViewModelDelegate-Protocol.h"
#import "WAShareContactViewControllerDelegate-Protocol.h"
#import "WAStickerPackViewControllerDelegate-Protocol.h"
#import "WATableViewCellPreviewingDelegate-Protocol.h"
#import "WAVCardMessagePreviewActionDelegate-Protocol.h"
#import "_TtP14MainAppLibrary35WAListMessageViewControllerDelegate_-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSSet, NSString, UIBarButtonItem, UILabel, UIToolbar, UIView, WABlocklistAlertManager, WAChatCellData, WAChatMessagesTableView, WAChatPromptCardCell, WAGroupInviteJoinController, WAMessage, WAMessageBubbleTableViewCell, WAMessagePresenterHelper, WAMultiSendMediaItem, WAPaymentBaseHandler, WAProgressAlertController, WAUserJID, WAVCardMatchCell, WAWallpaperView, WAWeakTimer;
@protocol UIViewControllerAnimatedTransitioning, WABlurredBackgroundProviding, WAChatMessagesControllerProtocol;

@interface WAChatMessagesViewController : WAViewController <WANewContactViewControllerDelegate, WAParticipantPickerViewControllerDelegate, WAShareContactViewControllerDelegate, UIViewControllerTransitioningDelegate, EKEventEditViewDelegate, WAGroupInviteJoinControllerDelegate, _TtP14MainAppLibrary35WAListMessageViewControllerDelegate_, WAMessageBubbleTableViewCellDelegate, WAStickerPackViewControllerDelegate, WAChatMessagesControllerDelegate, WATableViewCellPreviewingDelegate, WAVCardMessagePreviewActionDelegate, UIViewControllerAnimatedTransitioning, WAImageToImageTransitioning, WANavigationControllerPopToAnimating, WAReplyButtonsCellViewModelDelegate, WAChatMessagesTableViewDelegate, UITableViewDataSource, WACalloutViewPresenterDelegate>
{
    _Bool _hasEarlierMessages;
    _Bool _hasMoreRecentMessages;
    UIView *_previewHeader;
    unsigned long long _transitionType;
    id <UIViewControllerAnimatedTransitioning> animatedTransition;
    double _tableViewBottomBannerContentInset;
    NSNumber *_needsScrollToTargetWithAnimation;
    _Bool _needsRebuildMessagesControllerSections;
    long long _countOfInsertedIndexPaths;
    _Bool _didInsertBottomPanel;
    _Bool _isTableUpdatingContent;
    _Bool _needsScrollToTargetAfterTableUpdates;
    WAChatCellData *_savedOffsetReferenceCellData;
    double _savedOffsetReferenceCellDataRelativeOffset;
    long long _infiniteScrollingCounter;
    _Bool _ignoreUnreadDividerOnScrollToTargetAfterTableUpdates;
    _Bool _needsInitialMessagesControllerSetUp;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIToolbar *_editModeToolbar;
    WAChatCellData *_cellDataForMenuPresenter;
    unsigned long long _currentPasteboardContentType;
    WAMessage *_messageForMenuPresenter;
    WAGroupInviteJoinController *_groupInviteJoinController;
    _Bool _labelIsChanging;
    _Bool _needsReloadForLabelChange;
    WAProgressAlertController *_progressAlertController;
    NSArray *_selectedChatCellDataObjects;
    WAMessage *_messageToScrollTo;
    _Bool _needsHighlightMessageToScrollTo;
    NSArray *_messagesToHighlightAfterScrollingEnds;
    UIBarButtonItem *_starBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    UIBarButtonItem *_shareBarButtonItem;
    UIBarButtonItem *_deleteBarButtonItem;
    UIBarButtonItem *_editModeTitleBarButtonItem;
    UILabel *_editModeTitleBarButtonItemLabel;
    _Bool _didEverLayout;
    _Bool _isPreservingScrollPosition;
    WAWallpaperView *_wallpaperView;
    WABlocklistAlertManager *_blocklistAlertManager;
    _Bool _scrollingToQuotedMessage;
    _Bool _performingUserInitiatedScrolling;
    WAMessagePresenterHelper *_helper;
    id <WAChatMessagesControllerProtocol> _messagesController;
    WAChatMessagesTableView *_tableView;
    WAPaymentBaseHandler *_currentPaymentHandler;
    CDUnknownBlockType _nfmCompletionBlock;
    unsigned long long _editMode;
    WAChatPromptCardCell *_reportSpamCell;
    WAVCardMatchCell *_vCardMatchCell;
    WAChatPromptCardCell *_shareMyContactCell;
    WAMessage *_messageForAnimatedTransition;
    WAMessageBubbleTableViewCell *_mediaMessageCellForAnimatedTransition;
    UIView *_gifThumbnailImageViewForAnimatedTransition;
    WAMultiSendMediaItem *_selectedGIFForAnimatedTransition;
    CDUnknownBlockType _bizNameRequestCompletion;
    WAUserJID *_maybeBizToVerifyJID;
    WAWeakTimer *_activityIndicatorMaxDisplayTimer;
    NSMutableArray *_deferredOperationsForScrolling;
    struct CGPoint _gifThumbnailCenterForAnimatedTransition;
}

+ (_Bool)automaticallyAdjustsTableViewContentInsets;
+ (_Bool)canFetchMessagesAsynchronously;
+ (_Bool)canViewMessageInfo;
+ (unsigned long long)chatMessagesControllerOptions;
+ (_Bool)isEditModeSupported;
+ (Class)messageBubbleTableViewCellClass;
+ (_Bool)needsWallpaper;
+ (_Bool)preservesContentAlongBottomEdgeAfterRotation;
+ (_Bool)scrollsToBottomInitially;
+ (_Bool)usesEstimatedRowHeights;
- (void).cxx_destruct;
- (id)actionSheetForAddressInLink:(id)arg1;
- (id)actionSheetForDateInLink:(id)arg1;
- (id)actionSheetForMailtoURLInLink:(id)arg1;
- (id)actionSheetForMentionInLink:(id)arg1;
- (id)actionSheetForPaymentUPIHandleLink:(id)arg1;
- (id)actionSheetForPhoneNumberInLink:(id)arg1;
- (id)actionSheetForWebURLInLink:(id)arg1;
@property(retain, nonatomic) WAWeakTimer *activityIndicatorMaxDisplayTimer; // @synthesize activityIndicatorMaxDisplayTimer=_activityIndicatorMaxDisplayTimer;
- (void)addMessagesToTheBottom:(id)arg1 firstUnreadMessage:(id)arg2 updateMessages:(id)arg3 totalUnreadCount:(long long)arg4 animated:(_Bool)arg5 dividerBehavior:(unsigned long long)arg6 allowScrolling:(_Bool)arg7 searchResultMessageID:(id)arg8 skipAlbumCreation:(_Bool)arg9;
- (void)addToAddressBookUnknownSenderWithJID:(id)arg1;
- (void)addToContactsSenderOfMessageInBubbleTableViewCell:(id)arg1;
- (void)addToContactsSenderOfMessageInCellData:(id)arg1 verifiedName:(id)arg2;
- (void)addVCardContact:(id)arg1 toContact:(id)arg2;
- (void)addVCardContactToExistingContact:(id)arg1;
- (void)addVCardContactToExistingContact:(id)arg1 withPreviewAction:(id)arg2;
- (void)addVCardContactToExistingContactIfPossible:(id)arg1;
- (id)albumViewControllerForMessage:(id)arg1 inCellData:(id)arg2;
- (id)allSelectedChatCellDataObjects;
- (id)allSelectedMessages;
- (_Bool)allowsReplyInChatToMessage:(id)arg1;
- (_Bool)allowsReplyPrivatelyToMessage:(id)arg1;
- (void)animateAlongsideSizeTransition;
- (void)animatePopFromMediaAlbumTransition:(id)arg1 isSwipingDown:(_Bool)arg2;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)applicationURLForGmailFromMailtoURL:(id)arg1;
- (id)applicationURLForInboxFromMailtoURL:(id)arg1;
- (id)applicationURLForOutlookFromMailtoURL:(id)arg1;
- (void)beginDisablingInfiniteScrolling;
- (void)bizNameRequestCompleted:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType bizNameRequestCompletion; // @synthesize bizNameRequestCompletion=_bizNameRequestCompletion;
- (void)blockContactWithJID:(id)arg1 origin:(unsigned long long)arg2 showingBasicConfirmation:(_Bool)arg3;
- (unsigned long long)bottomPanelModeForController:(id)arg1;
- (id)bottomViewDuringTransitionReturningVisibleHeight:(double *)arg1;
- (id)bubbleTableViewCell:(id)arg1 didReceiveLongPressOnSliceView:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)bubbleTableViewCell:(id)arg1 didRequestEmbeddedPlayerForAdReplyInfoInMessage:(id)arg2 fromThumbView:(id)arg3;
- (void)bubbleTableViewCell:(id)arg1 didRequestEmbeddedPlayerForMessage:(id)arg2 fromThumbView:(id)arg3;
- (void)bubbleTableViewCell:(id)arg1 didRequestHandleCatalogURL:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestHandleLink:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestHandlePhoneURL:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestHandleStickerPackURL:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestHandleWebsiteURL:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestInviteContact:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestMessageContact:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestNativeFlowForMessage:(id)arg2 buttonDescriptor:(id)arg3;
- (void)bubbleTableViewCell:(id)arg1 didRequestOpenAlbumAtMessage:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestOpenProduct:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestOpenQuotedChatSession:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestOpenURLForExternalAdReplyInfoInMessage:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestSaveContact:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestScrollToQuotedMessage:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestShowAllContacts:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestShowOptionsForLink:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestViewBusinessContact:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestViewInviteForMessage:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestViewListForListMessage:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestViewOrderForMessage:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 didRequestViewProduct:(id)arg2;
- (void)bubbleTableViewCell:(id)arg1 swipeGestureDidChange:(id)arg2;
- (void)bubbleTableViewCellDidAcceptCollectRequest:(id)arg1;
- (void)bubbleTableViewCellDidAcceptPayment:(id)arg1;
- (void)bubbleTableViewCellDidChangePlaybackRate:(id)arg1 rate:(double)arg2;
- (void)bubbleTableViewCellDidDeclineCollectRequest:(id)arg1;
- (void)bubbleTableViewCellDidInvalidateLayout:(id)arg1;
- (void)bubbleTableViewCellDidRequestStartNetworkTransfer:(id)arg1;
- (void)bubbleTableViewCellDidRequestStartPlayback:(id)arg1;
- (void)bubbleTableViewCellDidRequestStopLocationSharing:(id)arg1;
- (void)bubbleTableViewCellDidRequestStopNetworkTransfer:(id)arg1;
- (void)bubbleTableViewCellDidRequestStopPlayback:(id)arg1;
- (void)bubbleTableViewCellDidSendAgainPayment:(id)arg1;
- (void)bubbleTableViewCellDidSendPayment:(id)arg1;
- (void)bubbleTableViewCellDidSetUpPaymentAccount:(id)arg1;
- (void)callUserJIDs:(id)arg1 groupJID:(id)arg2 inGroup:(_Bool)arg3 withVideo:(_Bool)arg4;
- (void)calloutViewPresenterDidFinish:(id)arg1;
- (_Bool)canAnimateChangesForChatMessagesController:(id)arg1;
@property(readonly, nonatomic) _Bool canInterruptUser;
- (_Bool)canLoadForContext:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancelFadeOutDateBubbles;
- (void)chatMessagesTableViewDidLayout:(id)arg1;
- (void)chatMessagesTableViewWillLayout:(id)arg1;
- (void)chatStorageDidDeleteMessages:(id)arg1;
- (void)chatStorageDidRevokeMessages:(id)arg1;
- (void)checkAndOpenURL:(id)arg1 forMessage:(id)arg2 shouldShowPreviewAlert:(_Bool)arg3;
- (void)clearMessagesController;
- (void)clearSavedContentOffset;
- (id)completeAlbumFromMessage:(id)arg1 inChronologicalOrder:(_Bool)arg2 hasMoreResults:(_Bool *)arg3;
- (double)contentHeightForChatCellData:(id)arg1;
- (void)controller:(id)arg1 didInsertIndexPaths:(id)arg2;
- (void)controller:(id)arg1 didInsertSections:(id)arg2;
- (void)controller:(id)arg1 didReloadIndexPaths:(id)arg2;
- (void)controller:(id)arg1 didRemoveIndexPaths:(id)arg2;
- (void)controller:(id)arg1 didRemoveSections:(id)arg2;
- (void)controller:(id)arg1 didUpdateGroupingStateForMessageAtIndexPath:(id)arg2;
- (void)controller:(id)arg1 needsConfigureInsertedChatCellData:(id)arg2;
- (_Bool)controller:(id)arg1 shouldRemoveMessage:(id)arg2;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerDidInsertBottomPanel:(id)arg1;
- (void)controllerDidRequestRebuildAllSections:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1 animated:(_Bool)arg2;
- (struct CGPoint)correctContentOffsetForOverscroll:(struct CGPoint)arg1;
- (id)createChatMessagesControllerWithOptions:(unsigned long long)arg1;
- (void)createEventFromTextCheckingResult:(id)arg1;
- (id)currentBottomVisibleMessage;
@property(retain, nonatomic) WAPaymentBaseHandler *currentPaymentHandler; // @synthesize currentPaymentHandler=_currentPaymentHandler;
@property(readonly, nonatomic) long long currentUnreadCount;
@property(readonly, nonatomic) int cursorForLoadEarlierMessages;
@property(readonly, nonatomic) int cursorForLoadLaterMessages;
@property(readonly, nonatomic) unsigned long long defaultEditMode;
- (id)defaultPreviewActionsForAlbumChatCellData:(id)arg1;
- (id)defaultPreviewActionsForMessage:(id)arg1;
@property(retain, nonatomic) NSMutableArray *deferredOperationsForScrolling; // @synthesize deferredOperationsForScrolling=_deferredOperationsForScrolling;
- (void)deleteFocusedMessageInBubbleTableViewCell:(id)arg1;
- (void)deleteMessage:(id)arg1 inCellData:(id)arg2;
- (void)deleteMessages:(id)arg1 forceConfirmation:(_Bool)arg2;
- (void)deleteMessagesInBubbleTableViewCell:(id)arg1;
- (void)deleteMessagesInCellData:(id)arg1;
- (void)deleteSelectedMessages:(id)arg1;
- (void)deselectAllMessagesAndUpdateCells;
- (void)didDeclineCollectRequestForMessage:(id)arg1;
- (void)didDeleteMessagesInChatSession:(id)arg1;
- (void)didFailToDownloadMediaInMessage:(id)arg1 presentAlert:(_Bool)arg2 error:(id)arg3;
- (void)didFailToUploadMediaInMessage:(id)arg1 error:(id)arg2;
- (void)didHighlightMessage:(id)arg1 inCellData:(id)arg2;
- (void)didInvalidateSomeNameDirectoryNames;
- (void)didLoadEarlierMessages;
- (void)didLoadLaterMessages;
- (void)didRelayHSMReplyToWebClient:(id)arg1;
- (void)didUpdateMediaProgressOfMessage:(id)arg1;
- (void)didUpdateMessage:(id)arg1;
- (void)didUpdateMessageInChatCellData:(id)arg1 atIndexPath:(id)arg2;
- (void)didUpdateMessagesTableAfterControllerDidChangeContent;
- (void)didUpdateTableViewContentInset;
- (void)dismissBizNameLoadingIndicatorIfNeeded;
- (void)dismissKeyboardIfNeeded;
- (void)displayDateDidUpdate:(id)arg1;
- (void)doneEditing:(id)arg1;
@property(readonly, nonatomic) unsigned long long editMode; // @synthesize editMode=_editMode;
- (void)editModeDidChange;
- (void)endDisablingInfiniteScrolling;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)fadeInDateBubblesWithAnimation:(_Bool)arg1;
- (void)fadeOutDateBubbles;
- (void)fadeOutDateBubblesAfterDelay;
- (void)fadeOutDateBubblesImmediately;
- (void)fadeOutDateBubblesWithAnimation:(_Bool)arg1;
- (void)fetchMessagesBeyondCursor:(int)arg1 count:(long long)arg2 inChronologicalOrder:(_Bool)arg3 completeAlbumInReverseDirection:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)finishTransitionWithContext:(id)arg1;
@property(readonly, nonatomic) double footerInset;
- (void)forwardFocusedMessageInBubbleTableViewCell:(id)arg1;
- (void)forwardMessage:(id)arg1 inCellData:(id)arg2;
- (void)forwardMessages:(id)arg1;
- (void)forwardMessagesInBubbleTableViewCell:(id)arg1;
- (void)forwardMessagesInCellData:(id)arg1;
- (void)forwardSelectedMessages:(id)arg1;
- (struct CGRect)frameForMessageInCell:(id)arg1;
@property(nonatomic) struct CGPoint gifThumbnailCenterForAnimatedTransition; // @synthesize gifThumbnailCenterForAnimatedTransition=_gifThumbnailCenterForAnimatedTransition;
@property(retain, nonatomic) UIView *gifThumbnailImageViewForAnimatedTransition; // @synthesize gifThumbnailImageViewForAnimatedTransition=_gifThumbnailImageViewForAnimatedTransition;
- (void)groupInviteJoinControllerDidFinish:(id)arg1;
- (void)handleButtonsMessageUpdate:(id)arg1;
- (void)handleCurrentLocaleChange:(id)arg1;
- (void)handleFutureProofProcessingComplete:(id)arg1;
- (id)handleLongPressOnSliceView:(id)arg1 atPoint:(struct CGPoint)arg2 inCell:(id)arg3;
- (void)handleMessageUpdated:(id)arg1;
- (void)handleMessageUpdatedNotification:(id)arg1;
- (void)handleSignificantServerTimeShiftChange:(id)arg1;
- (void)handleSignificantTimeChange:(id)arg1;
- (void)handleSingleTapInBubbleTableViewCell:(id)arg1;
- (void)handleSingleTapInBubbleTableViewCellForListMessage:(id)arg1;
- (void)handleSingleTapSelectionInBubbleTableViewCell:(id)arg1 forMessage:(id)arg2;
- (void)handleTapOnAlertButtonForAlbumCellData:(id)arg1;
- (void)handleTapOnAlertButtonForCellData:(id)arg1;
- (void)handleTapOnAlertButtonInBubbleTableViewCell:(id)arg1;
- (void)handleTapOnBizRoleInfoButtonInBubbleTableViewCell:(id)arg1;
- (void)handleTapOnEphemeralInfoButtonInBubbleTableViewCell:(id)arg1;
- (void)handleTapOnForwardButtonInBubbleTableViewCell:(id)arg1;
- (void)handleTapOnSearchButtonForImageInBubbleTableViewCell:(id)arg1;
- (void)handleTapOnSearchButtonForTextInBubbleTableViewCell:(id)arg1;
- (void)handleTapOnSearchButtonForUrlInBubbleTableViewCell:(id)arg1;
- (void)handler:(id)arg1 didFailWithError:(id)arg2;
- (void)handler:(id)arg1 didFailWithUserAction:(long long)arg2;
- (void)handlerDidSucceed:(id)arg1;
@property(nonatomic) _Bool hasEarlierMessages; // @synthesize hasEarlierMessages=_hasEarlierMessages;
@property(nonatomic) _Bool hasMoreRecentMessages; // @synthesize hasMoreRecentMessages=_hasMoreRecentMessages;
@property(readonly, nonatomic) WAMessagePresenterHelper *helper; // @synthesize helper=_helper;
- (void)hideActivityIndicator:(CDUnknownBlockType)arg1;
- (void)highlightMessages:(id)arg1;
@property(copy, nonatomic) NSSet *highlightedTerms;
- (id)identifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)internalContentHeightForChatCellData:(id)arg1;
- (void)inviteVCardContact:(id)arg1;
- (_Bool)isDeferringOperationsForScrolling;
- (_Bool)isInfiniteScrollingEnabled;
- (_Bool)isMessageEligibleForQuickReply:(id)arg1;
@property(readonly, nonatomic, getter=isPerformingUserInitiatedScrolling) _Bool performingUserInitiatedScrolling; // @synthesize performingUserInitiatedScrolling=_performingUserInitiatedScrolling;
- (_Bool)isSingleMessageReportableAsSpam;
- (_Bool)isTableViewCellSufficientlyVisibleToParticipateInTransition:(id)arg1;
- (void)jumpToChatWithPresenter:(id)arg1;
- (void)jumpToChatWithSenderOfMessageInBubbleTableViewCell:(id)arg1;
- (void)jumpToChatWithSenderOfMessagesInCellData:(id)arg1;
- (void)labelMessageInBubbleTableViewCell:(id)arg1;
- (void)listMessageViewControllerWithVc:(id)arg1 didTapSendItem:(id)arg2 fromListMessage:(id)arg3;
- (void)loadBarButtonItems;
- (void)loadEarlierMessagesIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadEarlierOrLaterMessagesIfNeeded;
- (void)loadLaterMessagesIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)loadMessagesBeyondCursor:(int)arg1 count:(long long)arg2 inChronologicalOrder:(_Bool)arg3 hasMoreResults:(_Bool *)arg4 completeAlbumInReverseDirection:(_Bool)arg5 hasMoreResultsInReverseDirection:(_Bool *)arg6;
- (void)loadToolbarAndBarButtonItems;
- (void)locationStorageEndDateDidChange:(id)arg1;
@property(readonly, nonatomic) double maximumContentOffsetY;
@property(retain, nonatomic) WAUserJID *maybeBizToVerifyJID; // @synthesize maybeBizToVerifyJID=_maybeBizToVerifyJID;
- (void)mediaDownloadDidFail:(id)arg1;
@property(retain, nonatomic) WAMessageBubbleTableViewCell *mediaMessageCellForAnimatedTransition; // @synthesize mediaMessageCellForAnimatedTransition=_mediaMessageCellForAnimatedTransition;
- (void)mediaProgressDidChange:(id)arg1;
- (void)mediaUploadDidFail:(id)arg1;
- (id)mediaViewerViewControllerForMediaInMessage:(id)arg1;
- (void)menuCalloutViewPresenterDidHideMenu:(id)arg1;
- (void)messageAdminForQuotedMessage:(id)arg1;
@property(retain, nonatomic) WAMessage *messageForAnimatedTransition; // @synthesize messageForAnimatedTransition=_messageForAnimatedTransition;
- (void)messageVCardContact:(id)arg1 withPreviewAction:(id)arg2;
- (void)message_addToContacts:(id)arg1;
- (void)message_copy:(id)arg1;
- (void)message_delete:(id)arg1;
- (void)message_deleteAll:(id)arg1;
- (void)message_forward:(id)arg1;
- (void)message_forwardAll:(id)arg1;
- (void)message_pauseSpeaking:(id)arg1;
- (void)message_replyInChat:(id)arg1;
- (void)message_replyPrivately:(id)arg1;
- (void)message_reportSpam:(id)arg1;
- (void)message_saveAllMedia:(id)arg1;
- (void)message_saveMedia:(id)arg1;
- (void)message_sendMessage:(id)arg1;
- (void)message_showID:(id)arg1;
- (void)message_showInfo:(id)arg1;
- (void)message_showSystemMessage:(id)arg1;
- (void)message_showUnicode:(id)arg1;
- (void)message_smbAddQuickReply:(id)arg1;
- (void)message_smbSetLabels:(id)arg1;
- (void)message_star:(id)arg1;
- (void)message_startSpeaking:(id)arg1;
- (void)message_unstar:(id)arg1;
- (void)message_viewStickerPack:(id)arg1;
@property(readonly, nonatomic) id <WAChatMessagesControllerProtocol> messagesController; // @synthesize messagesController=_messagesController;
- (void)nameDirectoryDidInvalidateSomeNames:(id)arg1;
- (void)newContactController:(id)arg1 didRequestContactViewControllerForJID:(id)arg2;
- (void)newContactController:(id)arg1 didSaveContact:(id)arg2;
- (id)newEventForTextCheckingResult:(id)arg1 withStore:(id)arg2;
- (id)newFriendsLocationViewControllerDelegate;
@property(copy, nonatomic) CDUnknownBlockType nfmCompletionBlock; // @synthesize nfmCompletionBlock=_nfmCompletionBlock;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)openGimmickPicker;
- (void)openMapForAddressString:(id)arg1 message:(id)arg2;
- (void)openNoviFinancialInstrumentDetailsFor:(id)arg1;
- (void)openNoviHub;
- (void)openNoviLoginWithCompletion:(CDUnknownBlockType)arg1;
- (void)openNoviReportTransactionHandlerFor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)openPaymentTransactionDetailsFor:(id)arg1;
- (void)openStickerPickerForStarredStickers;
- (void)openStickerPickerForStickerPack:(id)arg1;
- (void)openStickerStoreForStickerPack:(id)arg1;
- (void)openTransactionDetailsFor:(id)arg1;
- (struct UIEdgeInsets)overlayInsetsForCalloutViewPresenter:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPickerRequestedCreateNewContact:(id)arg1;
- (void)performActionForLearnMoreLinkInBubbleTableViewCell:(id)arg1;
- (void)performActionForLink:(id)arg1 inMessage:(id)arg2;
- (void)performBlockWhenNotAnimatingScroll:(CDUnknownBlockType)arg1;
- (void)performInitialMessagesControllerSetUp;
- (void)performInitialMessagesControllerSetUpIfNeeded;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (void)prepareNewEventFromDateCheckingResult:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentAddressBookPermissionsScreenWithTitle:(id)arg1;
- (void)presentAlbumInCellData:(id)arg1 atMessage:(id)arg2 usingCustomTransition:(_Bool)arg3;
- (void)presentContactsInVCardMessage:(id)arg1 forJID:(id)arg2;
- (void)presentDocumentInMessage:(id)arg1;
- (void)presentGroupInviteFromMessage:(id)arg1;
- (void)presentMapLocationInMessage:(id)arg1;
- (void)presentMediaInBubbleTableViewCell:(id)arg1;
- (id)presentMenuFromSliceView:(id)arg1 atPoint:(struct CGPoint)arg2 inCell:(id)arg3;
- (void)presentMessageInMediaViewer:(id)arg1;
- (void)presentOrderDetailForMessage:(id)arg1;
- (void)presentPaymentInfoForMessage:(id)arg1;
- (void)presentProductListForListMessage:(id)arg1;
- (void)presentProductMessage:(id)arg1 thumbnailData:(id)arg2 mediaPath:(id)arg3;
- (void)presentProductWithDescriptor:(id)arg1;
- (void)presentSingleSelectListForListMessage:(id)arg1;
- (void)presentSuspiciousLinkAlert:(id)arg1;
- (void)presentUnknownContactScreenForDataInLink:(id)arg1;
- (void)presentUnknownContactScreenForSenderOfMessage:(id)arg1 verifiedName:(id)arg2;
- (void)presentWebURLInMessage:(id)arg1;
- (unsigned long long)presentationContextForBubbleTableViewCell:(id)arg1;
- (void)preserveScrollPositionAfterPerformingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIView *previewHeader;
- (void)previewingContext:(id)arg1 inTableViewCell:(id)arg2 commitViewController:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForData:(id)arg2 inTableViewCell:(id)arg3;
- (void)productListMessageIntegrityInfoDidUpdate:(id)arg1;
- (void)promptToChooseVCardContact:(id)arg1;
- (void)promptToDeleteMessages:(id)arg1 inCellDataIfNeeded:(id)arg2;
- (void)promptToDeleteMessagesInCellDataIfNeeded:(id)arg1;
- (void)promptToForwardMessages:(id)arg1 inCellDataIfNeeded:(id)arg2;
- (void)promptToForwardMessagesInCellDataIfNeeded:(id)arg1;
- (void)promptToSaveVCardContact:(id)arg1;
- (void)reallyPreserveScrollPositionAfterPerformingBlock:(CDUnknownBlockType)arg1;
- (void)rebuildMessagesControllerSectionsIfNeeded;
- (void)registerForWhatsAppNotifications;
- (void)reloadAfterFontSizeDidChange;
- (void)reloadAll;
- (void)reloadCellsWithUpdatedGroupInvites;
- (void)reloadMessagesController;
- (void)reloadMessagesControllerAtMessage:(id)arg1;
- (void)reloadTableView;
- (void)reloadTableViewAfterExpandingMessageBubble;
- (void)replyButtonCellDidSelectButtonMessageWithButtonData:(id)arg1 forMessage:(id)arg2;
- (void)replyButtonsCellDidSelectHSMWithButtonData:(id)arg1 buttonIndex:(unsigned int)arg2 forMessage:(id)arg3;
- (void)replyInChatToMessage:(id)arg1;
- (void)replyInChatToMessageInBubbleTableViewCell:(id)arg1;
- (void)replyPrivatelyToMessage:(id)arg1;
- (void)replyPrivatelyToMessage:(id)arg1 inCellData:(id)arg2;
- (void)replyPrivatelyToMessageInBubbleTableViewCell:(id)arg1;
- (void)reportMessageAsSpam:(id)arg1;
@property(readonly, nonatomic) WAChatPromptCardCell *reportSpamCell; // @synthesize reportSpamCell=_reportSpamCell;
- (void)requestReloadCell:(id)arg1;
- (void)requestScrollToMessageForPTT:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)restoreContentOffset;
- (void)restoreContentOffsetWithBottomIndexPath:(id)arg1 relativeOffset:(double)arg2 footerInset:(double)arg3;
- (void)restoreContentOffsetWithReferenceCellData:(id)arg1 relativeOffset:(double)arg2 footerInset:(double)arg3;
- (void)restoreContentOffsetWithTopIndexPath:(id)arg1 relativeOffset:(double)arg2 footerInset:(double)arg3;
- (void)restoreTableViewSelectionState;
- (void)retryDownloadingMediaInMessage:(id)arg1;
- (void)retryPaymentFlowForMessage:(id)arg1;
- (void)retrySendingMessages:(id)arg1;
- (void)rootHandlerDidFailWithAction:(unsigned long long)arg1;
- (void)saveMediaInMessagesInBubbleTableViewCell:(id)arg1;
- (void)saveMediaInMessagesInCellData:(id)arg1;
- (id)saveTableViewSelectionState;
- (void)saveVCardContactAsNewContact:(id)arg1;
- (void)saveVCardContactAsNewContact:(id)arg1 withPreviewAction:(id)arg2;
- (void)saveVCardContactAsNewContactIfPossible:(id)arg1;
- (id)savedOffsetBottomCellDataReturningRelativeOffset:(double *)arg1;
- (id)savedOffsetReferenceCellDataReturningRelativeOffset:(double *)arg1;
- (id)savedOffsetTopCellDataReturningRelativeOffset:(double *)arg1;
- (void)scrollIndexPathToBottom:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (void)scrollToMessageInMessagesController:(id)arg1 animated:(_Bool)arg2 highlightAfterScroll:(id)arg3;
- (void)scrollToTargetWithAnimation:(_Bool)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)scrollToUnreadDivider;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) _Bool scrollingToQuotedMessage; // @synthesize scrollingToQuotedMessage=_scrollingToQuotedMessage;
- (id)searchUrlForText:(id)arg1;
@property(retain, nonatomic) WAMultiSendMediaItem *selectedGIFForAnimatedTransition; // @synthesize selectedGIFForAnimatedTransition=_selectedGIFForAnimatedTransition;
- (void)setCellData:(id)arg1 forBubbleTableViewCell:(id)arg2 atIndexPath:(id)arg3;
- (void)setEditMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNeedsInitialMessagesControllerSetUp;
- (void)setNeedsScrollToMessage:(id)arg1 highlightAfterScroll:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setNeedsScrollToTargetWithAnimation:(_Bool)arg1;
- (void)setUpPaymentAccountIfNeededFor:(id)arg1 receiverJID:(id)arg2;
- (void)setUpTransitionStateFromBubbleWithMessage:(id)arg1;
- (void)shareContactViewController:(id)arg1 didFinishWithVCard:(id)arg2;
- (void)shareContactViewControllerDidCancel:(id)arg1;
@property(readonly, nonatomic) WAChatPromptCardCell *shareMyContactCell; // @synthesize shareMyContactCell=_shareMyContactCell;
- (void)shareMyContactWithJID:(id)arg1;
- (void)shareSelectedMessages:(id)arg1;
- (_Bool)shouldAllowReplyInCellData:(id)arg1;
- (_Bool)shouldAllowReplyInChatToMessage:(id)arg1 inCellData:(id)arg2;
- (_Bool)shouldAllowReplyInChatToMessageFromBubbleTableViewCell:(id)arg1;
- (_Bool)shouldAllowReplyPrivatelyToMessage:(id)arg1 inCellData:(id)arg2;
- (_Bool)shouldAllowReplyPrivatelyToMessageFromBubbleTableViewCell:(id)arg1;
- (_Bool)shouldAllowShowMessageInfoFromBubbleTableViewCell:(id)arg1;
- (_Bool)shouldAllowShowMessageInfoFromCellData:(id)arg1;
- (_Bool)shouldAllowViewStickerPackInMessage:(id)arg1;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool shouldHideBackButton;
@property(readonly, nonatomic) _Bool shouldShowDoneButton;
@property(readonly, nonatomic) _Bool shouldShowEditButton;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)showActionSheet:(id)arg1;
- (void)showActionSheet:(id)arg1 sourceView:(id)arg2;
- (void)showActivityIndicator;
- (void)showActivityIndicatorWithText:(id)arg1;
- (void)showAlertAndHandleWithHandler:(CDUnknownBlockType)arg1;
- (void)showAllActionsForLink:(id)arg1 inMessage:(id)arg2;
- (void)showBlockedContactWarning:(id)arg1 forJID:(id)arg2;
- (void)showCalendarPermissionsAlertView;
- (void)showChatViewControllerForMessage:(id)arg1 highlightedTerms:(id)arg2;
- (void)showDialogWithMessageIDForFocusedMessageInBubbleTableViewCell:(id)arg1;
- (void)showDialogWithMessageIDForMessage:(id)arg1;
- (void)showDialogWithMessageIDInBubbleTableViewCell:(id)arg1;
- (void)showDialogWithMessageIDInCellData:(id)arg1;
- (void)showDialogWithMessageSystemMessageInBubbleTableViewCell:(id)arg1;
- (void)showDialogWithMessageSystemMessageInCellData:(id)arg1;
- (void)showDialogWithMessageUnicodeInBubbleTableViewCell:(id)arg1;
- (void)showDialogWithMessageUnicodeInCellData:(id)arg1;
- (void)showGroupCallParticipantsActionSheetWithParticipantJIDs:(id)arg1 withVideo:(_Bool)arg2;
- (void)showInfoAlertWithText:(id)arg1;
- (void)showInfoForMessage:(id)arg1;
- (void)showInfoForMessageInBubbleTableViewCell:(id)arg1;
- (void)showPreviewAlertForURL:(id)arg1;
- (void)showSearchNetworkUnavailableDialog;
- (void)showStickerActionSheetForBubbleTableViewCell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showUnableToForwardTooltipFromMessageBubbleTableViewCell:(id)arg1;
- (void)starMessage:(id)arg1 inCellData:(id)arg2;
- (void)starMessageInBubbleTableViewCell:(id)arg1;
- (void)startAcceptCollectRequestFlowForMessage:(id)arg1;
- (void)startAcceptPaymentFlowForTransaction:(id)arg1;
- (void)startAnimationOnAllVisibleStickersIfNeeded_previewAnimation:(_Bool)arg1 animateIndefinitely:(_Bool)arg2;
- (void)startAnimationOnStickerInMessage:(id)arg1;
- (void)startChatWithJID:(id)arg1 fromVCard:(id)arg2;
- (void)startChatWithVCardContact:(id)arg1;
- (void)startEditing:(id)arg1;
- (void)startLoadingUIWithCancelHandler:(CDUnknownBlockType)arg1 context:(id)arg2;
- (void)startNewPaymentFlowForUPIHandle:(id)arg1;
- (void)startPaymentFlowForAccount:(id)arg1 chatSession:(id)arg2 quotedItem:(id)arg3 receiverJID:(id)arg4 amount:(id)arg5 note:(id)arg6;
- (id)stickerPackForMessage:(id)arg1;
- (void)stickerPackViewController:(id)arg1 didFailToDownloadStickerPackWithError:(id)arg2;
- (void)stickerPackViewController:(id)arg1 didTapDownloadButtonForStickerPack:(id)arg2;
- (void)stickerPackViewControllerDeleteDidSucceed:(id)arg1;
- (void)stickerPackViewControllerDownloadDidSucceed:(id)arg1;
- (_Bool)stickerPackViewControllerShouldDismissAfterAction:(id)arg1;
- (void)stopAnimationOnAllVisibleStickersIfNeeded;
- (void)stopLoadingUIForContext:(id)arg1;
- (void)stopLoadingUIForContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeContentOffset;
@property(readonly, nonatomic) WAChatMessagesTableView *tableView; // @synthesize tableView=_tableView;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) double tableViewAdditionalTopContentInset;
@property(readonly, nonatomic) double tableViewTopContentInset;
@property(readonly, nonatomic) NSString *titleForPreviewHeader;
- (void)transactionHandler:(id)arg1 didSucceedWithTransaction:(id)arg2;
- (void)transactionHandlerWithHandler:(id)arg1 didInviteContacts:(id)arg2 forConfiguration:(id)arg3;
- (id)transitionCoordinatorForBubbleTableViewCell:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)unblockContactWithJID:(id)arg1;
- (void)unstarMessage:(id)arg1 inCellData:(id)arg2;
- (void)unstarMessageInBubbleTableViewCell:(id)arg1;
- (void)unstarSelectedMessages:(id)arg1;
- (void)updateEditModeButtons;
- (void)updateFloatingStateOfDateBubbleView:(id)arg1;
- (void)updateMessageWithKey:(id)arg1;
- (void)updateRightBarButtonItemWithAnimation:(_Bool)arg1;
- (void)updateScrollOffsetDependentViews;
- (void)updateScrollViewDidEndDraggingTrackingViews;
- (void)updateScrollViewWillBeginDraggingTrackingViews;
- (void)updateTableViewContentInsetsWithKeyboardHeight:(double)arg1 adjustingContentOffset:(_Bool)arg2 fadeInDateBubbles:(_Bool)arg3;
@property(readonly, nonatomic) WAVCardMatchCell *vCardMatchCell; // @synthesize vCardMatchCell=_vCardMatchCell;
- (void)verifyBizContactIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewBusinessContact:(id)arg1;
- (void)viewContactInfoForUserJID:(id)arg1;
- (id)viewControllerForAddressString:(id)arg1 inMessage:(id)arg2;
- (id)viewControllerForContactsInVCardMessage:(id)arg1 forContacts:(id)arg2;
- (id)viewControllerForLocationInMessage:(id)arg1;
- (id)viewControllerForVCardContact:(id)arg1;
- (id)viewControllerForVCardContacts:(id)arg1;
- (id)viewControllerForWebURLPreview:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)viewGroupInviteForMessage:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewStickerPackForMessage:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)wa_applicationDidEnterBackground;
- (void)wa_fontSizeDidChange;
@property(readonly, nonatomic) UIView<WABlurredBackgroundProviding> *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
- (void)willAppendMessages:(id)arg1;
- (void)willBeginAnimatedScroll;
- (void)willPrependMessages:(id)arg1;
- (id)willSelectTableViewCellAtIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

