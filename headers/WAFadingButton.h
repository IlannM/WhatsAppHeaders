//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface WAFadingButton : UIButton
{
    _Bool _pressed;
    double _pressedAlpha;
    double _defaultAlpha;
    double _alpha;
}

+ (void)commonInit:(id)arg1;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
@property(nonatomic) double defaultAlpha; // @synthesize defaultAlpha=_defaultAlpha;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double pressedAlpha; // @synthesize pressedAlpha=_pressedAlpha;

@end

