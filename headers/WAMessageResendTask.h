//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageSendTask.h"

@interface WAMessageResendTask : WAMessageSendTask
{
    _Bool _internalComplete;
    double _expiration;
}

- (_Bool)complete;
@property(readonly, nonatomic) double expiration; // @synthesize expiration=_expiration;
- (void)finish;
- (id)initWithMessage:(id)arg1 expiration:(double)arg2;

@end

