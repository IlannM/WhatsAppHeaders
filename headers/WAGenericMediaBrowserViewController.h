//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WACalloutViewPresenterDelegate-Protocol.h"
#import "WAGenericMediaBrowserToolbarDelegate-Protocol.h"
#import "WAImageToImagePanPopGestureRecognizerDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WAMediaBrowserCollectionViewCellDelegate-Protocol.h"
#import "WANavigationControllerPopFromAnimating-Protocol.h"
#import "WANoOpGestureRecognizerTouchDelegate-Protocol.h"

@class NSIndexPath, NSNumber, NSString, UIBarButtonItem, UICollectionViewFlowLayout, UINavigationController, UIView, WAActivityIndicatorView, WAGenericMediaBrowserToolbar, WAGenericMediaManager, WAImageToImagePanPopGestureRecognizer, WAMediaBrowserCollectionView, WAMediaBrowserCollectionViewCell, WAMediaBrowserTitleView, WAMediaCaptionView, WANoOpGestureRecognizer;

@interface WAGenericMediaBrowserViewController : WAViewController <UICollectionViewDataSource, UICollectionViewDelegate, WACalloutViewPresenterDelegate, WAMediaBrowserCollectionViewCellDelegate, WANoOpGestureRecognizerTouchDelegate, WAGenericMediaBrowserToolbarDelegate, WANavigationControllerPopFromAnimating, WAImageToImageTransitioning, WAImageToImagePanPopGestureRecognizerDelegate>
{
    NSIndexPath *_indexPathBeforeChangingContent;
    _Bool _isCollectionViewLoaded;
    WAMediaBrowserCollectionView *_collectionView;
    long long _lastDisplayedPageIndex;
    WAMediaCaptionView *_captionView;
    NSIndexPath *_autoplayItemAtIndexPath;
    CDStruct_1b6d18a9 _currentPlayingTimeBeforeReload;
    UINavigationController *_lastNavigationController;
    UIBarButtonItem *_playButton;
    UIBarButtonItem *_pauseButton;
    WAGenericMediaBrowserToolbar *_toolbar;
    WAMediaBrowserTitleView *_titleView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    WAGenericMediaManager *_genericMediaManager;
    long long _initialPageIndex;
    _Bool _needsAdjustCaptionViewAfterLayout;
    WAImageToImagePanPopGestureRecognizer *_panPopGesture;
    long long _presentationStateBeforePan;
    UIView *_busySpinnerView;
    WAActivityIndicatorView *_busySpinner;
    _Bool _suppressToolbarUpdate;
    _Bool _ignoreToolbarScrolling;
    WANoOpGestureRecognizer *_touchTracker;
    _Bool _isInterfaceOrientationPinned;
    _Bool _needsUpdateInterfaceOnViewDidLayoutSubviews;
    struct CGSize _lastViewWillLayoutSubviewsSize;
    double _nonFullscreenTopLayoutInset;
    WAMediaBrowserCollectionViewCell *_lastFullyVisibleCell;
    _Bool _sendingWithForwardPicker;
    WAMediaBrowserCollectionViewCell *_transitionCell;
    _Bool _pageable;
    _Bool _shouldHideCellViewForTransition;
    _Bool _fullScreen;
    NSNumber *_initializationTime;
}

