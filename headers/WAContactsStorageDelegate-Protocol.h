//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, WAContactsStorage;

@protocol WAContactsStorageDelegate
- (void)contactsStorage:(WAContactsStorage *)arg1 didModifyContacts:(NSDictionary *)arg2 removeMissingJIDs:(_Bool)arg3;
- (void)contactsStorageDidUpdateContacts:(WAContactsStorage *)arg1;
- (void)contactsStorageDidUpdateStatus:(WAContactsStorage *)arg1;
@end

