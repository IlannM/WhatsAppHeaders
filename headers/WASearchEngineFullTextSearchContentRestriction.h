//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NSCopying;

@interface WASearchEngineFullTextSearchContentRestriction : NSObject
{
    NSArray *_tokens;
    id <NSCopying> _groupIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSCopying> groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)initWithTokens:(id)arg1 groupIdentifier:(id)arg2;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;

@end

