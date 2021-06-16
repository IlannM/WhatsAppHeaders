//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, WAPaymentSyncConfiguration, WAUserJID;

@protocol WAPaymentSyncHandler
- (void)paymentsRequestAllListsQuery;
- (void)paymentsRequestNotificationSyncForHash:(NSData *)arg1 configuration:(WAPaymentSyncConfiguration *)arg2;
- (void)requestInteractivePaymentsQueryForUserJID:(WAUserJID *)arg1 completion:(void (^)(_Bool))arg2;
- (void)requestInteractivePaymentsQueryForUserJID:(NSArray *)arg1 withConfiguration:(WAPaymentSyncConfiguration *)arg2 completion:(void (^)(_Bool))arg3;
@end
