//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSNumber;

@interface _TtC14MainAppLibrary18CatalogProductList : NSObject
{
    MISSING_TYPE *products;
    MISSING_TYPE *categories;
    MISSING_TYPE *cartEnabled;
    MISSING_TYPE *isEmpty;
    MISSING_TYPE *batchSize;
    MISSING_TYPE *edgeSizePoints;
    MISSING_TYPE *jid;
    MISSING_TYPE *scale;
    MISSING_TYPE *finishedProducts;
    MISSING_TYPE *expecting;
    MISSING_TYPE *observers;
    MISSING_TYPE *pruningDelayTimer;
    MISSING_TYPE *pruningTimeInterval;
    MISSING_TYPE *fetchCompletionHandlers;
    MISSING_TYPE *lastFetchTime;
    MISSING_TYPE *finishedCollections;
    MISSING_TYPE *fetchState;
    MISSING_TYPE *collectionsFetcher;
    MISSING_TYPE *itemsFetcher;
    MISSING_TYPE *needsReset;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSArray *allProducts;
@property(nonatomic) _Bool cartEnabled; // @synthesize cartEnabled;
- (void)fetchWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) _Bool fetching;
@property(nonatomic, readonly) _Bool finished;
- (void)forcePruneCachedProducts;
- (id)init;
@property(nonatomic, retain) NSNumber *isEmpty; // @synthesize isEmpty;
- (id)observe:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) NSArray *productCategories;

@end

