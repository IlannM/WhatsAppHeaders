//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WAStoredMediaManagerMessagesFetchResult : NSObject
{
    NSArray *_messages;
    NSString *_totalSize;
    long long _totalCount;
}

- (void).cxx_destruct;
- (id)initWithMessages:(id)arg1 totalSize:(id)arg2 totalCount:(long long)arg3;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(readonly, nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, copy, nonatomic) NSString *totalSize; // @synthesize totalSize=_totalSize;

@end
