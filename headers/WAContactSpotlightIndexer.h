//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WASpotlightIndexer.h"

@class NSUserDefaults;

@interface WAContactSpotlightIndexer : WASpotlightIndexer
{
    NSUserDefaults *_userDefaults;
}

+ (void)setNeedsRemoveAllItemsWithUserDefaults:(id)arg1;
- (void).cxx_destruct;
- (void)assignManager:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)internalChatPresenterForItemIdentifier:(id)arg1;
- (void)removeAllItems;
- (void)removeAllItemsImpl;
- (_Bool)runTaskWithCompletion:(CDUnknownBlockType)arg1;
- (id)searchableItemForIndexableItem:(id)arg1 usingItemIdentifier:(id)arg2;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

@end
