//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary, NSSet;

@interface WAMediaGalleryFlowLayout : UICollectionViewFlowLayout
{
    NSDictionary *_layoutAttributesForDeletedItems;
    NSSet *_deleteIndexPaths;
    NSSet *_insertIndexPaths;
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
@property(copy, nonatomic) NSSet *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(copy, nonatomic) NSDictionary *layoutAttributesForDeletedItems; // @synthesize layoutAttributesForDeletedItems=_layoutAttributesForDeletedItems;
- (void)prepareForCollectionViewUpdates:(id)arg1;

@end
