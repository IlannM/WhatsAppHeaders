//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WAPieView : UIView
{
    UIColor *_fillColor;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double progress;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;

@end

