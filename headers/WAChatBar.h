//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADraggableInputView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WAGimmickPickerViewDelegate-Protocol.h"
#import "WAInputTextViewDelegate-Protocol.h"
#import "WAInterruptedPttRecordingViewDelegate-Protocol.h"
#import "WALinkLabelDelegate-Protocol.h"
#import "WAReplyContextViewDelegate-Protocol.h"
#import "WAWebPageFromTextLoaderDelegate-Protocol.h"
#import "WAWebURLPreviewViewDelegate-Protocol.h"

@class NSCharacterSet, NSMutableArray, NSString, NSTimer, NSURL, UIBarButtonItem, UIButton, UIImageView, UILabel, UINotificationFeedbackGenerator, UISearchBar, UISelectionFeedbackGenerator, UITapGestureRecognizer, UIToolbar, UIView, UIWindow, WAAnimatedCancelLabel, WAAnimatedPttLockView, WACTWAContextFetcher, WAChatBarInputTextView, WAChatJID, WAChatSearchPickerView, WAExactTimer, WAGimmickPickerView, WAInputBarRoundButton, WAInputTextView, WAInterruptedPttRecording, WAInterruptedPttRecordingView, WALinkLabel, WAMessageAttachments, WAMessageQuotedItem, WAPBCTWAContext, WAReplyContextView, WARichText, WAWebPageFromTextLoader, WAWebPageMediaDownloader, WAWebPageMetadata, WAWebURLPreviewView;
@protocol WAChatBarDelegate;

@interface WAChatBar : WADraggableInputView <WAGimmickPickerViewDelegate, WAWebURLPreviewViewDelegate, WAWebPageFromTextLoaderDelegate, WAInterruptedPttRecordingViewDelegate, WALinkLabelDelegate, WAReplyContextViewDelegate, UISearchBarDelegate, WAInputTextViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_inputBoxView;
    UIView *_inputBackgroundView;
    UIButton *_pttButton;
    WAWebURLPreviewView *_webURLPreview;
    WAInputBarRoundButton *_sendButton;
    UIView *_textInputContainerView;
    UIView *_gimmickSearchContainerView;
    UIView *_chatSearchContainerView;
    UIView *_interruptedPttRecordingContainerView;
    UIView *_lockedPTTRecordingContainerView;
    UIButton *_gimmickButton;
    UISearchBar *_gimmickSearchBar;
    UIWindow *_window;
    UISelectionFeedbackGenerator *_hapticFeedbackGenerator;
    WAWebPageFromTextLoader *_webPageLoader;
    WAWebPageMediaDownloader *_mediaDownloader;
    WAWebPageMediaDownloader *_mediaAutoDownloader;
    NSURL *_pastedURL;
    WACTWAContextFetcher *_ctwaContextFetcher;
    double _singleLineHeight;
    double _leadingInset;
    double _trailingInsetWithSendButton;
    double _pttLockViewHeight;
    UILabel *_pttRecordingProgressLabel;
    WAAnimatedCancelLabel *_pttSlideToCancelLabel;
    UIView *_pttSlideToCancelLabelMaskView;
    UIImageView *_pttMic;
    UIImageView *_pttMicInactive;
    UIImageView *_pttBucket;
    UIImageView *_pttBucketLid;
    UIView *_pttLockCoverView;
    struct CGPoint _pttButtonOriginalTouchPoint;
    _Bool _pttRecordingIsActive;
    _Bool _pttSlidingIsTracked;
    _Bool _pttControlsPresented;
    WAExactTimer *_pttControlsPresentationTimer;
    UIButton *_pttCancelButton;
    UIView *_pttSlideUpToLockMaskView;
    WAAnimatedPttLockView *_pttSlideUpToLockView;
    UIButton *_pttStopButton;
    UIButton *_pttRecordingTrashButton;
    _Bool _interruptedPttRecordingViewIsActive;
    UIButton *_pttTrashCanButton;
    UIView *_interruptedPttRecordingInputBackgroundView;
    WAInterruptedPttRecordingView *_interruptedPttRecordingView;
    UINotificationFeedbackGenerator *_feedbackGenerator;
    UIToolbar *_chatSearchToolbar;
    UIBarButtonItem *_chatSearchUpButtonItem;
    UIBarButtonItem *_chatSearchDownButtonItem;
    UILabel *_chatSearchResultsLabel;
    UIBarButtonItem *_chatSearchLabelItem;
    UIBarButtonItem *_chatSearchChooseDateIcon;
    WAChatSearchPickerView *_chooseDatePickerView;
    WAGimmickPickerView *_gimmickPicker;
    NSMutableArray *_gimmickButtonAnimationBlocks;
    _Bool _memojiIsCurrentlyEncoding;
    NSTimer *_memojiProgressTimer;
    float _memojiProgressElapsedTime;
    double _memojiLastSelectTime;
    unsigned long long _memojiSendStatus;
    struct CGSize _textViewSize;
    UIView *_topBorderView;
    WAReplyContextView *_replyContextView;
    double _textView2LineHeight;
    double _textView5LineHeight;
    WALinkLabel *_readOnlyFooterViewLabel;
    UIView *_readOnlyFooterView;
    _Bool _readonlyFooterIsForAnnouncementGroup;
    UITapGestureRecognizer *_textViewTapToKeyboardGesture;
    WAChatBarInputTextView *_textView;
    NSCharacterSet *_punctuationWhitespaceNewlineCharacterSet;
    _Bool _pttLockViewActive;
    _Bool _pttRecordingIsLocked;
    _Bool _showDismissButtonForQuotedMessages;
    _Bool _resumeTextModeAfterDiscardingRecording;
    _Bool _sendButtonHidden;
    _Bool _pttButtonHidden;
    WAChatJID *_chatJID;
    unsigned long long _mode;
    unsigned long long _textMessageInputMode;
    WAInterruptedPttRecording *_interruptedPttRecording;
    UIButton *_attachMediaButton;
    UIButton *_cameraButton;
}

