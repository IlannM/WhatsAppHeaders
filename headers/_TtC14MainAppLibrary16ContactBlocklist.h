//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s4Core16ContactBlocklistCN.h"

#import "WAMainContactBlocklistImplementing-Protocol.h"

@class MISSING_TYPE;

@interface _TtC14MainAppLibrary16ContactBlocklist : _$s4Core16ContactBlocklistCN <WAMainContactBlocklistImplementing>
{
    MISSING_TYPE *Log;
    MISSING_TYPE *delegate;
    MISSING_TYPE *migratedStateManager;
    MISSING_TYPE *xmppConnection;
    MISSING_TYPE *sessionPreferences;
    MISSING_TYPE *accountSyncServiceProvider;
    MISSING_TYPE *awaitingResponseV1;
    MISSING_TYPE *didSendInitialSyncPersistentRequestV2;
}

- (void)blockJID:(id)arg1 bizOptOutInfo:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processAccountSyncNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processConnectionStateDidChange:(id)arg1;
- (void)refreshWithNetworkRequest:(CDUnknownBlockType)arg1;
- (void)setNeedsDownstreamSync;
- (void)unblockJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

