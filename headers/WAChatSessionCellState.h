//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSManagedObjectID, NSString;

@interface WAChatSessionCellState : NSObject
{
    _Bool _isPinned;
    _Bool _isMuted;
    _Bool _isArchived;
    _Bool _hasImportantMessages;
    _Bool _expired;
    _Bool _showingParticipants;
    long long _unreadCount;
    NSString *_dateText;
    NSManagedObjectID *_messageIDForAccessibilityLabel;
    NSString *_accessibilitySnippetText;
    NSAttributedString *_snippetText;
    NSString *_chatActivityText;
    NSArray *_labels;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessibilitySnippetText; // @synthesize accessibilitySnippetText=_accessibilitySnippetText;
@property(readonly, copy, nonatomic) NSString *chatActivityText; // @synthesize chatActivityText=_chatActivityText;
- (id)createLabelStateFromChatSession:(id)arg1 isSearchActive:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSString *dateText; // @synthesize dateText=_dateText;
@property(readonly, nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(readonly, nonatomic) _Bool hasImportantMessages; // @synthesize hasImportantMessages=_hasImportantMessages;
- (id)initWithChatSession:(id)arg1 currentState:(id)arg2;
- (id)initWithChatSession:(id)arg1 message:(id)arg2 preferRTL:(_Bool)arg3 isSearchActive:(_Bool)arg4;
- (id)initWithChatSession:(id)arg1 message:(id)arg2 showParticipants:(_Bool)arg3 listFirst:(id)arg4 preferRTL:(_Bool)arg5 isSearchActive:(_Bool)arg6;
- (id)initWithGroupParticipantsForChatSession:(id)arg1 listFirst:(id)arg2 preferRTL:(_Bool)arg3;
@property(readonly, nonatomic) _Bool isArchived; // @synthesize isArchived=_isArchived;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, nonatomic) _Bool isPinned; // @synthesize isPinned=_isPinned;
@property(readonly, copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(readonly, copy, nonatomic) NSManagedObjectID *messageIDForAccessibilityLabel; // @synthesize messageIDForAccessibilityLabel=_messageIDForAccessibilityLabel;
@property(readonly, nonatomic) _Bool showingParticipants; // @synthesize showingParticipants=_showingParticipants;
@property(readonly, copy, nonatomic) NSAttributedString *snippetText; // @synthesize snippetText=_snippetText;
@property(readonly, nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;

@end
