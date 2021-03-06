//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSString, PHAssetCollection, PHFetchResult, UIImage;
@protocol OS_dispatch_queue;

@interface WAAssetCollection : NSObject <UICollectionViewDataSource>
{
    unsigned long long _mediaTypes;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_fetchResult;
    NSObject<OS_dispatch_queue> *_fetchResultQueue;
    _Bool _useReverseOrderForCollectionView;
    NSArray *_assets;
}

+ (void)fetchAllCollectionsForMediaTypes:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchUserLibraryCollectionForMediaTypes:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)registerDailyStatsCallback:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long assetCount;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewMediaPickerAssetAtIndex:(long long)arg1;
- (struct _NSRange)correctRangeBoundsIfNeeded:(struct _NSRange)arg1;
@property(readonly, nonatomic) long long estimatedAssetCount;
- (void)fetchAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PHFetchResult *fetchResult;
- (id)fetchResultsForAssetsWithMediaTypes:(unsigned long long)arg1 inCollection:(id)arg2;
- (long long)indexOfCollectionViewMediaPickerAsset:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 mediaTypes:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (long long)numberOfPhotos;
- (long long)numberOfVideos;
- (id)phAssetAtIndex:(long long)arg1;
@property(readonly, nonatomic) UIImage *posterImage;
@property(readonly, nonatomic) _Bool posterShouldIncludeAssetCount;
@property(nonatomic) _Bool useReverseOrderForCollectionView; // @synthesize useReverseOrderForCollectionView=_useReverseOrderForCollectionView;
- (void)startCachingThumbnailsOfPixelSize:(struct CGSize)arg1 inRange:(struct _NSRange)arg2;
- (void)stopCachingThumbnailsOfPixelSize:(struct CGSize)arg1 inRange:(struct _NSRange)arg2;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
- (_Bool)updateWithChangeInstance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

