//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSPointerArray, NSSet, WAChatSession;

@interface WAChatSessionTransaction : NSObject
{
    WAChatSession *_chatSession;
    NSPointerArray *_listeners;
    unsigned long long _participantJournalMode;
    NSSet *_participantSnapshotJIDs;
    NSMutableSet *_participantModifications;
    NSMutableArray *_deferredActions;
    NSMutableArray *_messagesAdded;
    NSMutableArray *_messagesUpdated;
    NSMutableArray *_messagesReceived;
    _Bool _modifiedHidden;
    NSArray *_messagesNeedingDate;
    long long _chatBarUnreadCountDelta;
    long long _chatBarArchivedUnreadCountDelta;
    _Bool _temporary;
    _Bool _modifiedRemoved;
    WAChatSession *_chatSessionThatWasReplaced;
    int _lastBusinessEventType;
    _Bool _isMigratingFromOtherDevice;
    const void *_mode;
    WAChatSession *_internalChatSession;
}

+ (void)addGlobalListener:(id)arg1;
+ (void)beginTransactions:(id)arg1;
+ (_Bool)commitTransactions:(id)arg1 error:(out id *)arg2;
+ (id)forChatSession:(id)arg1;
+ (id)insertChatSessionWithJID:(id)arg1 metadata:(id)arg2 isMigratingFromOtherDevice:(_Bool)arg3 context:(id)arg4;
+ (_Bool)isMessageExpiredWithCurrentDate:(id)arg1;
+ (void)removeGlobalListener:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)addExternalMessage:(id)arg1 batchedGroupMembers:(id)arg2 notify:(_Bool)arg3;
- (void)addListener:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)addParticipant:(id)arg1 insertMessage:(_Bool)arg2;
- (void)addParticipants:(id)arg1 insertMessage:(_Bool)arg2 authorJID:(id)arg3 reason:(unsigned char)arg4 fromOffline:(_Bool)arg5 timestamp:(id)arg6;
- (void)addTerminalEventIfNecessary;
- (id)begin;
- (void)changeIncomingEphemeralSettingDurationIfNeeded:(id)arg1;
- (void)changeParticipantJournalMode:(unsigned long long)arg1;
@property(readonly, nonatomic) WAChatSession *chatSession;
- (unsigned long long)chatSessionLifecycle;
- (_Bool)commit:(id *)arg1;
- (void)defer:(CDUnknownBlockType)arg1;
- (void)didCommit;
- (void)didInsertChatSession;
- (void)enterRestoreMode;
- (void)enumerateListeners:(CDUnknownBlockType)arg1;
- (id)ephemeralSettingMessageWithEphemeralityDuration:(unsigned int)arg1 fromJID:(id)arg2 attribute:(_Bool)arg3;
- (id)fetchParticipantWithJID:(id)arg1;
- (id)fetchParticipantsWithJIDs:(id)arg1;
- (void)handleChangeTrackingForAction:(int)arg1 participantJID:(id)arg2 timestamp:(id)arg3;
- (void)handleParticipantChangedActive:(id)arg1;
- (id)initWithChatSession:(id)arg1;
- (void)insertContactBlockedSystemEventIfNeeded;
- (id)insertEphemeralSettingEventWithDuration:(id)arg1 date:(id)arg2 groupNotification:(id)arg3 shouldPopulateGroupMember:(_Bool)arg4;
- (id)insertEventOfType:(int)arg1 fromJID:(id)arg2 date:(id)arg3 notify:(_Bool)arg4;
- (id)insertGroupEvent:(int)arg1 date:(id)arg2;
- (id)insertGroupEvent:(int)arg1 date:(id)arg2 notify:(_Bool)arg3;
- (id)insertInitialMessage;
- (void)insertInitialSystemMessagesIfNeeded;
- (void)insertInitialSystemMessagesIfNeededLegacy;
- (id)insertLocalIndividualEphemeralSettingWithEphemeralityDuration:(unsigned int)arg1 ephemeralSettingTimestamp:(unsigned long long)arg2 fromJID:(id)arg3 attribute:(_Bool)arg4;
- (id)insertOutgoingMessageOfType:(int)arg1 needsMediaItem:(_Bool)arg2;
- (id)insertSystemEvent:(int)arg1 fromJID:(id)arg2 date:(id)arg3 notify:(_Bool)arg4;
@property(nonatomic) __weak WAChatSession *internalChatSession; // @synthesize internalChatSession=_internalChatSession;
@property(readonly, nonatomic, getter=isHighlyVerified) _Bool highlyVerified;
@property(nonatomic) _Bool isMigratingFromOtherDevice; // @synthesize isMigratingFromOtherDevice=_isMigratingFromOtherDevice;
- (_Bool)markArchived:(_Bool)arg1;
- (_Bool)markHidden:(_Bool)arg1;
- (void)markRemoved;
- (void)markTemporary;
- (void)markTrusted;
@property(nonatomic) const void *mode; // @synthesize mode=_mode;
- (void)prepareChatSession;
- (void)prepareInitialSystemMessages;
- (void)processMessage:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)removeParticipant:(id)arg1 insertMessage:(_Bool)arg2;
- (void)removeParticipant:(id)arg1 insertMessage:(_Bool)arg2 authorJID:(id)arg3 fromOffline:(_Bool)arg4 timestamp:(id)arg5;
- (id)replaceWithEmptyChatSession;
@property(readonly, nonatomic) WAChatSession *replacedChatSession;
- (_Bool)setImportantMessagesCount:(int)arg1;
- (void)setReceiveMessagesFromBusinessBitIfEligibleForMessage:(id)arg1;
- (_Bool)setSubjectText:(id)arg1;
- (_Bool)setUnreadCount:(int)arg1;
- (void)setUpNotificationBehaviorForMessage:(id)arg1;
- (_Bool)shouldInsertEventOfType:(int)arg1;
- (_Bool)shouldInsertGroupEventOfType:(int)arg1;
- (_Bool)shouldInsertSystemEventOfType:(int)arg1;
- (_Bool)shouldMarkSessionTrustedForMessage:(id)arg1;
- (_Bool)shouldMuteMessage:(id)arg1;
@property(readonly, nonatomic) _Bool supportsSecuirtyNotifications;
- (void)trackAddedMessage:(id)arg1;
- (void)trackReceivedMessage:(id)arg1;
- (void)trackUpdatedMessage:(id)arg1;
- (void)unarchive;
- (void)unhideIfNeeded;
- (void)updateChatSessionWithMessage:(id)arg1;
- (void)updateDescription:(id)arg1 descriptionID:(id)arg2 notification:(id)arg3;
- (void)updateEphemeralityMetadataForMessageIfNeeded:(id)arg1;
- (void)updateLastMessageDateWithMessage:(id)arg1;
- (void)updatePendingGhostMessages:(id)arg1;
- (void)updateSubject:(id)arg1 notification:(id)arg2;
- (void)updateWithXMPPGroup:(id)arg1 notification:(id)arg2 attributes:(id)arg3;
@property(readonly, nonatomic) _Bool wasInserted;
@property(readonly, nonatomic) _Bool wasRemoved;
- (void)willCommit;

@end

