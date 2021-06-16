//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSString, WAGroupJID;
@protocol WAServerDate;

@interface WACallEvent : NSObject <NSSecureCoding>
{
    _Bool _incoming;
    _Bool _video;
    short _outcome;
    NSDate<WAServerDate> *_date;
    long long _bytesSent;
    long long _bytesReceived;
    double _duration;
    NSArray *_participants;
    WAGroupJID *_groupJID;
}

+ (short)callOutcomeForCallResult:(int)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(readonly, copy, nonatomic) NSString *callDataUsageForDisplay;
@property(readonly, copy, nonatomic) NSString *callDateForDisplay;
@property(readonly, copy, nonatomic) NSString *callDateForHeader;
@property(readonly, copy, nonatomic) NSString *callDescription;
@property(readonly, copy, nonatomic) NSString *callDescriptionForVoiceOver;
@property(readonly, copy, nonatomic) NSString *callDurationForDisplay;
@property(readonly, copy, nonatomic) NSString *callNameForDisplay;
@property(readonly, copy, nonatomic) NSString *callNameForDisplayNoCaller;
@property(readonly, copy, nonatomic) NSString *callNameForVoiceOver;
@property(readonly, copy, nonatomic) NSString *callTimeForDisplay;
@property(readonly, copy, nonatomic) NSDate<WAServerDate> *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long day;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) WAGroupJID *groupJID; // @synthesize groupJID=_groupJID;
@property(readonly, copy, nonatomic) NSString *groupNameForDisplay;
@property(readonly, nonatomic) _Bool incoming; // @synthesize incoming=_incoming;
- (id)initMissedEventWithParticipants:(id)arg1 video:(_Bool)arg2 callTime:(double)arg3 groupJID:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncoming:(_Bool)arg1 outcome:(short)arg2 video:(_Bool)arg3 date:(id)arg4 duration:(double)arg5 bytesSent:(long long)arg6 bytesReceived:(long long)arg7 participants:(id)arg8 groupJID:(id)arg9;
- (id)initWithParticipants:(id)arg1 callLogInfo:(id)arg2 callInfo:(id)arg3 groupJID:(id)arg4;
- (id)initWithParticipants:(id)arg1 callOutcome:(short)arg2 stanzaElement:(id)arg3 groupJID:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool missedCall;
@property(readonly, nonatomic) long long month;
- (id)namesForParticipants:(id)arg1;
- (id)orderedParticipantsWithConnectedFirst:(id)arg1;
@property(readonly, nonatomic) short outcome; // @synthesize outcome=_outcome;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
- (id)participants:(id)arg1 OrderedOnAddressBookAvailabilityCallerFirst:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSArray *sortedParticipantsByAB;
- (id)sortedParticipantsByABAndAlphbaticallyWithCallerFirst:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSArray *sortedParticipantsByABAndConnection;
@property(readonly, copy, nonatomic) NSArray *sortedParticipantsByABNoCaller;
@property(readonly, nonatomic) _Bool video; // @synthesize video=_video;
@property(readonly, nonatomic) long long year;

@end

