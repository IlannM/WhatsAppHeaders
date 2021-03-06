//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray, NSMutableDictionary;
@protocol WAStickerCategoriesFlowLayoutDelegate;

@interface WAStickerCategoriesFlowLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_insertedIndexPaths;
    NSMutableArray *_deletedIndexPaths;
    NSMutableArray *_reloadedSectionIndexPaths;
    NSMutableDictionary *_currentAttributes;
    NSMutableDictionary *_cachedAttributes;
    id <WAStickerCategoriesFlowLayoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAStickerCategoriesFlowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (id)triggeringIndexPath;

@end

