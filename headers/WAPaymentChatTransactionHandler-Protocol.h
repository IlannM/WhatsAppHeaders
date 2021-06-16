//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class WAChatJID, WAChatSession, WAMessage, WAPaymentBaseTransaction, WAPaymentConfiguration, WAPaymentNewTransactionData, WAUserJID, _TtC8Payments16WAPaymentManager;

@protocol WAPaymentChatTransactionHandler
- (WAChatSession *)newOrExistingTransactionChatSessionFor:(WAChatJID *)arg1;
- (WAPaymentBaseTransaction *)requestPaymentWithPaymentManager:(_TtC8Payments16WAPaymentManager *)arg1 configuration:(WAPaymentConfiguration *)arg2 data:(WAPaymentNewTransactionData *)arg3;
- (void)sendCancelCollectRequestMessageFor:(WAPaymentBaseTransaction *)arg1;
- (void)sendDeclineCollectRequestMessageFor:(WAPaymentBaseTransaction *)arg1;
- (void)sendInviteMessageToJID:(WAUserJID *)arg1 chatSession:(WAChatSession *)arg2 serviceType:(int)arg3;
- (WAPaymentBaseTransaction *)sendPaymentWithPaymentManager:(_TtC8Payments16WAPaymentManager *)arg1 configuration:(WAPaymentConfiguration *)arg2 data:(WAPaymentNewTransactionData *)arg3;
- (WAChatSession *)transactionSaveChatSessionWith:(WAPaymentConfiguration *)arg1;
- (void)updateMessageBubbleFor:(WAMessage *)arg1;
@end

