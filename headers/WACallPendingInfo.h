//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WACallCommonInfo.h"

@class NSArray, WACallLogInfo, WAGroupJID, WAUserJID;

@interface WACallPendingInfo : WACallCommonInfo
{
    _Bool _canHoldAndAccept;
    int _callResult;
    WACallLogInfo *_callLogInfo;
    NSArray *_peerParticipants;
    WAGroupJID *_groupJID;
    WAUserJID *_initialPeerJID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WACallLogInfo *callLogInfo; // @synthesize callLogInfo=_callLogInfo;
@property(readonly, nonatomic) int callResult; // @synthesize callResult=_callResult;
@property(readonly, nonatomic) _Bool canHoldAndAccept; // @synthesize canHoldAndAccept=_canHoldAndAccept;
@property(readonly, nonatomic) WAGroupJID *groupJID; // @synthesize groupJID=_groupJID;
- (id)initWithPendingCallInfo:(CDStruct_3acf95f7)arg1;
@property(readonly, nonatomic) WAUserJID *initialPeerJID; // @synthesize initialPeerJID=_initialPeerJID;
@property(readonly, nonatomic) NSArray *peerParticipantJIDs;
@property(readonly, nonatomic) NSArray *peerParticipants; // @synthesize peerParticipants=_peerParticipants;

@end

