//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVSpeechUtterance, NSArray, NSMutableDictionary, NSSet, NSString, WACachedCopyMutableArray, WAMessage, WAMessageReplyContext;

@interface WAChatCellData : NSObject
{
    AVSpeechUtterance *_currentUtterance;
    WAMessageReplyContext *_replyContext;
    NSMutableDictionary *_messageContainerMap;
    WACachedCopyMutableArray *_messages;
    unsigned long long _lastVoiceOverMediaTransferStatus;
    unsigned long long _chatCellDataQuickActionType;
    NSMutableDictionary *_replyButtonsLayoutCache;
    _Bool _disallowMerging;
    _Bool _disallowBubbleHeader;
    _Bool _trusted;
    _Bool _mergedWithNextMessage;
    _Bool _mergedWithPreviousMessage;
    _Bool _searchResult;
    _Bool _dividerPTTOnly;
    _Bool _forceSenderName;
    _Bool _hasHSMReplyButtons;
    _Bool _hasDynamicReplyButtons;
    float _pttPlayerProgress;
    unsigned long long _type;
    unsigned long long _style;
    unsigned long long _bubbleDirection;
    NSSet *_highlightedTerms;
    long long _dividerUnreadCount;
    unsigned long long _pttPlayerState;
    NSArray *_hydratedTemplateReplyButtons;
    NSArray *_dynamicReplyButtons;
    NSArray *_replyButtonLayouts;
    NSArray *_selectedMessages;
    double _widthForReplyButtons;
    struct UIEdgeInsets _cellInsets;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessibilityHintText;
@property(readonly, nonatomic) NSString *accessibilityLabel;
- (void)appendMessage:(id)arg1;
@property(nonatomic) unsigned long long bubbleDirection; // @synthesize bubbleDirection=_bubbleDirection;
- (id)buttonLayoutsWithMetrics:(id)arg1 widthForButtons:(double)arg2;
- (unsigned long long)buttonsCount;
- (_Bool)canAppendMessage:(id)arg1;
@property(readonly, nonatomic) _Bool canBeForwarded;
- (_Bool)canBeForwarded:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canBeQuickActionBizRoleInfo;
@property(readonly, nonatomic) _Bool canBeQuickActionEphemeralInfo;
@property(readonly, nonatomic) _Bool canBeQuickActionForwarded;
@property(readonly, nonatomic) _Bool canBeQuickActionSearched;
- (_Bool)canDoPartialMergeWithCellData:(id)arg1;
- (_Bool)canPrependMessage:(id)arg1;
@property(nonatomic) struct UIEdgeInsets cellInsets; // @synthesize cellInsets=_cellInsets;
@property(readonly, nonatomic) unsigned long long chatCellDataQuickActionType;
@property(readonly, nonatomic) _Bool containsUndownloadedMedia;
- (id)currentMessageContainerForViewControllerSize:(struct CGSize)arg1;
- (void)deselectAllMessages;
@property(nonatomic) _Bool disallowBubbleHeader; // @synthesize disallowBubbleHeader=_disallowBubbleHeader;
@property(nonatomic) _Bool disallowMerging; // @synthesize disallowMerging=_disallowMerging;
@property(readonly, nonatomic) unsigned long long displayStyle;
- (id)dividerText;
@property(nonatomic) long long dividerUnreadCount; // @synthesize dividerUnreadCount=_dividerUnreadCount;
@property(readonly, nonatomic) NSArray *dynamicReplyButtons; // @synthesize dynamicReplyButtons=_dynamicReplyButtons;
@property(nonatomic) _Bool forceSenderName; // @synthesize forceSenderName=_forceSenderName;
@property(nonatomic) _Bool hasDynamicReplyButtons; // @synthesize hasDynamicReplyButtons=_hasDynamicReplyButtons;
@property(nonatomic) _Bool hasHSMReplyButtons; // @synthesize hasHSMReplyButtons=_hasHSMReplyButtons;
- (_Bool)hasValidMessageContainerForViewControllerSize:(struct CGSize)arg1;
@property(copy, nonatomic) NSSet *highlightedTerms; // @synthesize highlightedTerms=_highlightedTerms;
@property(readonly, nonatomic) NSArray *hydratedTemplateReplyButtons; // @synthesize hydratedTemplateReplyButtons=_hydratedTemplateReplyButtons;
- (id)imageUrlForSearch;
- (id)initWithDynamicReplyButtons:(id)arg1 messages:(id)arg2;
- (id)initWithHydratedTemplateReplyButtons:(id)arg1 messages:(id)arg2;
- (id)initWithMessages:(id)arg1 highlightedTerms:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithType:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (void)invalidateMediaContentInMessageContainers;
- (void)invalidateMessageContainers;
- (void)invalidateMessageStatusInMessageContainers;
- (void)invalidateReplyButtonLayouts;
@property(nonatomic, getter=isDividerPTTOnly) _Bool dividerPTTOnly; // @synthesize dividerPTTOnly=_dividerPTTOnly;
@property(nonatomic, getter=isSearchResult) _Bool searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic, getter=isSelectableInChatViewDeleteMode) _Bool selectableInChatViewDeleteMode;
@property(readonly, nonatomic, getter=isSelectableInChatViewForwardMode) _Bool selectableInChatViewForwardMode;
- (_Bool)isSpeakingContent;
@property(readonly, nonatomic, getter=isTransferringMedia) _Bool transferringMedia;
@property(nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;
- (id)mapKeyForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) float mediaTransferProgress;
@property(nonatomic) _Bool mergedWithNextMessage; // @synthesize mergedWithNextMessage=_mergedWithNextMessage;
@property(nonatomic) _Bool mergedWithPreviousMessage; // @synthesize mergedWithPreviousMessage=_mergedWithPreviousMessage;
@property(readonly, nonatomic) WAMessage *message;
@property(readonly, nonatomic) double messageContainerBottomMargin;
- (id)messageContainerForDisplayStyle:(unsigned long long)arg1 viewControllerSize:(struct CGSize)arg2;
@property(readonly, nonatomic) double messageContainerTopMargin;
@property(readonly, copy, nonatomic) NSArray *messages;
@property(readonly, nonatomic) _Bool needsAlertButton;
- (void)performSuspiciousLinkCheckIfNeeded;
- (double)preferredRowHeightForReplyButtonsForViewControllerSize:(struct CGSize)arg1;
- (double)preferredRowHeightForViewControllerSize:(struct CGSize)arg1;
- (void)prependMessage:(id)arg1;
@property(nonatomic) float pttPlayerProgress; // @synthesize pttPlayerProgress=_pttPlayerProgress;
@property(nonatomic) unsigned long long pttPlayerState; // @synthesize pttPlayerState=_pttPlayerState;
- (void)reallyPerformSuspiciousLinkCheckForText:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeAllMessageContainers;
- (void)removeMessagesAtIndexes:(id)arg1;
@property(readonly, nonatomic) NSArray *replyButtonLayouts; // @synthesize replyButtonLayouts=_replyButtonLayouts;
- (void)resetActionType;
- (void)selectAllMessages;
@property(readonly, copy, nonatomic) NSArray *selectedMessages; // @synthesize selectedMessages=_selectedMessages;
@property(readonly, copy, nonatomic) NSString *selectedMessagesIdentifier;
@property(nonatomic) double widthForReplyButtons; // @synthesize widthForReplyButtons=_widthForReplyButtons;
@property(readonly, nonatomic) _Bool shouldAllowUserInteractionInProgressViewWhenNotTransferring;
@property(readonly, nonatomic) _Bool shouldAllowUserInteractionInProgressViewWhenTransferring;
- (_Bool)shouldShowBizRoleInfoButton;
- (_Bool)shouldShowEphemeralInfoButton;
@property(readonly, nonatomic) _Bool shouldShowOptionToSaveToCameraRoll;
@property(readonly, nonatomic) _Bool shouldShowProgressView;
- (_Bool)shouldShowSenderNameAfterCellData:(id)arg1;
- (void)startSpeakingContent;
- (void)stopSpeakingContent;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long tailDirection;
- (id)textForSearch;
- (void)textToSpeechEngineDidCancelSpeechUtterance:(id)arg1;
- (void)textToSpeechEngineDidFinishSpeechUtterance:(id)arg1;
- (id)titleForButtonAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long undownloadedMediaCount;
- (void)updateSelectedMessage:(id)arg1;
@property(readonly, nonatomic) NSString *voiceOverStringForMediaUploadOrDownloadStatus;

@end

