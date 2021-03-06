//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface WAPinchDragGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _refPointInWindow;
    struct CGPoint _velocityInWindow;
    struct CGPoint _lastCentroid;
    double _lastCentroidTimestamp;
    _Bool _needsResetRefPointInWindow;
    double _refTouchDistance;
    unsigned long long _pinchDragState;
}

- (struct CGPoint)centroidOfTouchesInView:(id)arg1;
- (double)distanceBetweenTouches;
- (void)handleTouchesFinished:(id)arg1 withEvent:(id)arg2;
- (_Bool)hasValidRefPoint;
- (_Bool)isActive;
@property(readonly, nonatomic) unsigned long long pinchDragState; // @synthesize pinchDragState=_pinchDragState;
- (void)reset;
@property(readonly, nonatomic) double scale;
- (void)targetDidHandleAction;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;

@end