+ (unsigned long long)gimmickInputMode;
+ (void)initialize;
+ (void)setGimmickInputMode:(unsigned long long)arg1;
+ (void)windowDidBecomeHidden:(id)arg1;
+ (void)windowDidBecomeKey:(id)arg1;
+ (void)windowDidBecomeVisible:(id)arg1;
+ (void)windowDidResignKey:(id)arg1;
- (void).cxx_destruct;
- (void)acceptAutoCorrection;
- (_Bool)accessibilityElementsHidden;
- (_Bool)accessibilityPerformEscape;
- (void)addAnimationToGimmickButtonAnimationBlocks:(CDUnknownBlockType)arg1;
- (void)advanceProgress;
- (void)animatePttControlsIn:(id)arg1;
- (void)animatePttControlsOutWithDiscardAnimation:(_Bool)arg1 pttControlsWerePresented:(_Bool)arg2;
- (_Bool)areContextualSuggestionsAvailable;
@property(readonly, nonatomic) UIButton *attachMediaButton; // @synthesize attachMediaButton=_attachMediaButton;
- (void)attachMediaButtonTapped:(id)arg1;
@property(readonly, nonatomic) WAMessageAttachments *attachments;
- (void)autodownloadMediaIfPossibleWithMetadata:(id)arg1 mediaSize:(unsigned long long)arg2;
- (void)beginPTTRecordingForButton:(id)arg1 event:(id)arg2;
@property(readonly, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
- (void)cameraButtonTapped:(id)arg1;
- (void)cancelPTTRecording;
- (void)changeGimmickButtonToKeyboardAnimated:(_Bool)arg1;
- (void)changeGimmickButtonToKeyboardWithContextualSuggestionsAnimated:(_Bool)arg1;
- (void)changeGimmickButtonToStickers;
@property(retain, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
@property(readonly, nonatomic) UIView *chatSearchContainerView;
- (double)chatSearchContainerViewPreferredHeightForLayoutWidth:(double)arg1;
@property(copy, nonatomic) NSString *chatSearchResultsLabelAccessibilityValue;
- (void)clearInterruptedPTTRecording;
- (void)clearInterruptedPTTRecordingWithDidSend:(_Bool)arg1;
- (void)clearLockedPTTRecordingContainerView;
@property(readonly, nonatomic) struct CGRect containerViewLayoutBoundsWithoutBorderView;
- (void)createGimmickPicker;
- (void)createGimmickPickerIfNeeded;
- (_Bool)createInterruptedPTTRecordingWithFilePath:(id)arg1 andDuration:(double)arg2;
@property(retain, nonatomic) WAPBCTWAContext *ctwaContext;
- (void)deactivateLockedPTT;
- (void)didCancelGIF;
- (void)didMoveToWindow;
- (void)didSendGIFForURL:(id)arg1;
- (void)didSendMessage;
- (void)dismissInterruptedPTTRecording;
- (void)dismissInterruptedPTTRecordingWithDidSend:(_Bool)arg1;
- (void)downloadThumbnailIfNeeded;
- (void)fontSizeDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)getNextAnimationFromGimmickButtonAnimationBlock;
- (void)gimmickInputModeDidChange:(id)arg1;
@property(retain, nonatomic) WAGimmickPickerView *gimmickPicker; // @synthesize gimmickPicker=_gimmickPicker;
- (id)gimmickPickerView;
- (void)gimmickPickerView:(id)arg1 didRequestPresentActionSheet:(id)arg2;
- (void)gimmickPickerView:(id)arg1 didSelectGIFMediaItem:(id)arg2 withGIFThumbnailImageView:(id)arg3;
- (void)gimmickPickerView:(id)arg1 didSelectManagedSticker:(id)arg2 fromContextualSuggestions:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)gimmickPickerViewDidBeginGIFSearch:(id)arg1 preloadedGIFs:(id)arg2;
- (void)gimmickPickerViewDidBeginStickerSearch:(id)arg1;
- (void)gimmickPickerViewDidRequestOpenStickerStore:(id)arg1;
@property(readonly, nonatomic) UIView *gimmickSearchContainerView;
- (double)gimmickSearchContainerViewPreferredHeightForLayoutWidth:(double)arg1;
- (void)handleDownloadedMediaFileURL:(id)arg1;
- (void)handleMemojiImage:(id)arg1;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)handleTapToKeyboardGesture:(id)arg1;
- (_Bool)hasInterruptedPTTRecording;
- (void)hideDownloadMediaOption;
- (void)hideKeyboard;
- (void)hideKeyboardWithoutChangingInputMode;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2;
- (double)inputAssistantHeight;
- (_Bool)inputTextView:(id)arg1 canMentionUser:(id)arg2;
- (void)inputTextView:(id)arg1 didEditMentionInRange:(struct _NSRange)arg2;
- (void)inputTextView:(id)arg1 didPasteURL:(id)arg2;
- (void)inputTextView:(id)arg1 needsHeightChangedTo:(double)arg2;
- (_Bool)inputTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)inputTextViewDictationDidEnd:(id)arg1;
- (void)inputTextViewDidBeginEditing:(id)arg1;
- (void)inputTextViewDidChange:(id)arg1;
- (void)inputTextViewDidEndEditing:(id)arg1;
- (void)inputTextViewDidPasteGIF:(id)arg1;
- (void)inputTextViewDidPasteImages:(id)arg1;
- (void)inputTextViewDidStopEditingMention:(id)arg1;
- (double)inputTextViewMaximumHeight:(id)arg1;
- (_Bool)inputTextViewShouldBeginEditing:(id)arg1;
- (_Bool)inputTextViewShouldEndEditing:(id)arg1;
- (_Bool)inputTextViewShouldTrackMentions:(id)arg1;
- (id)inputViewResponderToBecomeFirstResponder;
- (id)inputViewResponders;
- (void)insertMention:(id)arg1 range:(struct _NSRange)arg2 jid:(id)arg3;
- (void)interruptPTTRecording;
- (void)interruptedPTTRecordingViewDidStartPlaying:(id)arg1;
@property(retain, nonatomic) WAInterruptedPttRecording *interruptedPttRecording; // @synthesize interruptedPttRecording=_interruptedPttRecording;
@property(readonly, nonatomic) UIView *interruptedPttRecordingContainerView;
- (_Bool)isAllowAutodownloadMediaWithMetadata:(id)arg1 mediaSize:(unsigned long long)arg2;
@property(nonatomic, getter=isChatSearchDownButtonEnabled) _Bool chatSearchDownButtonEnabled;
@property(nonatomic, getter=isChatSearchUpButtonEnabled) _Bool chatSearchUpButtonEnabled;
@property(nonatomic, getter=isPTTLockViewActive) _Bool pttLockViewActive; // @synthesize pttLockViewActive=_pttLockViewActive;
@property(nonatomic, getter=isPTTRecordingLocked) _Bool pttRecordingIsLocked; // @synthesize pttRecordingIsLocked=_pttRecordingIsLocked;
@property(nonatomic, getter=isPttButtonHidden) _Bool pttButtonHidden; // @synthesize pttButtonHidden=_pttButtonHidden;
@property(nonatomic, getter=isSendButtonHidden) _Bool sendButtonHidden; // @synthesize sendButtonHidden=_sendButtonHidden;
@property(readonly, nonatomic, getter=isTextViewFirstResponder) _Bool textViewFirstResponder;
- (_Bool)isValidMemojiImage:(id)arg1;
- (void)layoutChatSearchContainerView;
- (void)layoutGimmickSearchContainerView;
- (void)layoutInterruptedPTTRecordingContainerView;
- (void)layoutLockedPTTRecordingContainerView;
- (void)layoutPTTViews;
- (void)layoutReadonlyFooterView;
- (void)layoutReplyContextViewIfNeeded;
- (void)layoutSubviews;
- (void)layoutTextInputContainerView;
- (void)loadCTWAContextView;
- (void)loadPTTLockViewIfNeeded;
- (void)loadReplyContextAndWebURLPreviewViewsIfNeeded;
- (void)loadReplyContextView;
- (void)loadReplyContextViewInMode:(unsigned long long)arg1;
- (void)loadSupplementaryPTTViewsIfNeeded;
- (void)loadWebURLPreviewView;
@property(readonly, nonatomic) UIView *lockedPTTRecordingContainerView;
- (long long)maxAvailableCharactersForInputTextView:(id)arg1;
- (double)maximumTextViewHeightForLayoutWidth:(double)arg1;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)pauseInterruptedPTTRecordingPlaybackIfNeeded;
- (double)preferredHeightForLayoutWidth:(double)arg1;
- (double)preferredHeightForLockedPTT;
@property(readonly, nonatomic) UIButton *pttButton; // @synthesize pttButton=_pttButton;
- (void)pttButtonCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pttButtonInsideReleased:(id)arg1 withEvent:(id)arg2;
- (void)pttButtonOutsideReleased:(id)arg1 withEvent:(id)arg2;
- (void)pttButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)pttButtonReleasedImpl:(id)arg1 withEvent:(id)arg2 triggeredByControlEvent:(unsigned long long)arg3;
- (void)pttButtonTrackSliding:(id)arg1 withEvent:(id)arg2;
- (void)pttDraftLockCancelled;
- (void)pttLockCancelled;
@property(nonatomic) _Bool pttRecordingIsActive;
@property(retain, nonatomic) WAMessageQuotedItem *quotedItem;
- (double)readonlyFooterPreferredHeightForLayoutWidth:(double)arg1;
- (void)recalculateSingleLineHeight;
- (void)replyContextViewDidDismiss:(id)arg1;
- (void)replyContextViewScrollToQuotedMessage;
@property(nonatomic) _Bool resumeTextModeAfterDiscardingRecording; // @synthesize resumeTextModeAfterDiscardingRecording=_resumeTextModeAfterDiscardingRecording;
@property(copy, nonatomic) WARichText *richText;
- (void)saveAndSendSticker:(id)arg1 withMemojiImageHash:(id)arg2;
- (id)saveSticker:(id)arg1 withMemojiImageHash:(id)arg2;
- (void)searchContextualStickerSuggestionsAfterDelay:(_Bool)arg1;
@property(copy, nonatomic) NSString *searchResultsLabelText;
- (void)searchStickerSuggestionsWithText:(id)arg1 afterDelay:(_Bool)arg2;
- (void)send;
- (void)sendButtonTapped:(id)arg1;
- (void)sendInterruptedPTTRecording;
- (void)sendPTTLockedRecording;
- (void)sendSticker:(id)arg1;
- (void)setChatDefaults;
- (void)setDefaultGIFCategory;
- (void)setImage:(id)arg1 caption:(id)arg2 editable:(_Bool)arg3;
- (void)setKeyboardInputView:(id)arg1;
- (void)setPTTRecordingTime:(double)arg1;
- (void)setRecordingMicActive:(_Bool)arg1;
@property(nonatomic) _Bool showDismissButtonForQuotedMessages; // @synthesize showDismissButtonForQuotedMessages=_showDismissButtonForQuotedMessages;
@property(nonatomic) unsigned long long textMessageInputMode; // @synthesize textMessageInputMode=_textMessageInputMode;
- (void)setUpGimmickInterface;
- (void)setUpPTTButton;
@property(retain, nonatomic) WAWebPageMetadata *webPageMetadata;
- (void)setWebPreviewDownloading:(_Bool)arg1;
- (void)showChooseDatePicker:(id)arg1;
- (void)showDownloadMediaOptionWithMediaSize:(unsigned long long)arg1;
- (void)showPTTLock;
- (void)showStickerPack:(id)arg1;
- (void)showStickerStarredCategory;
- (void)startLoading;
- (void)stopLoadingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)stringByTrimmingWhitespaceAndPunctuation:(id)arg1;
- (id)textInputContextIdentifierForInputTextView:(id)arg1;
- (double)textInputPreferredHeightForLayoutWidth:(double)arg1;
@property(readonly, nonatomic) WAInputTextView *textView;
- (void)toggleKeyboardAndGimmickPicker:(id)arg1;
- (double)trailingInsetWithPTTCameraButtons;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateGimmickButtonImageAnimated:(_Bool)arg1;
- (void)updateGimmickInputModeToKeyboard;
- (void)updateGimmickInputModeToKeyboardWithContextualSuggestions;
- (void)updateGimmickInputModeToStickers;
- (void)updateLayerColors;
- (void)updateLayoutOnTextChange;
- (void)updateMediaDownloadWithProgress:(float)arg1;
- (void)updateMetadataWithImage:(id)arg1;
- (void)updatePreviewImageIfPossibleUsingDownloadedMediaFileURL:(id)arg1 mimeType:(id)arg2;
- (void)updateReadOnlyFooterView;
- (void)updateRoundedCorners;
- (void)updateStickerSuggestionsStateToNoSuggestions;
- (void)updateStickerSuggestionsStateToSuggestionsWithEmojis:(id)arg1 stickerCount:(unsigned long long)arg2 persistStickerCount:(_Bool)arg3;
- (void)updateVisibleStateOfButtons;
- (void)updateVisibleStateOfTextInputModeViews;
- (void)webPageFromTextLoaderDidUpdateMatchedText:(id)arg1;
- (void)webPageFromTextLoaderDidUpdateMetadata:(id)arg1;
- (void)webURLPreviewViewDidCancelMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidDismiss:(id)arg1;
- (void)webURLPreviewViewDidEditMedia:(id)arg1;
- (void)webURLPreviewViewDidRequestMediaDownload:(id)arg1;
- (void)willHideKeyboardWithAnimationDuration:(double)arg1 animationCurve:(long long)arg2 beginFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;
- (void)willMoveToWindow:(id)arg1;
- (void)willShowKeyboardWithAnimationDuration:(double)arg1 animationCurve:(long long)arg2 beginFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAChatBarDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

