//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIView;

@interface WACircleWipePresentationController : UIPresentationController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UIView *_dimmingView;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    struct CGPoint _gestureDirection;
    struct CGPoint _initialGesturePosition;
    _Bool _needsFadeInStatusBarOnDismiss;
    UIPanGestureRecognizer *_dismissGestureRecognizer;
    struct CGPoint _transitionOrigin;
}

- (void).cxx_destruct;
- (void)adjustPresentingViewControllerViewIfNeeded;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(retain, nonatomic) UIPanGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)handleDismissGesture:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
@property(nonatomic) struct CGPoint transitionOrigin; // @synthesize transitionOrigin=_transitionOrigin;
- (_Bool)shouldRemovePresentersView;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
