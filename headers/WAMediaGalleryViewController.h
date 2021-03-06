//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WASavedContentBrowserChildViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WAMediaGalleryCellMenuDelegate-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"

@class CADisplayLink, NSArray, NSIndexPath, NSMutableSet, NSSet, NSString, UIBarButtonItem, UICollectionView, UIImageView, UILabel, UIPanGestureRecognizer, UIView, WAMediaGalleryFlowLayout, WAMessageMediaManager;

@interface WAMediaGalleryViewController : WASavedContentBrowserChildViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WAImageToImageTransitioning, WANavigationControllerPopToAnimating, WAMediaGalleryCellMenuDelegate, UIViewControllerPreviewingDelegate, UIGestureRecognizerDelegate>
{
    UICollectionView *_collectionView;
    UILabel *_footerViewLabel;
    UILabel *_sizeLabel;
    UIBarButtonItem *_editBarButton;
    UIBarButtonItem *_cancelBarButton;
    UIBarButtonItem *_deleteBarButton;
    UIBarButtonItem *_shareItemsBarButton;
    UIBarButtonItem *_starBarButton;
    UIBarButtonItem *_unstarBarButton;
    UIBarButtonItem *_selectAllButton;
    UIBarButtonItem *_sortButton;
    UIBarButtonItem *_sizeLabelButton;
    _Bool _editing;
    _Bool _needsAutoScroll;
    _Bool _tallScreen;
    UIView *_transitionAnimationSourceView;
    NSIndexPath *_messageIndexPathForTransitionAnimation;
    NSMutableSet *_selectedIndexPaths;
    NSArray *_selectedMessagesBeforeMediaManagerContentChange;
    NSArray *_originalSelectedMessagesForQuickSelectBeforeMediaManagerContentChange;
    _Bool _mediaManagerUpdateInProgress;
    _Bool _isPerformingFancyRotation;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    NSIndexPath *_thumbnailIndexPathToRestore;
    WAMediaGalleryFlowLayout *_portraitLayout;
    WAMediaGalleryFlowLayout *_landscapeLayout;
    struct CGSize _itemSizePortrait;
    struct CGSize _itemSizeLandscape;
    UIPanGestureRecognizer *_multiSelectPanGesture;
    _Bool _isInMultiSelectPanStatus;
    _Bool _isInAutoScrollUpProgress;
    _Bool _isInAutoScrollDownProgress;
    long long _quickSelectType;
    NSSet *_originalSelectedIndexPaths;
    NSIndexPath *_firstQuickSelectIndexPath;
    NSIndexPath *_lastQuickSelectIndexPath;
    struct CGPoint _autoScrollTouchPointInCollectionView;
    CADisplayLink *_autoScrollDisplayLink;
    double _autoScrollDistancePerFrame;
    _Bool _forwardPicker;
    _Bool _isUsingStoredMediaManager;
    WAMessageMediaManager *_mediaManager;
    NSIndexPath *_indexPathOfMessageToScrollToWhenAppearing;
}

- (void).cxx_destruct;
- (id)actionsForMessage:(id)arg1 inTableViewCell:(id)arg2;
- (id)allIndexPathsFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)askToDeleteMessage:(id)arg1;
- (void)calculateAutoScrollDistancePerFrameWithOffset:(double)arg1 total:(double)arg2;
- (_Bool)canPerformAction:(SEL)arg1 forMediaGalleryCell:(id)arg2 withSender:(id)arg3;
- (void)cancelAction:(id)arg1;
- (void)changeStarStatusForSelectedMessagesToStarred:(_Bool)arg1;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)collectionViewSnapshot;
- (void)copyMessageInCell:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)editAction:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (void)forwardMessages:(id)arg1 fromActivity:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleAutoScrollDownWithCurrentContentOffsetY:(double)arg1;
- (void)handleAutoScrollQuickSelectWithTouchDeltaY:(double)arg1;
- (void)handleAutoScrollUpWithCurrentContentOffsetY:(double)arg1;
- (void)handleMultiSelectPanGesture:(id)arg1;
@property(retain, nonatomic) NSIndexPath *indexPathOfMessageToScrollToWhenAppearing; // @synthesize indexPathOfMessageToScrollToWhenAppearing=_indexPathOfMessageToScrollToWhenAppearing;
- (id)initWithMediaManager:(id)arg1 forwardPicker:(_Bool)arg2;
- (id)initWithStoredMediaManager:(id)arg1;
- (struct CGSize)itemSizeForLandscapeLayout;
- (struct CGSize)itemSizeForPortraitLayout;
- (void)markCellSelectedForIndexPath:(id)arg1;
- (void)markCellUnselectedForIndexPath:(id)arg1;
- (double)maximumCollectionViewContentOffsetY;
- (id)mediaBrowserViewcontrollerForPreviewingIndexPath:(id)arg1;
@property(readonly, nonatomic) WAMessageMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
- (void)mediaManagerDidChangeContent:(id)arg1;
- (void)mediaManagerWillChangeContent:(id)arg1;
- (void)multiSelectPanGestureDidBegin:(id)arg1;
- (void)multiSelectPanGestureDidChange:(id)arg1;
- (void)multiSelectPanGestureDidFinish:(id)arg1;
- (id)noItemsViewHeading;
- (id)noItemsViewImage;
- (id)noItemsViewSubheading;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (void)presentDocumentForMessage:(id)arg1;
- (void)presentMediaAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)quickSelectIndexPathAtPoint:(struct CGPoint)arg1;
- (void)reloadSectionHeaderSize;
- (void)resetQuickSelectData;
- (void)resetSelection;
- (void)scrollAutomaticallyToRelevantItem;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectAllButtonTapped:(id)arg1;
- (void)selectMediaIfPossibleFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)selectedMessages;
- (void)setMessageInCell:(id)arg1 asStarred:(_Bool)arg2;
- (void)shareMessages:(id)arg1 fromViewOrBarButtonItem:(id)arg2;
- (void)shareSelectedItems:(id)arg1;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)sortAction:(id)arg1;
- (CDUnknownBlockType)sortCompletion;
- (id)standardNavigationTitle;
- (void)starButtonTapped:(id)arg1;
- (void)starMessageInCell:(id)arg1;
- (void)startAutoScrollDown;
- (void)startAutoScrollUp;
- (void)stopAutoScrollDown;
- (void)stopAutoScrollUp;
- (void)storedMediaManagerDidRefreshCache:(id)arg1;
- (id)uniqueIdentifier;
- (void)unselectMediaIfPossibleFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)unstarButtonTapped:(id)arg1;
- (void)unstarMessageInCell:(id)arg1;
- (void)updateCollectionViewLayoutToCurrentInterfaceOrientationIfNecessary;
- (void)updateEditingWithAnimation:(_Bool)arg1;
- (void)updateFooter;
- (void)updateMainVisibleView;
- (void)updateMediaCountLabelFont;
- (void)updateSelection;
- (void)updateToolbar;
- (void)updateTranslucentSectionHeadersInCollectionView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)wa_fontSizeDidChange;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

