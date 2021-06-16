//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CASpringAnimation, UIColor, UIImageView, WATooltipView;

@interface WAAnimatedPttLockView : UIView
{
    _Bool _hasLockAnimationBegan;
    _Bool _isToolTipOnScreen;
    _Bool _subviewsHaveSpringAnimation;
    CASpringAnimation *_arrowsSpringAnimation;
    CASpringAnimation *_lockBodySpringAnimation;
    CASpringAnimation *_lockShackleSpringAnimation;
    double _originalHeight;
    double _originalWidth;
    double _yPosnAtToolTipTrigger;
    UIColor *_highlightedLockColor;
    UIColor *_normalLockColor;
    UIImageView *_lockBody;
    UIImageView *_lockBodyMask;
    UIImageView *_lockShackle;
    UIImageView *_slideArrow;
    WATooltipView *_ttv;
    double _stopPosition;
}

- (void).cxx_destruct;
- (void)addSpringAnimationsToSubViews;
- (void)adjustViewForShiftPosition:(double)arg1;
- (id)createSpringAnimationFrom:(double)arg1 To:(double)arg2;
- (void)doNotShowToolTip;
- (id)initWithFrame:(struct CGRect)arg1 stopPosition:(double)arg2;
- (void)layoutSubviews;
- (void)performLockingAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)performSlidingUpAnimationAtShiftPosition:(double)arg1;
- (void)prepareForLockingAnimations;
- (void)prepareForStartingAnimations;
- (void)removeSpringAnimationsFromSubviews;
- (void)showToolTip;
- (void)startAnimatingLockViewAppearing;
- (void)stopAnimatingLockView;
@property(readonly, nonatomic) double stopPosition; // @synthesize stopPosition=_stopPosition;

@end
