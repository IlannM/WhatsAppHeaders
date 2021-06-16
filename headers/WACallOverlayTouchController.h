//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDate, NSString, UIDynamicAnimator, UIDynamicItemBehavior, UIFieldBehavior, UIPanGestureRecognizer, UISnapBehavior, UIView;
@protocol WACallOverlayTouchControllerDelegate;

@interface WACallOverlayTouchController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _positionValid;
    NSDate *_lastDragTime;
    struct CGPoint _initialDragPosition;
    UIPanGestureRecognizer *_dragRecognizer;
    UIDynamicAnimator *_animator;
    UISnapBehavior *_snapBehavior;
    UIDynamicItemBehavior *_dynamicItemBehavior;
    UIFieldBehavior *_fieldBehavior;
    id <WACallOverlayTouchControllerDelegate> _delegate;
    UIView *_overlayView;
    struct CGRect _layoutBounds;
}

- (void).cxx_destruct;
- (void)addDynamicItemBehaviorWithVelocity:(struct CGPoint)arg1;
- (void)addFieldBehaviorForPosition:(struct CGPoint)arg1;
- (struct CGPoint)adjustOverlayViewCenter:(struct CGPoint)arg1 fromOverlayViewSize:(struct CGSize)arg2 toOverlayViewSize:(struct CGSize)arg3 fromOverallBounds:(struct CGRect)arg4 toOverallBounds:(struct CGRect)arg5;
- (struct CGPoint)adjustOverlayViewCenter:(struct CGPoint)arg1 overlayViewSize:(struct CGSize)arg2 toStayWithinBounds:(struct CGRect)arg3;
- (void)configureDynamicAnimator;
- (void)dealloc;
- (struct CGPoint)defaultOverlayPosition;
@property(nonatomic) __weak id <WACallOverlayTouchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithWindow:(id)arg1;
- (_Bool)isDragging;
@property(nonatomic) struct CGRect layoutBounds; // @synthesize layoutBounds=_layoutBounds;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (void)viewDragged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
