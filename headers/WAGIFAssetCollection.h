//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, WAGIFBatchToken;

@interface WAGIFAssetCollection : NSObject <NSCopying>
{
    NSMutableArray *_assets;
    long long _startIndexOfLastBatch;
    NSMutableIndexSet *_modifiedRows;
    NSMutableIndexSet *_insertedRows;
    long long _rowSize;
    _Bool _loading;
    _Bool _noMoreResults;
    WAGIFBatchToken *_nextBatchToken;
    long long _numberOfBatches;
}

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (id)assetAtIndex:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)indexNearEnd:(id)arg1;
- (id)initWithRowSize:(long long)arg1;
@property(readonly, nonatomic) NSIndexSet *insertedRows; // @synthesize insertedRows=_insertedRows;
@property(readonly, nonatomic) _Bool isEmpty;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) NSIndexSet *modifiedRows; // @synthesize modifiedRows=_modifiedRows;
@property(retain, nonatomic) WAGIFBatchToken *nextBatchToken; // @synthesize nextBatchToken=_nextBatchToken;
@property(readonly, nonatomic) _Bool noMoreResults; // @synthesize noMoreResults=_noMoreResults;
- (long long)numberOfAssetsInRow:(long long)arg1;
@property(readonly, nonatomic) long long numberOfBatches; // @synthesize numberOfBatches=_numberOfBatches;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (long long)rankOfIndex:(id)arg1;
- (void)removeAllAssets;

@end
