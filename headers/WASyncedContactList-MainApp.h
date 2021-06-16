//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WASyncedContactList.h>

@protocol WASyncedContactListProvidingMainApp;

@interface WASyncedContactList (MainApp)
- (void)MAIN_APP_setNeedsDownstreamSync;
- (void)MAIN_APP_setNeedsUpstreamSync;
- (void)MAIN_APP_xmppConnectionStateDidChange:(id)arg1;
- (_Bool)addJID:(id)arg1 bizOptOutInfo:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)processContactsFromServer:(id)arg1;
@property(readonly, nonatomic) __weak id <WASyncedContactListProvidingMainApp> providerMain;
- (_Bool)replaceListWithJIDs:(id)arg1;
- (void)requestListFromServer;
- (void)saveSyncedContacts:(id)arg1;
- (void)sendListToServer;
- (_Bool)setJIDs:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setNeedsDownstreamSync;
- (void)synchronize;
@end

