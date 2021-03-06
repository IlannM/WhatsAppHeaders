//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WAPersistentKeyValueStore;

@interface WAGroupInviteStore : NSObject
{
    WAPersistentKeyValueStore *_kvStore;
}

- (void).cxx_destruct;
- (void)addInviteForGroupJID:(id)arg1 messageID:(id)arg2 expirationDate:(id)arg3;
- (void)clearAllExpiredInvites;
- (void)deleteInvitesForGroupJID:(id)arg1 maximumExpirationDateForUserJID:(id)arg2;
- (id)fetchInvitesExpirationDatesForGroupJID:(id)arg1;
- (id)groupInvitesFromData:(id)arg1;
- (id)initWithKeyValueStore:(id)arg1 taskKeyValueStore:(id)arg2 taskManager:(id)arg3;
- (id)internalFetchInvitesForGroupJID:(id)arg1;
- (_Bool)isInviteInvalid:(id)arg1;
- (void)scheduleExpiryCleanupTaskWithManager:(id)arg1 taskKeyValueStore:(id)arg2;

@end

