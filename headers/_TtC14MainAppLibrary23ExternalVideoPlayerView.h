//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC14MainAppLibrary23ExternalVideoPlayerView : UIView
{
    MISSING_TYPE *contentView;
    MISSING_TYPE *delegate;
    MISSING_TYPE *containerView;
    MISSING_TYPE *posterImageView;
    MISSING_TYPE *spinnerView;
    MISSING_TYPE *fullscreenControlView;
    MISSING_TYPE *floatingControlView;
    MISSING_TYPE *isScrubbing;
    MISSING_TYPE *panGesture;
    MISSING_TYPE *initialCenterOnPanStart;
    MISSING_TYPE *initialSizeOnPanStart;
    MISSING_TYPE *maxGestureProgress;
    MISSING_TYPE *dockingOverlayView;
    MISSING_TYPE *dockedArrowImageView;
    MISSING_TYPE *skipForwardIconImageView;
    MISSING_TYPE *skipBackwardIconImageView;
    MISSING_TYPE *circleOverlayView;
    MISSING_TYPE *impactFeedbackGenerator;
    MISSING_TYPE *isFullscreen;
    MISSING_TYPE *showsControlView;
    MISSING_TYPE *dockability;
    MISSING_TYPE *isDocked;
    MISSING_TYPE *SKIP_INTERVAL;
    MISSING_TYPE *SKIP_INTERVAL_TOLERANCE;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

