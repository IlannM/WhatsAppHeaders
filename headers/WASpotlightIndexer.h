//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInvocation, NSPredicate, NSString, WASpotlightManager, WAStorage, WATask;

@interface WASpotlightIndexer : NSObject
{
    WAStorage *_storage;
    WATask *_taskIndex;
    NSInvocation *_keyInvocation;
    unsigned long long _itemsPerRequest;
    NSPredicate *_resetPredicate;
    WASpotlightManager *_manager;
    NSString *_domainPrefix;
    Class _entityClass;
}

- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)assignManager:(id)arg1;
- (_Bool)contextContainsUnindexedItems:(id)arg1;
@property(readonly, copy, nonatomic) NSString *domainPrefix; // @synthesize domainPrefix=_domainPrefix;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (_Bool)indexSomeItemsUsingContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUniqueDomain:(id)arg1 storage:(id)arg2 entityType:(Class)arg3 keySelector:(SEL)arg4 resetPredicate:(id)arg5;
- (id)internalChatPresenterForItemIdentifier:(id)arg1;
- (id)internalFetchItemsWithBaseRequest:(id)arg1 context:(id)arg2;
- (id)internalFetchObjectIDsForItemIdentifiers:(id)arg1 context:(id)arg2;
- (void)internalResetItemsMatchingPredicate:(id)arg1 context:(id)arg2;
- (void)internalResetSearchableItems:(id)arg1 context:(id)arg2;
- (id)itemIdentifierForIndexableItem:(id)arg1;
@property(readonly, nonatomic) __weak WASpotlightManager *manager; // @synthesize manager=_manager;
- (void)reindexSearchableItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeItemsWithItemIdentifiers:(id)arg1;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)runTaskWithCompletion:(CDUnknownBlockType)arg1;
- (id)searchableItemForIndexableItem:(id)arg1 usingItemIdentifier:(id)arg2;
- (void)setNeedsIndexing;
- (id)uniqueIdentifierForItemIdentifier:(id)arg1;

@end

