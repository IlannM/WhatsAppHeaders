//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer, UIImage;

@interface WAChatSessionActionButton : UIButton
{
    _Bool _visible;
    unsigned long long _roundedCorners;
    long long _countValue;
    double _cornerRadius;
}

+ (id)button;
+ (Class)layerClass;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long countValue; // @synthesize countValue=_countValue;
- (struct CGRect)expectedBounds;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void)layoutSubviews;
- (double)maxHeight;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)shadowPathForBoundingPath:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayerColors;
- (void)updatePathForBounds:(struct CGRect)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic) CAShapeLayer *layer; // @dynamic layer;

@end

