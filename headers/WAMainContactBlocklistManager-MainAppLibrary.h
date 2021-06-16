//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMainContactBlocklistManager.h"

#import "WAMainContactBlocklistImplementing-Protocol.h"
#import "WAPaymentBlockedContactsList-Protocol.h"

@interface WAMainContactBlocklistManager (MainAppLibrary) <WAMainContactBlocklistImplementing, WAPaymentBlockedContactsList>
- (void)blockJID:(id)arg1 bizOptOutInfo:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processAccountSyncNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processConnectionStateDidChange:(id)arg1;
- (void)refreshWithNetworkRequest:(CDUnknownBlockType)arg1;
- (void)setNeedsDownstreamSync;
- (void)unblockJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
@end
