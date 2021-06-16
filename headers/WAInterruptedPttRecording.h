//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAChatJID;

@interface WAInterruptedPttRecording : NSObject
{
    _Bool _recordingLocked;
    double _duration;
    WAChatJID *_chatJID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)initWithChatJID:(id)arg1 duration:(double)arg2 recordingLocked:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly, nonatomic) _Bool recordingLocked; // @synthesize recordingLocked=_recordingLocked;

@end
