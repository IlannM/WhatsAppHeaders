//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAChatSession.h>

#import "WAContactable-Protocol.h"
#import "WAIndexableManagedObject-Protocol.h"

@class NSArray, NSManagedObjectID, NSString, WAChatJID, WAChatSessionSavedReply, WAChatSessionTransaction, WAUserJID;
@protocol WAChatWithActivityJID;

@interface WAChatSession (WAContactable) <WAContactable, WAIndexableManagedObject>
+ (void)batchCriticalEventMarkerForChatSession:(id)arg1;
+ (_Bool)clearCriticalEventMarkerForChatSessions:(id)arg1;
+ (_Bool)clearCriticalEventMarkerForChatSessions:(id)arg1 beforeDate:(id)arg2;
+ (id)fetchUnreadMessagesForChatSession:(id)arg1 onOrAfterSort:(int)arg2 onOrAfterDate:(id)arg3 limit:(long long)arg4;
+ (_Bool)hasCriticalEventMarkerForChatSession:(id)arg1;
+ (id)labelForSaveToCameraRollSetting:(int)arg1 preferCompactText:(_Bool)arg2;
+ (double)lastReadServerTimestampForAnyChatSession;
+ (unsigned long long)maximumListNameLength;
+ (_Bool)messageContainsCriticalSystemEvent:(id)arg1;
+ (id)predicateForUnreadChatSessionsWithState:(unsigned long long)arg1;
+ (void)runCriticalEventMarkerInsertionBatch;
+ (void)setLastReadServerTimestampForAnyChatSession:(double)arg1;
+ (void)startObservingChatTransactionInsertions;
+ (void)stopObservingChatTransactionInsertions;
@property(readonly, nonatomic) WAChatJID<WAChatWithActivityJID> *activityChangesJID;
@property(readonly, nonatomic) _Bool affectsChatBarArchivedUnreadCount;
@property(readonly, nonatomic) _Bool affectsChatBarUnreadCount;
- (id)basePredicateForMessagesByAdding:(id)arg1;
- (_Bool)containsBlockedOrUnblockedSystemEventsAfterAnyIncomingMessages;
- (_Bool)containsDownloadedMedia;
- (_Bool)containsOutgoingMessages;
- (_Bool)containsUserMessages;
- (long long)countOfEligibleForUnreadMessagesAfterSort:(int)arg1;
- (long long)countOfMessagesAfterSort:(int)arg1 limit:(long long)arg2;
- (unsigned long long)countOfPendingNonExpiredMessages;
- (id)deleteConfirmationText;
- (void)deleteInterruptedPTTRecordingIfNeeded;
@property(readonly, nonatomic) int earliestUnreadSort;
- (id)firstUnreadMessage;
- (void)generateNewWebModifyTag;
@property(readonly, copy, nonatomic) NSArray *ghostMessages;
- (id)groupStateDescription;
@property(readonly, nonatomic) _Bool hasStarredMessages;
- (_Bool)hasUnreadCountForGroupSession;
- (void)invalidateStatusMessageCount;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (_Bool)isChatInfrequentlyRead;
- (_Bool)isChatReadable;
- (_Bool)isEnabledForPayments;
- (id)messagesWithMessageIDs:(id)arg1;
@property(readonly, nonatomic) NSString *nameForWebClient;
- (id)newestStatusBeforeSort:(int)arg1 fetchLimit:(unsigned long long)arg2 hasMore:(_Bool *)arg3;
@property(readonly, nonatomic) unsigned long long numberOfStarredMessages;
- (unsigned long long)numberOfStarredMessagesWithLimit:(unsigned long long)arg1;
- (id)oldestStatusBeforeSort:(int)arg1 fetchLimit:(unsigned long long)arg2 hasMore:(_Bool *)arg3;
@property(readonly, nonatomic) WAUserJID *paymentDefaultReceiverJID;
@property(readonly, copy, nonatomic) NSArray *pendingGhostMessages;
- (void)prepareGroupInfo;
- (void)promptToChangeSaveToCameraRollSettingFromViewController:(id)arg1 sourceView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)promptUserToAttachMediaToChatHistoryFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetLastMessage;
- (void)resetLastMessage:(_Bool)arg1;
@property(copy, nonatomic) WAChatSessionSavedReply *savedReply;
- (void)showEmptyChatHistoryAlertViewFromViewController:(id)arg1;
- (id)statusBeforeSort:(int)arg1 fetchLimit:(unsigned long long)arg2 hasMore:(_Bool *)arg3 mostRecent:(_Bool)arg4;
@property(readonly, nonatomic) unsigned long long statusMessageCount;
@property(readonly, nonatomic) WAChatSessionTransaction *transaction;
- (void)updateSortIndexOfMessage:(id)arg1;
- (void)updateStatusParticipants;
- (void)updateWithUnreadCount:(int)arg1;
- (int)validSortBeforeSort:(int)arg1 offset:(long long)arg2;
@property(readonly, nonatomic) NSString *webModifyTag;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *contactIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) short spotlightStatus;
@property(readonly) Class superclass;
@end
