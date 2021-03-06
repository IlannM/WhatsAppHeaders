//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WABizMessageLoggingData : NSObject
{
    _Bool _isFromMe;
    _Bool _isForward;
    _Bool _isMessageBeforeCurrentPeriod;
    int _sort;
    long long _messageMediaType;
}

- (id)initWithIsFromMe:(_Bool)arg1 messageMediaType:(long long)arg2 isForward:(_Bool)arg3 sort:(int)arg4 isMessageBeforeCurrentPeriod:(_Bool)arg5;
@property(readonly, nonatomic) _Bool isForward; // @synthesize isForward=_isForward;
@property(readonly, nonatomic) _Bool isFromMe; // @synthesize isFromMe=_isFromMe;
@property(readonly, nonatomic) _Bool isMessageBeforeCurrentPeriod; // @synthesize isMessageBeforeCurrentPeriod=_isMessageBeforeCurrentPeriod;
@property(readonly, nonatomic) long long messageMediaType; // @synthesize messageMediaType=_messageMediaType;
@property(readonly, nonatomic) int sort; // @synthesize sort=_sort;

@end

