//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAOwnDeviceStorageManager.h>

@class WAPersistentKeyValueStore, WARemovedOwnDeviceStorageManager;
@protocol WAOwnDeviceManagerDeviceListDelegateRemoving;

@interface WAOwnDeviceStorageManagerMain : WAOwnDeviceStorageManager
{
    WAPersistentKeyValueStore *_kvStore;
    WARemovedOwnDeviceStorageManager *_removedOwnDeviceStorageManager;
    id <WAOwnDeviceManagerDeviceListDelegateRemoving> _deviceListDelegate;
}

- (void).cxx_destruct;
- (_Bool)addCompanionDevices:(id)arg1 withUpdatedKeyIndexList:(id)arg2;
@property(nonatomic) __weak id <WAOwnDeviceManagerDeviceListDelegateRemoving> deviceListDelegate; // @synthesize deviceListDelegate=_deviceListDelegate;
- (id)initWithKeyValueStore:(id)arg1 optInStateManager:(id)arg2 removedOwnDeviceStorageManager:(id)arg3;
- (_Bool)reallyRemoveAllCompanionDevices;
- (void)removeAllCompanionDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeCompanionDevicesForJIDs:(id)arg1 accountUserJID:(id)arg2 removedRemotely:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)removeDevicesForSignOut;
- (_Bool)saveCurrentkeyIndexList:(id)arg1 error:(id *)arg2;
- (_Bool)setLastSeenDate:(id)arg1 forCompanionWithDeviceJID:(id)arg2;

@end

