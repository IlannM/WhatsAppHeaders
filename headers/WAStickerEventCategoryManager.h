//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStickerCategoryPresenting-Protocol.h"

@class NSArray, NSString, UICollectionView, WAPersistentKeyValueStoreCursor, WAStickerStorage;
@protocol WAStickerEventCategoryManagerDelegate;

@interface WAStickerEventCategoryManager : NSObject <WAStickerCategoryPresenting>
{
    WAStickerStorage *_storage;
    NSArray *_stickers;
    _Bool _observeChanges;
    WAPersistentKeyValueStoreCursor *_cursor;
    long long _type;
    UICollectionView *_collectionView;
    id <WAStickerEventCategoryManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WAStickerEventCategoryManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)eventsChanged:(id)arg1;
- (id)initWithStickerStorage:(id)arg1 eventType:(long long)arg2 batchSize:(unsigned long long)arg3 observeChanges:(_Bool)arg4;
@property(readonly, nonatomic, getter=isObseringChanges) _Bool observeChanges; // @synthesize observeChanges=_observeChanges;
- (id)itemAtIndexPath:(id)arg1;
- (void)loadMoreStickersForCollectionView:(id)arg1;
- (id)nextBatchOfStickers;
- (long long)numberOfItemsInSection:(unsigned long long)arg1;
- (long long)numberOfSections;
- (id)stickers;
@property(readonly, nonatomic) WAStickerStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

