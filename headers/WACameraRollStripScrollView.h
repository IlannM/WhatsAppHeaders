//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, NSArray, NSMutableSet, NSString, UIPanGestureRecognizer, UIView, WAGrabHandleView;
@protocol WACameraRollStripScrollViewDelegate;

@interface WACameraRollStripScrollView : UIScrollView <UIGestureRecognizerDelegate, CAAnimationDelegate>
{
    WAGrabHandleView *_grabBarView;
    double _grabBarHeight;
    double _visibleHeightBeforeDragging;
    double _initialVisibleHeight;
    double _lastVisibleHeight;
    NSMutableSet *_visibleViews;
    NSMutableSet *_recycledViews;
    UIPanGestureRecognizer *_panGesture;
    long long _panGestureCounter;
    long long _panGestureCounterOnTouchDown;
    double _panGestureOffset;
    long long _itemCount;
    long long _initialHighlightedIndex;
    _Bool _isHighlightingCell;
    UIView *_backgroundView;
    CADisplayLink *_displayLink;
    double _animationToValue;
    double _animationFromValue;
    double _animationStartTime;
    double _animationDuration;
    double _swipeStartTime;
    _Bool _horizontallyFlipped;
    double _visibleHeight;
    UIView *_forceTouchSourceView;
    unsigned long long _presentationState;
    double _thumbnailAlpha;
    struct CGSize _maximumThumbnailSizeInPixels;
}

+ (double)preferredHeight;
+ (double)preferredThumbnailWidth;
- (void).cxx_destruct;
- (void)animateFromVisibleHeight:(double)arg1 to:(double)arg2 duration:(double)arg3;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGRect)centerAndSizeForItemAtIndex:(long long)arg1;
- (void)contractIfPossible;
- (double)currentThumbnailWidth;
- (void)expandIfPossible;
@property(readonly, nonatomic) UIView *forceTouchSourceView; // @synthesize forceTouchSourceView=_forceTouchSourceView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)handleSecondaryPanGesture:(id)arg1;
- (long long)indexForLocationPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isHorizontallyFlipped) _Bool horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGSize maximumThumbnailSizeInPixels; // @synthesize maximumThumbnailSizeInPixels=_maximumThumbnailSizeInPixels;
@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
- (void)reloadData;
- (void)setGrabBarState:(double)arg1 animated:(_Bool)arg2;
- (void)setGrabBarStateWithAnimation:(_Bool)arg1;
- (void)setPresentationState:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) double thumbnailAlpha; // @synthesize thumbnailAlpha=_thumbnailAlpha;
- (void)setVisibleHeight:(double)arg1 animated:(_Bool)arg2;
- (double)targetVisibleHeightForCurrentHeight:(double)arg1 velocity:(struct CGPoint)arg2;
- (double)thumbnailWidthForVisibleHeight:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateAnimation:(id)arg1;
@property(readonly, nonatomic) NSArray *visibleCells;
@property(readonly, nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;
- (struct _NSRange)visibleRange;
- (void)willMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WACameraRollStripScrollViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

