//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WACallCommonInfo.h"

@class NSArray, WACallHeldInfo, WACallParticipant, WACallPendingInfo, WAGroupJID, WAUserJID;

@interface WACallInfo : WACallCommonInfo
{
    _Bool _isCallActive;
    _Bool _videoEnabledAtCallStart;
    _Bool _ending;
    _Bool _videoCaptureStarted;
    _Bool _videoPreviewStarted;
    _Bool _isGroupCallEnabled;
    _Bool _isGroupCall;
    _Bool _isGroupCallCreatedOnServer;
    _Bool _isGroupCallJoinable;
    int _audioDuration;
    int _videoDuration;
    int _callResult;
    WAUserJID *_initialPeerJID;
    WAUserJID *_creatorJID;
    WACallHeldInfo *_heldCallInfo;
    WACallPendingInfo *_pendingCallInfo;
    NSArray *_participants;
    WAGroupJID *_groupJID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int audioDuration; // @synthesize audioDuration=_audioDuration;
@property(readonly, nonatomic) int callResult; // @synthesize callResult=_callResult;
@property(readonly, nonatomic) WAUserJID *creatorJID; // @synthesize creatorJID=_creatorJID;
@property(readonly, nonatomic) _Bool ending; // @synthesize ending=_ending;
- (void)fillCallInfoWithHeldCallInfoOnEnding:(id)arg1;
@property(readonly, nonatomic) WAGroupJID *groupJID; // @synthesize groupJID=_groupJID;
@property(copy, nonatomic) WACallHeldInfo *heldCallInfo; // @synthesize heldCallInfo=_heldCallInfo;
- (id)initWithCallID:(id)arg1 peerJIDs:(id)arg2 groupJID:(id)arg3 videoEnabled:(_Bool)arg4 startedByMe:(_Bool)arg5;
- (id)initWithCallInfo:(struct wa_call_info_t)arg1;
@property(readonly, nonatomic) WAUserJID *initialPeerJID; // @synthesize initialPeerJID=_initialPeerJID;
@property(readonly, nonatomic) _Bool isCallActive; // @synthesize isCallActive=_isCallActive;
- (_Bool)isCallIDHeld:(id)arg1;
- (_Bool)isCallIDPending:(id)arg1;
@property(readonly, nonatomic) _Bool isGroupCall; // @synthesize isGroupCall=_isGroupCall;
@property(readonly, nonatomic) _Bool isGroupCallCreatedOnServer; // @synthesize isGroupCallCreatedOnServer=_isGroupCallCreatedOnServer;
@property(readonly, nonatomic) _Bool isGroupCallEnabled; // @synthesize isGroupCallEnabled=_isGroupCallEnabled;
@property(readonly, nonatomic) _Bool isGroupCallJoinable; // @synthesize isGroupCallJoinable=_isGroupCallJoinable;
- (id)participantWithJID:(id)arg1;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) NSArray *participantsJID;
@property(readonly, nonatomic) NSArray *peerParticipants;
@property(readonly, nonatomic) NSArray *peerParticipantsJID;
@property(copy, nonatomic) WACallPendingInfo *pendingCallInfo; // @synthesize pendingCallInfo=_pendingCallInfo;
@property(readonly, nonatomic) WACallParticipant *selfParticipant;
@property(readonly, nonatomic) _Bool videoCaptureStarted; // @synthesize videoCaptureStarted=_videoCaptureStarted;
@property(readonly, nonatomic) int videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) _Bool videoEnabledAtCallStart; // @synthesize videoEnabledAtCallStart=_videoEnabledAtCallStart;
@property(readonly, nonatomic) _Bool videoPreviewStarted; // @synthesize videoPreviewStarted=_videoPreviewStarted;

@end
