//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, WAStickerEventCategoryManager;

@interface WAStickerSearchRankingController : NSObject
{
    NSArray *_originalStickers;
    NSArray *_emojis;
    NSArray *_recentStickers;
    WAStickerEventCategoryManager *_starredCategoryManager;
    _Bool _isRankingCompleted;
    NSMutableArray *_rankedStickers;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) _Bool isRankingCompleted; // @synthesize isRankingCompleted=_isRankingCompleted;
- (void)loadMoreStickers;
- (void)rankStickers:(_Bool)arg1;
@property(retain, nonatomic) NSMutableArray *rankedStickers; // @synthesize rankedStickers=_rankedStickers;
- (id)searchedStickersOrderedByEmojis:(id)arg1;
- (void)startNewRankingWithStickers:(id)arg1 emojis:(id)arg2;

@end

