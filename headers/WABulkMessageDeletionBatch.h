//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAPrepareRevokeDeletionBatch.h"

@interface WABulkMessageDeletionBatch : WAPrepareRevokeDeletionBatch
{
    int _earliestUnreadSort;
    int _deletedUnreadCount;
    int _deletedImportantMessagesCount;
    long long _reason;
}

+ (void)applyDeletedCount:(int)arg1 forCountState:(unsigned long long)arg2 toChatTransaction:(id)arg3;
@property(readonly, nonatomic) int deletedImportantMessagesCount; // @synthesize deletedImportantMessagesCount=_deletedImportantMessagesCount;
@property(readonly, nonatomic) int deletedUnreadCount; // @synthesize deletedUnreadCount=_deletedUnreadCount;
- (void)evaluate:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 chatSession:(id)arg2 reason:(long long)arg3 earliestUnreadSort:(int)arg4;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;

@end
