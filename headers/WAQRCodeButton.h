//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WACircularImageButton.h>

@interface WAQRCodeButton : WACircularImageButton
{
    double _tapTargetOffsetX;
    double _tapTargetOffsetY;
}

- (id)initWithIconTemplate:(id)arg1 radius:(double)arg2 height:(double)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setIsAccessibilityElement:(_Bool)arg1;
@property(nonatomic) double tapTargetOffsetX; // @synthesize tapTargetOffsetX=_tapTargetOffsetX;
@property(nonatomic) double tapTargetOffsetY; // @synthesize tapTargetOffsetY=_tapTargetOffsetY;

@end

