//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "WAStickerCategoryPresenting-Protocol.h"

@class NSArray, NSFetchRequest, NSString, WAFetchedResultsController, WAStickerSearchRankingController, WAStickerStorage;

@interface WAStickerCategoryManager : NSObject <NSFetchedResultsControllerDelegate, WAStickerCategoryPresenting>
{
    WAFetchedResultsController *_controller;
    WAStickerStorage *_storage;
    WAStickerSearchRankingController *_stickerRankingController;
    NSArray *_rankedStickers;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFetchRequest:(id)arg1 stickerStorage:(id)arg2;
- (id)initWithFetchRequest:(id)arg1 stickerStorage:(id)arg2 stickerRankingController:(id)arg3 emojis:(id)arg4;
- (id)itemAtIndexPath:(id)arg1;
- (void)loadMoreRankedStickers;
- (long long)numberOfItemsInSection:(unsigned long long)arg1;
- (long long)numberOfSections;
- (id)rankedStickers;
@property(readonly, nonatomic) NSFetchRequest *request;
- (id)stickers;
@property(readonly, nonatomic) WAStickerStorage *storage; // @synthesize storage=_storage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

