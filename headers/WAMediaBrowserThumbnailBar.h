//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WAMediaBrowserThumbnailCollectionViewCellDelegate-Protocol.h"
#import "WAMediaBrowserThumbnailFlowLayoutDelegate-Protocol.h"

@class NSIndexPath, NSString, UICollectionView, WAGenericMediaManager, WAMediaBrowserThumbnailFlowLayout;
@protocol WAMediaBrowserThumbnailBarDelegate;

@interface WAMediaBrowserThumbnailBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WAMediaBrowserThumbnailFlowLayoutDelegate, WAMediaBrowserThumbnailCollectionViewCellDelegate>
{
    UICollectionView *_collectionView;
    WAMediaBrowserThumbnailFlowLayout *_collectionViewLayout;
    WAGenericMediaManager *_genericMediaManager;
    struct CGRect _previousPreheatRect;
    _Bool _needsScrollToHighlightedIndexPathOnLayout;
    struct CGSize _previousSize;
    struct CGPoint _lastContentOffsetForSpeedCalculation;
    double _timeOfLastContentOffsetForSpeedCalculation;
    double _lastScrollVelocity;
    _Bool _suppressDelegateNotificationOnScroll;
    _Bool _needsUpdateHighlightedIndexPath;
    _Bool _isCollectionViewLoaded;
    long long _updatingCounter;
    NSIndexPath *_indexPathToScrollToAfterUpdating;
    _Bool _scrubbing;
    id <WAMediaBrowserThumbnailBarDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) __weak id <WAMediaBrowserThumbnailBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToWindow;
@property(readonly, nonatomic) WAGenericMediaManager *genericMediaManager; // @synthesize genericMediaManager=_genericMediaManager;
- (void)handleTapGesture:(id)arg1;
@property(retain, nonatomic) NSIndexPath *highlightedIndexPath;
- (id)highlightedIndexPathForBounds:(struct CGRect)arg1;
- (id)imageForMediaThumbnailThumbnailCollectionViewCell:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 genericMediaManager:(id)arg2;
@property(readonly, nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
- (double)layout:(id)arg1 expandedAspectRatioForItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)mediaManagerDidChangeContent:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)resetScrollVelocity;
- (void)scrollToIndexPath:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double scrollVelocity;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setHighlightedIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)thumbnailCollectionViewCell:(id)arg1 thumbnailAtIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateThumbnailCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
