//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WASearchResultSection.h"

@class NSArray;

@interface WAContactsResultSection : WASearchResultSection
{
    NSArray *_allContacts;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *allContacts; // @synthesize allContacts=_allContacts;
- (id)initWithObjectType:(unsigned long long)arg1;
- (_Bool)isObjectValid:(id)arg1;
- (id)objectEnum;
- (void)searchWithChatSection:(id)arg1 insertedIndexes:(out id *)arg2;

@end

