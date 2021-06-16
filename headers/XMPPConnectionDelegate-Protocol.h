//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, WAActorJIDWrapper, WAChatJID, WAIncomingStanza, WAJID, WAMessageID, WAUserJID, XMPPCallAckStanza, XMPPCallStanza, XMPPConnection, XMPPMessageStatusChangeRequest, XMPPReceiptStanza;
@protocol WAChatWithActivityJID, WAServerDate, WAXIncomingStanzaUserNoticeBroadcastRequest;

@protocol XMPPConnectionDelegate <NSObject>
- (void)xmppConnection:(XMPPConnection *)arg1 callStanzaDidTimeOut:(XMPPCallStanza *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 chatStateChanged:(unsigned long long)arg2 forJID:(WAChatJID<WAChatWithActivityJID> *)arg3 participantJID:(WAUserJID *)arg4;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveCallAck:(XMPPCallAckStanza *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveCallOfferReceipt:(XMPPReceiptStanza *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveCallRekeyReceipt:(XMPPReceiptStanza *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveIncomingCallStanza:(WAIncomingStanza *)arg2;
- (_Bool)xmppConnection:(XMPPConnection *)arg1 didReceiveMessages:(NSArray *)arg2 error:(out id *)arg3;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveOfflineReceiptWithStanzas:(NSArray *)arg2 fromJID:(WAJID *)arg3 participantJID:(WAUserJID *)arg4;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveRetryReceiptForMessageID:(WAMessageID *)arg2 fromActorJIDWrapper:(WAActorJIDWrapper *)arg3 registrationId:(NSNumber *)arg4 retryCount:(unsigned int)arg5 offline:(_Bool)arg6;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveServerErrorAckForIncomingMessageWithStanzaID:(NSString *)arg2 fromJID:(WAJID *)arg3 participantJID:(WAUserJID *)arg4;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveServerErrorForOutgoingMessageWithStanzaID:(NSString *)arg2 receipt:(WAIncomingStanza *)arg3;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveUserNoticeBroadcast:(id <WAXIncomingStanzaUserNoticeBroadcastRequest>)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didRequestIncomingMessageStatusChanges:(NSArray *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didRequestOutgoingMessageStatusChangeWithRequest:(XMPPMessageStatusChangeRequest *)arg2 completionBlock:(void (^)(void))arg3;
- (void)xmppConnection:(XMPPConnection *)arg1 peerDevicePresenceChanged:(_Bool)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 presenceChanged:(unsigned long long)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 presenceChanged:(unsigned long long)arg2 forJID:(WAChatJID<WAChatWithActivityJID> *)arg3;
- (_Bool)xmppConnection:(XMPPConnection *)arg1 startLocationSharingForJID:(WAChatJID *)arg2 duration:(int)arg3;
- (void)xmppConnection:(XMPPConnection *)arg1 stateChanged:(unsigned long long)arg2;
- (unsigned long long)xmppConnection:(XMPPConnection *)arg1 statusChanged:(int)arg2 forOutgoingMessagesWithStanzas:(NSArray *)arg3 chatJID:(WAChatJID *)arg4 actorJIDWrapper:(WAActorJIDWrapper *)arg5 ackTimestamp:(NSDate<WAServerDate> *)arg6 userData:(NSDictionary *)arg7;
- (void)xmppConnectionDidAuthenticate:(XMPPConnection *)arg1 dataCenter:(NSString *)arg2;
- (void)xmppConnectionDidConnect:(XMPPConnection *)arg1;
- (void)xmppConnectionDidDisconnect:(XMPPConnection *)arg1;
- (void)xmppConnectionDidNotAuthenticate:(XMPPConnection *)arg1 dataCenter:(NSString *)arg2 failureCode:(long long)arg3 lockDuration:(double)arg4 retryAfter:(double)arg5 tempBanReasonCode:(long long)arg6 tempBanURL:(NSString *)arg7 tempBanMessage:(NSString *)arg8;
- (void)xmppConnectionDidReceiveOfflineMarker:(XMPPConnection *)arg1;
- (void)xmppConnectionStopLocationSharing:(XMPPConnection *)arg1;
@end

