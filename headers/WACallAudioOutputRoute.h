//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSessionPortDescription, NSString;

@interface WACallAudioOutputRoute : NSObject
{
    AVAudioSessionPortDescription *_portDescription;
    int _type;
}

- (void).cxx_destruct;
- (id)initWithDescription:(id)arg1;
- (id)initWithType:(int)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) AVAudioSessionPortDescription *portDescription;
@property(readonly, nonatomic) int type; // @synthesize type=_type;

@end

