//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSCache, NSString, UIFont, UIImageView, WALabel;

@interface WAMediaCaptionView : UIView
{
    WALabel *_textLabel;
    WALabel *_secondaryLabel;
    struct CGRect _secondaryImageRect;
    float _blendAmount;
    NSCache *_heightCache;
    UIImageView *_gradientView;
    UIView *_gradientViewContainer;
    UIView *_topBorder;
    UIView *_secondaryTopBorder;
    _Bool _isOcclusionLocked;
    UIFont *_font;
    struct CGRect _imageRect;
}

+ (id)textFormatter;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)lockOcclusionAppearanceWithAnimation:(_Bool)arg1;
- (float)overlapBetweenRect:(struct CGRect)arg1 andView:(id)arg2;
- (void)resizeToFit;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setText:(id)arg1 imageRect:(struct CGRect)arg2;
- (void)setText:(id)arg1 onLabel:(id)arg2;
- (void)showText:(id)arg1 imageRect:(struct CGRect)arg2 blendedWithText:(id)arg3 imageRect:(struct CGRect)arg4 blendAmount:(float)arg5;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forLabel:(id)arg2;
@property(readonly, copy, nonatomic) NSString *text;
- (struct CGSize)textLayoutSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unlockOcclusionAppearanceWithAnimation:(_Bool)arg1;
- (void)updateObstructedAppearanceBlendingOverlap:(float)arg1 withOverlap:(float)arg2;
- (void)updateOcclusionAppearance;
- (void)updateTextColorWithOverlap:(float)arg1 withOverlap:(float)arg2;

@end
