//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMediaPickerBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WAMediaPickerAlbumControllerDelegate-Protocol.h"
#import "WAMediaPickerAlbumPickerDelegate-Protocol.h"
#import "WAMediaPickerAlbumTableViewCellDelegate-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"

@class CADisplayLink, NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, UIBarButtonItem, UIImageView, UILabel, UIPanGestureRecognizer, UIView, WAButtonWithEndIcon, WAMediaPickerAlbumController, WAMediaPickerAlbumPickerViewController;

@interface WAMediaPickerAlbumViewController : WAMediaPickerBaseViewController <WAMediaPickerAlbumTableViewCellDelegate, UIGestureRecognizerDelegate, WAMediaPickerAlbumPickerDelegate, WAMediaPickerAlbumControllerDelegate, WAImageToImageTransitioning, WANavigationControllerPopToAnimating>
{
    unsigned long long _assetsCountPerRow;
    UIView *_footerView;
    UILabel *_footerLabel;
    _Bool _albumLoadingInProgress;
    NSNumber *_assetIndexToRestore;
    struct CGPoint _contentOffsetAtStartOfRotation;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    _Bool _rotatingViewWithNoMedia;
    UILabel *_noMediaTitleLabel;
    UILabel *_noMediaBodyTextLabel;
    _Bool _needsScrollToSelectedPhoto;
    struct CGRect _previousPreheatRect;
    _Bool _needsUpdateFooterText;
    WAMediaPickerAlbumPickerViewController *_albumPicker;
    _Bool _titleButtonIsOpen;
    WAButtonWithEndIcon *_titleButton;
    UIBarButtonItem *_rightBarButton;
    UIBarButtonItem *_leftBarButton;
    UIPanGestureRecognizer *_multiSelectPanGesture;
    _Bool _isInMultiSelectPanStatus;
    _Bool _isInAutoScrollUpProgress;
    _Bool _isInAutoScrollDownProgress;
    long long _quickSelectType;
    NSArray *_originalSelectedLocalIdentifiers;
    long long _firstQuickSelectIndex;
    long long _lastQuickSelectIndex;
    struct CGPoint _autoScrollTouchPointInCollectionView;
    CADisplayLink *_autoScrollDisplayLink;
    double _autoScrollDistancePerFrame;
    NSMutableDictionary *_quickSelectIdAndIndexDict;
    NSMutableSet *_quickSelectLivePhotoAsVideoIdentifiers;
    WAMediaPickerAlbumController *_albumController;
}

- (void).cxx_destruct;
- (void)addLocalIdentifierIfPossibleWithIndex:(long long)arg1 toOrderSet:(id)arg2;
- (void)adjustContentOffsetOfTableViewToNearestValidMultipleOfRowHeight;
@property(readonly, nonatomic) WAMediaPickerAlbumController *albumController; // @synthesize albumController=_albumController;
- (void)albumWasSelected:(_Bool)arg1;
- (id)allLocalIdentifiersFromIndex:(long long)arg1 toIndex:(long long)arg2 needReverse:(_Bool)arg3;
- (long long)assetsCountPerRow;
- (void)calculateAutoScrollDistancePerFrameWithOffset:(double)arg1 total:(double)arg2;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)finishTransitionWithContext:(id)arg1;
- (void)generateNoMediaViewsIfNeeded;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleAutoScrollDownWithCurrentContentOffsetY:(double)arg1;
- (void)handleAutoScrollQuickSelectWithTouchDeltaY:(double)arg1;
- (void)handleAutoScrollUpWithCurrentContentOffsetY:(double)arg1;
- (void)handleMultiSelectPanGesture:(id)arg1;
- (long long)indexOfAssetAtCenterOfView;
- (id)initWithAlbumController:(id)arg1;
- (_Bool)isFooterVisible;
- (void)markCellSelectedForLocalIdentifier:(id)arg1;
- (void)markCellUnselectedForLocalIdentifier:(id)arg1;
- (struct CGPoint)maximumContentOffset;
- (void)mediaPickerAlbumController:(id)arg1 didFinishLoadingAlbumWithOutcome:(_Bool)arg2;
- (void)mediaPickerAlbumControllerWillBeginLoadingAlbum:(id)arg1;
- (_Bool)mediaPickerAlbumTableViewCell:(id)arg1 didReceiveLongPressAtIndex:(long long)arg2;
- (_Bool)mediaPickerAlbumTableViewCell:(id)arg1 didReceiveTapAtIndex:(long long)arg2;
- (void)multiSelectPanGestureDidBegin:(id)arg1;
- (void)multiSelectPanGestureDidChange:(id)arg1;
- (void)multiSelectPanGestureDidFinish:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (void)previewingContext:(id)arg1 inTableViewCell:(id)arg2 commitViewController:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForAsset:(id)arg2 inTableViewCell:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (long long)quickSelectThumbnailIndexAtPoint:(struct CGPoint)arg1;
- (struct _NSRange)rangeOfAssetsInRect:(struct CGRect)arg1;
- (void)reconfigureAllVisibleCells;
- (id)registerPreviewingForAlbumCell:(id)arg1 sourceView:(id)arg2;
- (void)relayoutNoMediaViews;
- (void)reloadTable;
- (void)resetQuickSelectData;
- (_Bool)scrollEnabled;
- (void)scrollToAssetAtIndex:(long long)arg1;
- (void)scrollToBottom;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectMediaIfPossibleFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)setBarButtonItemVisibility:(_Bool)arg1;
- (void)setupTitleButton;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)startAutoScrollDown;
- (void)startAutoScrollUp;
- (void)stopAutoScrollDown;
- (void)stopAutoScrollUp;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)tableViewSnapshot;
- (id)targetPreviewForTableView:(id)arg1 point:(struct CGPoint)arg2;
- (long long)thumbnailIndexAtPoint:(struct CGPoint)arg1;
- (void)titleButtonTapped;
- (void)unselectMediaIfPossibleFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)updateFonts;
- (void)updateFooter;
- (void)updateFooterText;
- (void)updateFooterTextIfNeeded;
- (void)updateThumbnailCache;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)wa_fontSizeDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

