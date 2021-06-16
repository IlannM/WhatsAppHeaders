//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WAChatJID, WAGroupJID;
@protocol OS_dispatch_queue, WAChatWithActivityJID, WADeviceDate, WAServerDate;

@interface XMPPClient : NSObject
{
    unsigned long long _lastSentChatState;
    NSObject<OS_dispatch_queue> *_outgoingChatStateQueue;
    unsigned long long _lastReceivedChatState;
    NSObject<OS_dispatch_queue> *_incomingChatStateQueue;
    unsigned long long _presence;
    NSDate<WADeviceDate> *_outgoingChatStateTimestamp;
    NSDate<WADeviceDate> *_incomingChatStateTimestamp;
    WAGroupJID *_groupJIDForChatState;
    NSDate<WAServerDate> *_lastSeenTimestamp;
    WAChatJID<WAChatWithActivityJID> *_jid;
}

- (void).cxx_destruct;
- (id)activityJIDWithParticipantForChatState;
@property(retain) WAGroupJID *groupJIDForChatState; // @synthesize groupJIDForChatState=_groupJIDForChatState;
@property(retain) NSDate<WADeviceDate> *incomingChatStateTimestamp; // @synthesize incomingChatStateTimestamp=_incomingChatStateTimestamp;
- (id)initWithJID:(id)arg1;
@property(readonly) WAChatJID<WAChatWithActivityJID> *jid; // @synthesize jid=_jid;
@property unsigned long long lastReceivedChatState;
@property(retain) NSDate<WAServerDate> *lastSeenTimestamp; // @synthesize lastSeenTimestamp=_lastSeenTimestamp;
@property unsigned long long lastSentChatState;
@property(retain) NSDate<WADeviceDate> *outgoingChatStateTimestamp; // @synthesize outgoingChatStateTimestamp=_outgoingChatStateTimestamp;
@property unsigned long long presence; // @synthesize presence=_presence;
- (void)reset;

@end
