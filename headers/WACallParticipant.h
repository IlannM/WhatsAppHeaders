//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class WAUserJID;

@interface WACallParticipant : NSObject <NSCopying>
{
    _Bool _invitedBySelf;
    _Bool _isMuted;
    _Bool _isInterrupted;
    _Bool _isVideoDecodePaused;
    _Bool _isVideoCodecPaused;
    _Bool _isVideoDecodeStarted;
    _Bool _isAudioVideoSwitchEnabled;
    _Bool _isAudioVideoSwitchSupported;
    _Bool _isRxTrafficStopped;
    _Bool _isRerungBySelf;
    WAUserJID *_jid;
    unsigned long long _orderId;
    unsigned long long _participantState;
    unsigned long long _videoState;
    unsigned long long _endReason;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool calling;
@property(readonly, nonatomic) _Bool connected;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long endReason; // @synthesize endReason=_endReason;
@property(readonly, nonatomic) _Bool incoming;
- (id)initWithJID:(id)arg1;
- (id)initWithParticipantInfo:(struct wa_call_participant_detail_info_t)arg1;
@property(readonly, nonatomic) _Bool invited;
@property(readonly, nonatomic) _Bool isAudioVideoSwitchEnabled; // @synthesize isAudioVideoSwitchEnabled=_isAudioVideoSwitchEnabled;
@property(readonly, nonatomic) _Bool isAudioVideoSwitchSupported; // @synthesize isAudioVideoSwitchSupported=_isAudioVideoSwitchSupported;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToParticipant:(id)arg1;
@property(nonatomic) _Bool isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, nonatomic) _Bool isRerungBySelf; // @synthesize isRerungBySelf=_isRerungBySelf;
@property(readonly, nonatomic) _Bool isRxTrafficStopped; // @synthesize isRxTrafficStopped=_isRxTrafficStopped;
@property(readonly, nonatomic) _Bool isVideoCodecPaused; // @synthesize isVideoCodecPaused=_isVideoCodecPaused;
@property(readonly, nonatomic) _Bool isVideoDecodePaused; // @synthesize isVideoDecodePaused=_isVideoDecodePaused;
@property(readonly, nonatomic) _Bool isVideoDecodeStarted; // @synthesize isVideoDecodeStarted=_isVideoDecodeStarted;
@property(readonly, nonatomic) WAUserJID *jid; // @synthesize jid=_jid;
@property(readonly, nonatomic) unsigned long long orderId; // @synthesize orderId=_orderId;
@property(readonly, nonatomic) unsigned long long participantState; // @synthesize participantState=_participantState;
@property(readonly, nonatomic) _Bool requestingVideoUpgrade;
@property(readonly, nonatomic) _Bool ringing;
@property(readonly, nonatomic) _Bool videoDisabled;
@property(readonly, nonatomic) _Bool videoPaused;
@property(readonly, nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) unsigned long long videoState; // @synthesize videoState=_videoState;
@property(readonly, nonatomic) _Bool videoStopped;

@end
