//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAShapeView.h>

@class UIImageView;

@interface WAQRCodeScanResultView : WAShapeView
{
    struct CGSize _pathRectSize;
    UIImageView *_image;
    _Bool _match;
}

+ (id)pathForViewBounds:(struct CGRect)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool match; // @synthesize match=_match;
- (void)setBounds:(struct CGRect)arg1;

@end
