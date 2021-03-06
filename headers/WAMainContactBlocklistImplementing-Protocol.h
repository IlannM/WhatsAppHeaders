//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAAccountSyncNotificationProcessing-Protocol.h"
#import "WACoreContactBlocklistImplementing-Protocol.h"

@class NSNotification, NSString, WABizOptOutInfo, WAUserJID;

@protocol WAMainContactBlocklistImplementing <WAAccountSyncNotificationProcessing, WACoreContactBlocklistImplementing>
- (void)blockJID:(WAUserJID *)arg1 bizOptOutInfo:(WABizOptOutInfo *)arg2 webClientRequestID:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)processConnectionStateDidChange:(NSNotification *)arg1;
- (void)refreshWithNetworkRequest:(void (^)(NSError *))arg1;
- (void)setNeedsDownstreamSync;
- (void)unblockJID:(WAUserJID *)arg1 webClientRequestID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end

