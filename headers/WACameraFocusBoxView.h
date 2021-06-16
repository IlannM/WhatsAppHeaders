//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIColor;

@interface WACameraFocusBoxView : UIView <CAAnimationDelegate>
{
    UIColor *_borderColor;
}

+ (id)focusAnimationOfDuration:(double)arg1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)hideImmediately;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)presentAtPoint:(struct CGPoint)arg1 inView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

