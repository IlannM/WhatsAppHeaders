//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WASearchResultSection.h"

@interface WAMessagesResultSection : WASearchResultSection
{
    unsigned long long _ftsCursor;
    unsigned long long _ftsBatchLimit;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long ftsBatchLimit; // @synthesize ftsBatchLimit=_ftsBatchLimit;
@property(nonatomic) unsigned long long ftsCursor; // @synthesize ftsCursor=_ftsCursor;
- (id)initWithObjectType:(unsigned long long)arg1;
- (_Bool)isObjectValid:(id)arg1;
- (id)objectEnum;

@end

