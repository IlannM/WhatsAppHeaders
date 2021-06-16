//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, WAPieView, WAShapeView;
@protocol OS_dispatch_group;

@interface WAPieProgressView : UIView
{
    WAPieView *_pieView;
    WAShapeView *_outerView;
    unsigned long long _state;
    NSObject<OS_dispatch_group> *_animationDispatchGroup;
    struct CGRect _prevFrame;
    unsigned long long _counter;
    float _progress;
}

- (void).cxx_destruct;
- (id)baseOutlineInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)outerViewPathExpanded:(_Bool)arg1 scale:(double)arg2;
- (void)performAppearAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performCancelAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performFinishedAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)transitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)transitionToState:(unsigned long long)arg1 forced:(_Bool)arg2;
- (id)tweenableRectInRect:(struct CGRect)arg1 rounded:(_Bool)arg2;

@end