- (void).cxx_destruct;
- (void)calloutViewPresenterDidFinish:(id)arg1;
- (void)changedFullyVisibleCellFromCell:(id)arg1 toCell:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)currentCell;
@property(nonatomic) double currentFractionalIndex;
@property(nonatomic) long long currentPageIndex;
- (void)deviceOrientationDidChange:(id)arg1;
- (id)fastThumbnailForMediaBrowserCollectionViewCell:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
@property(readonly, nonatomic) WAGenericMediaManager *genericMediaManager; // @synthesize genericMediaManager=_genericMediaManager;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureRecognizerDidBeginManagingInteractivePopTransition:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerShouldPopViewController:(id)arg1;
- (void)gestureRecognizerWillBeginManagingInteractivePopTransition:(id)arg1;
- (void)gestureRecognizerWillFinishManagingInteractivePopTransition:(id)arg1;
- (id)initWithGenericMediaManager:(id)arg1 toolbar:(id)arg2 sendingWithForwardPicker:(_Bool)arg3;
@property(retain, nonatomic) NSNumber *initializationTime; // @synthesize initializationTime=_initializationTime;
@property(nonatomic, getter=isBusySpinnerHidden) _Bool busySpinnerHidden;
- (_Bool)isDisplayingMediaBrowserCollectionViewCellInFullScreen:(id)arg1;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
- (_Bool)isFullscreen;
- (_Bool)isPreviewingMediaBrowserCollectionViewCell:(id)arg1;
- (void)mediaBrowserCollectionViewCell:(id)arg1 didReceiveSingleTapAtPoint:(struct CGPoint)arg2;
- (void)mediaBrowserCollectionViewCell:(id)arg1 didSelectInteractiveAnnotation:(id)arg2 atPoint:(struct CGPoint)arg3 inInteractiveAnnotationView:(id)arg4;
- (void)mediaBrowserCollectionViewCell:(id)arg1 didUpdateProgress:(double)arg2;
- (void)mediaBrowserCollectionViewCell:(id)arg1 prefersFullScreen:(_Bool)arg2;
- (void)mediaBrowserCollectionViewCellDidChangePresentationState:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidChangeVisibleContentViewFrame:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidEndChangingVisibleContentViewFrame:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidRequestGoToChat:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidRequestPresentBackupSettings:(id)arg1;
- (void)mediaBrowserCollectionViewCellWillBeginChangingVisibleContentViewFrame:(id)arg1;
- (void)mediaManagerDidChangeContent:(id)arg1;
- (void)mediaManagerDidChangeContentWithNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mediaManagerWillChangeContent:(id)arg1;
- (void)mediaManagerWillReloadCollectionView:(id)arg1;
- (id)navigationBarItems;
- (id)newCellForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)noOpGestureRecognizerDidBeginTrackingTouches:(id)arg1;
- (void)noOpGestureRecognizerDidEndTrackingTouches:(id)arg1;
- (void)noOpGestureRecognizerDidUpdateTrackedTouches:(id)arg1;
- (id)nonTransitioningContainerView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct UIEdgeInsets)overlayInsetsForCalloutViewPresenter:(id)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (id)popFromAnimationIdentifier;
- (id)preferredPopFromInteractionController;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (void)prepareForTransitionWithContext:(id)arg1;
- (double)rateOfChangeForMediaBrowserCollectionViewCell:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(readonly, nonatomic) _Bool sendingWithForwardPicker; // @synthesize sendingWithForwardPicker=_sendingWithForwardPicker;
- (void)setFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPageable:(_Bool)arg1;
@property(nonatomic) _Bool shouldHideCellViewForTransition; // @synthesize shouldHideCellViewForTransition=_shouldHideCellViewForTransition;
- (void)setUpBusySpinnerView;
- (_Bool)shouldAddActionButtonsToNavbar;
- (_Bool)shouldAutorotate;
- (_Bool)shouldPresentUIMenuController:(id)arg1;
- (_Bool)shouldShowGoToChatFromMediaBrowserCollectionViewCell:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)showBackupSettings;
- (void)toolbar:(id)arg1 didScrollToIndexPath:(id)arg2;
- (void)toolbar:(id)arg1 willDisplayCellForItemAtIndexPath:(id)arg2;
- (void)toolbarDidActivatePauseButton:(id)arg1;
- (void)toolbarDidActivatePlayButton:(id)arg1;
- (void)toolbarDidBeginScrubbing:(id)arg1;
- (void)toolbarDidEndScrubbing:(id)arg1;
- (double)topLayoutInsetForMediaBrowserCollectionViewCell:(id)arg1;
- (void)updateCaptionView;
- (void)updateFullyVisibleCellForNewCell:(id)arg1;
- (void)updateInterfaceForCurrentState;
- (void)updateNavigationBarItems;
- (void)updatePresentationState;
- (void)updatePresentationStateForNewCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateSavedContentBrowserBeforeDisappearing;
- (void)updateTitleView;
- (void)updateToolbar;
- (_Bool)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)wa_fontSizeDidChange;
- (_Bool)wa_prefersMinimalBackButton;
- (void)willMoveToParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
