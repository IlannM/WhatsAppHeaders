//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSArray, NSNumber;

@interface _TtC14MainAppLibrary26CollectionItemsProductList : _TtCs12_SwiftObject
{
    MISSING_TYPE *expecting;
    MISSING_TYPE *batchSize;
    MISSING_TYPE *observers;
    MISSING_TYPE *fetchCompletionHandlers;
    MISSING_TYPE *ownerJID;
    MISSING_TYPE *category;
    MISSING_TYPE *products;
    MISSING_TYPE *isEmpty;
    MISSING_TYPE *productCategories;
    MISSING_TYPE *finished;
    MISSING_TYPE *fetching;
    MISSING_TYPE *cursor;
    MISSING_TYPE *cartEnabled;
}

@property(nonatomic, readonly) NSArray *allProducts;
@property(nonatomic) _Bool cartEnabled; // @synthesize cartEnabled;
- (void)fetchWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool fetching; // @synthesize fetching;
@property(nonatomic) _Bool finished; // @synthesize finished;
- (void)forcePruneCachedProducts;
@property(nonatomic, readonly) NSNumber *isEmpty; // @synthesize isEmpty;
- (id)observe:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) NSArray *productCategories;

@end

