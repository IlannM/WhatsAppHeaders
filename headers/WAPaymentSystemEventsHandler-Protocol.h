//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, WAChatJID, WAPaymentBaseTransaction;

@protocol WAPaymentSystemEventsHandler
- (void)insertIntentSentSystemEventForChatJID:(WAChatJID *)arg1;
- (void)insertOnboardCompletedSystemEventFor:(WAChatJID *)arg1;
- (void)insertPaymentRequestTransactionExpirySystemEventForTransaction:(WAPaymentBaseTransaction *)arg1;
- (_Bool)insertSendPaymentSystemEventForChatJID:(WAChatJID *)arg1 inviteUsed:(_Bool)arg2 serviceString:(NSString *)arg3;
- (_Bool)insertSetupPaymentAccountSystemEventForChatJID:(WAChatJID *)arg1;
- (void)insertSystemEventForTransaction:(WAPaymentBaseTransaction *)arg1;
@end
