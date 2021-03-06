//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMPPWebClientIQFactory : NSObject
{
}

+ (id)actionQueryResponseWithResultCodes:(id)arg1 replaced:(_Bool)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)addLastMessages:(id)arg1 isResume:(_Bool)arg2 isLastBatch:(_Bool)arg3 forWebSession:(id)arg4;
+ (id)addMessage:(id)arg1 isAnUpdate:(_Bool)arg2 invisible:(_Bool)arg3 forWebSession:(id)arg4;
+ (id)addMessages:(id)arg1 isAddingAfter:(_Bool)arg2 isLastBatch:(_Bool)arg3 forWebSession:(id)arg4;
+ (id)addUnreadContextWithMessages:(id)arg1 firstUnreadID:(id)arg2 isResume:(_Bool)arg3 isLastBatch:(_Bool)arg4 forWebSession:(id)arg5;
+ (id)callOfferQueryResponseWithCode:(long long)arg1 callOffer:(id)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)callQueryResponseWithCode:(long long)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)changeNumberInChatWithUserJID:(id)arg1 oldUserJID:(id)arg2 newUserJID:(id)arg3 forWebSession:(id)arg4;
+ (id)chatQueryResponseWithChatStates:(id)arg1 isDuplicate:(_Bool)arg2 isPreemptive:(_Bool)arg3 statusChecksum:(id)arg4 requestID:(id)arg5 forWebSession:(id)arg6;
+ (id)checksumForStickerEventType:(long long)arg1;
+ (id)contactsQueryResponseWithJIDEntities:(id)arg1 isDuplicate:(_Bool)arg2 isPreemptive:(_Bool)arg3 requestID:(id)arg4 forWebSession:(id)arg5;
+ (id)deleteChatWithJID:(id)arg1 forWebSession:(id)arg2;
+ (id)deleteMessages:(id)arg1 inChatWithJID:(id)arg2 updatedModifyTag:(id)arg3 forWebSession:(id)arg4;
+ (id)deleteMessagesInChatWithJID:(id)arg1 beforeDate:(id)arg2 ofKinds:(id)arg3 includeStarredMessages:(_Bool)arg4 updatedModifyTag:(id)arg5 forWebSession:(id)arg6;
+ (id)emojiQueryResponseWithWeights:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)ephemeralMessagesExpiredInChatWithJID:(id)arg1 beforeTimestamp:(double)arg2 updatedModifyTag:(id)arg3 forWebSession:(id)arg4;
+ (id)groupInvitedParticipantsQueryResponseWithChatSession:(id)arg1 requestID:(id)arg2 invitedParticipantJIDs:(id)arg3 forWebSession:(id)arg4;
+ (id)groupQueryResponseWithChatSession:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)identityQueryResponseWithUserJID:(id)arg1 fingerprint:(id)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)locationQueryResponseWithParticipants:(id)arg1 duration:(long long)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)loginAcceptWithClientToken:(id)arg1 password:(id)arg2 persistent:(_Bool)arg3 resume:(_Bool)arg4 forWebSession:(id)arg5;
+ (id)loginRejectWithReason:(unsigned long long)arg1 forWebReference:(id)arg2;
+ (id)loginTerminateWithReason:(unsigned long long)arg1;
+ (id)markAsNotSpamChatWithChatJID:(id)arg1 forWebSession:(id)arg2;
+ (id)markAsRead:(_Bool)arg1 chatJID:(id)arg2 forWebSession:(id)arg3;
+ (id)markAsSeenStatusWithMessageID:(id)arg1 forWebSession:(id)arg2;
+ (id)markAsStarred:(_Bool)arg1 messages:(id)arg2 inChatWithChatJID:(id)arg3 forWebSession:(id)arg4;
+ (id)mediaMessageQueryResponseWithMessages:(id)arg1 mediaCount:(unsigned long long)arg2 urlCount:(unsigned long long)arg3 documentCount:(unsigned long long)arg4 requestID:(id)arg5 forWebSession:(id)arg6;
+ (id)mediaMessageQueryResponseWithMessages:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)mediaQueryResponseWithCode:(long long)arg1 mediaURL:(id)arg2 mediaKey:(id)arg3 encFileHash:(id)arg4 fileHash:(id)arg5 mimeType:(id)arg6 directPath:(id)arg7 requestID:(id)arg8 forWebSession:(id)arg9;
+ (id)mediaQueryResponseWithCode:(long long)arg1 mediaURL:(id)arg2 mediaKey:(id)arg3 fileHash:(id)arg4 encFileHash:(id)arg5 directPath:(id)arg6 mimeType:(id)arg7 width:(id)arg8 height:(id)arg9 size:(id)arg10 requestID:(id)arg11 forWebSession:(id)arg12;
+ (id)mediaQueryResponseWithCode:(long long)arg1 mediaURL:(id)arg2 mediaKey:(id)arg3 sticker:(id)arg4 requestID:(id)arg5 forWebSession:(id)arg6;
+ (id)mediaQueryResponseWithCode:(long long)arg1 mediaURL:(id)arg2 mediaKey:(id)arg3 stickerPack:(id)arg4 requestID:(id)arg5 forWebSession:(id)arg6;
+ (id)messageInfoQueryResponseWithMessage:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)messageQueryResponseWithMessages:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)messageQueryResponseWithType:(id)arg1 messages:(id)arg2 attributes:(id)arg3 metricsType:(id)arg4 requestID:(id)arg5 forWebSession:(id)arg6;
+ (id)previewQueryResponseWithImage:(id)arg1 pictureID:(id)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)rankingStanzaForStatusChatSessions:(id)arg1;
+ (id)receiptQueryResponseWithReceipts:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)relayCallStanza:(id)arg1 forWebSession:(id)arg2;
+ (id)reportRankingUpdateForStatusChatSessions:(id)arg1 forWebSession:(id)arg2;
+ (id)reportStickerEvent:(long long)arg1 eventCreated:(_Bool)arg2 forSticker:(id)arg3 forWebSession:(id)arg4;
+ (id)responseWithResultCode:(long long)arg1 requestID:(id)arg2;
+ (id)resumeQueryResponseWithChatStates:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)searchQueryResponseWithMessages:(id)arg1 hasMoreResults:(_Bool)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)sendNotificationsForMessages:(id)arg1 messageCount:(unsigned long long)arg2 unreadChats:(unsigned long long)arg3 forWebSession:(id)arg4;
+ (id)serverChallenge:(id)arg1 forWebReference:(id)arg2;
+ (id)settingsQueryResponseWithArchiveSettings:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)starredQueryResponseWithMessages:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)statusQueryResponseWithChatStates:(id)arg1 checksum:(id)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)statusQueryResponseWithMessages:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)stickerPackChange:(id)arg1 stickerPackId:(id)arg2 forWebSession:(id)arg3;
+ (id)stickerPackQueryReponseWithStickerPacks:(id)arg1 totalCount:(long long)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)stickerQueryResponseWithStickers:(id)arg1 andEventType:(long long)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)stickerQueryResponseWithStickers:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)stickerQueryResponseWithStickers:(id)arg1 type:(id)arg2 checksum:(id)arg3 total:(id)arg4 requestID:(id)arg5 forWebSession:(id)arg6;
+ (id)stringForStickerEventType:(long long)arg1;
+ (id)syncQueryResponseAccepted:(_Bool)arg1 requestID:(id)arg2 forWebReference:(id)arg3;
+ (id)totalForStickerEventType:(long long)arg1;
+ (id)updateArchiveV2SettingsWithArchiveSettings:(id)arg1 forWebSession:(id)arg2;
+ (id)updateArchivedState:(_Bool)arg1 chatJID:(id)arg2 forWebSession:(id)arg3;
+ (id)updateBatteryStateForWebSession:(id)arg1;
+ (id)updateContactsWithJIDEntities:(id)arg1 removeMissingJIDs:(_Bool)arg2 forWebSession:(id)arg3;
+ (id)updateFrequentChatsForAnyType:(id)arg1 imageType:(id)arg2 videoType:(id)arg3 forWebSession:(id)arg4;
+ (id)updateIdentityWithUserJID:(id)arg1 fingerprint:(id)arg2 forWebSession:(id)arg3;
+ (id)updateLocationFromUserJID:(id)arg1 elapsed:(long long)arg2 message:(id)arg3 forWebSession:(id)arg4;
+ (id)updateMessageStatusForMessage:(id)arg1 forWebSession:(id)arg2;
+ (id)updateMuteDate:(id)arg1 chatJID:(id)arg2 forWebSession:(id)arg3;
+ (id)updateParticipantUserJIDs:(id)arg1 inBroadcastListWithJID:(id)arg2 forWebSession:(id)arg3;
+ (id)updatePinnedState:(_Bool)arg1 chatJID:(id)arg2 pinDate:(id)arg3 forWebSession:(id)arg4;
+ (id)updateWebModifyTag:(id)arg1 chatJID:(id)arg2 forWebSession:(id)arg3;
+ (id)urlQueryResponseWithTitle:(id)arg1 description:(id)arg2 canonicalURL:(id)arg3 matchedText:(id)arg4 previewType:(int)arg5 thumbnail:(id)arg6 requestID:(id)arg7 forWebSession:(id)arg8;
+ (id)userNoticeDidChangeStageWithWebState:(id)arg1 elementType:(id)arg2 requestID:(id)arg3 forWebSession:(id)arg4;
+ (id)vcardQueryResponseWithMessages:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)videoQueryResponseWithVideoURL:(id)arg1 requestID:(id)arg2 forWebSession:(id)arg3;
+ (id)webClientArchiveV2ElementFromArchiveSettings:(id)arg1;
+ (id)webClientUserNoticeElementFromWebState:(id)arg1;

@end

