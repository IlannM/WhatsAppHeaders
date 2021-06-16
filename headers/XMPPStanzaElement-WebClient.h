//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/XMPPStanzaElement.h>

@class NSArray;

@interface XMPPStanzaElement (WebClient)
+ (id)addLastMessages:(id)arg1 isResume:(_Bool)arg2 isLastBatch:(_Bool)arg3 isPaginated:(_Bool)arg4 page:(unsigned long long)arg5 count:(unsigned long long)arg6;
+ (id)addMessages:(id)arg1 isAddingAfter:(_Bool)arg2 isLastBatch:(_Bool)arg3 isPaginated:(_Bool)arg4 page:(unsigned long long)arg5 count:(unsigned long long)arg6;
+ (id)addUnreadContextWithMessages:(id)arg1 firstUnreadID:(id)arg2 isResume:(_Bool)arg3 isLastBatch:(_Bool)arg4;
+ (id)chatQueryResponseWithChatStates:(id)arg1 isDuplicate:(_Bool)arg2 statusChecksum:(id)arg3;
+ (id)contactsQueryResponseWithJIDEntities:(id)arg1 isDuplicate:(_Bool)arg2;
+ (id)updateFrequentChatsForAnyType:(id)arg1 imageType:(id)arg2 videoType:(id)arg3;
+ (id)updateParticipantUserJIDs:(id)arg1 inBroadcastListWithJID:(id)arg2;
+ (id)webClientBatteryElement;
+ (id)webClientChatElementFromChatSession:(id)arg1;
+ (id)webClientConfigElement;
+ (id)webClientMessageElementFromMessage:(id)arg1;
+ (id)webClientMessageElementFromMessage:(id)arg1 invisible:(_Bool)arg2 action:(_Bool)arg3;
+ (id)webClientStickerElementFromSticker:(id)arg1 elementName:(id)arg2;
+ (id)webClientStickerPackElementFromStickerPack:(id)arg1;
+ (id)webClientUserElementFromJIDEntity:(id)arg1;
- (id)encryptUsingWebSession:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *participantUserJIDs;
- (void)setIndexFromMessage:(id)arg1;
- (void)setIndexFromMessageID:(id)arg1;
- (void)setVerifiedNameInfo:(id)arg1;
@end
