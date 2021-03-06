//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s4Core13DeviceManagerCN.h"

@class MISSING_TYPE;
@protocol WASignalIdentityKeyManaging, WAUnifiedSyncDataTypeFetching;

@interface WADeviceManagerMain : _$s4Core13DeviceManagerCN
{
    MISSING_TYPE *syncManager;
    MISSING_TYPE *deviceStorage;
    MISSING_TYPE *deviceStorageUpdater;
    MISSING_TYPE *chatStorage;
    MISSING_TYPE *contactsStorage;
    MISSING_TYPE *xmppConnection;
    MISSING_TYPE *ownSyncManager;
    MISSING_TYPE *userDefaults;
    MISSING_TYPE *keyValueStorage;
    MISSING_TYPE *$__lazy_storage_$_notificationHandler;
    MISSING_TYPE *coreContext;
    MISSING_TYPE *$__lazy_storage_$_stashedDeviceListMergeQueue;
}

- (void).cxx_destruct;
- (void)handleAccountSyncDeviceListPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDeviceNotificationStanza:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasAnyStashedDeviceListChangesFromNSE;
- (id)initWithContext:(id)arg1 chatStorage:(id)arg2 localKeyValueStore:(id)arg3 contactsStorage:(id)arg4 xmppConnection:(id)arg5 ownDeviceSyncManager:(id)arg6 ownDeviceLoader:(id)arg7;
- (id)initWithContext:(id)arg1 chatStorage:(id)arg2 localKeyValueStore:(id)arg3 ownDeviceLoader:(id)arg4 processType:(unsigned long long)arg5;
- (void)mergeStashedDeviceListChangesFromNSEWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveDevicesForIncomingIdenties:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <WASignalIdentityKeyManaging> signalIdentityManager;
@property(nonatomic) __weak id <WAUnifiedSyncDataTypeFetching> syncManager; // @synthesize syncManager;
- (_Bool)wipeDeviceTable:(id *)arg1;

@end

