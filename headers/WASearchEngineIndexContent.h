//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WASearchEngineIndexContent : NSObject
{
    long long _indexLevel;
    NSArray *_contents;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, nonatomic) long long indexLevel; // @synthesize indexLevel=_indexLevel;
- (id)initWithIndexLevel:(long long)arg1 contents:(id)arg2;

@end

