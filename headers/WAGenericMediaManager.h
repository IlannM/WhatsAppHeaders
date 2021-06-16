//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface WAGenericMediaManager : NSObject
{
    NSMutableDictionary *_thumbnailCache;
    NSMutableIndexSet *_insertedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableArray *_insertedIndexPaths;
    NSMutableArray *_deletedIndexPaths;
    NSMutableArray *_movedIndexPaths;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
}

- (void).cxx_destruct;
- (id)accessibilityLabelForHeaderInSection:(long long)arg1;
- (id)accessibilityValueAtIndexPath:(id)arg1;
- (void)applyDidChangeContentNotification:(id)arg1 toCollectionView:(id)arg2 currentIndexPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool hasPendingContentChanges;
- (unsigned long long)indexFromIndexPath:(id)arg1;
- (id)indexPathFromIndex:(unsigned long long)arg1;
- (id)init;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) unsigned long long numberOfPhotos;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
@property(readonly, nonatomic) unsigned long long numberOfVideos;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;
- (_Bool)shouldUseBatchUpdatesForCollectionView:(id)arg1 currentIndexPath:(id)arg2;
- (void)startCachingThumbnailsAtIndexPaths:(id)arg1;
- (void)stopCachingAllThumbnails;
- (void)stopCachingThumbnailsAtIndexPaths:(id)arg1;
- (id)textAtIndexPath:(id)arg1;
- (id)thumbnailAtIndexPath:(id)arg1;
- (void)thumbnailAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)titleForHeaderInSection:(long long)arg1;
- (void)willDisplayObjectAtIndexPath:(id)arg1;

@end

