//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WASearchEngineSQLRestriction : NSObject
{
    NSString *_queryClause;
    NSArray *_arguments;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
- (id)initWithQueryClause:(id)arg1 arguments:(id)arg2;
@property(readonly, nonatomic) NSString *queryClause; // @synthesize queryClause=_queryClause;

@end
