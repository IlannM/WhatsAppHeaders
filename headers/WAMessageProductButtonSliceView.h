//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageButtonsSliceView.h"

@class UIButton, WAMessageProductButtonSlice;

@interface WAMessageProductButtonSliceView : WAMessageButtonsSliceView
{
    UIButton *_viewProductButton;
}

- (void).cxx_destruct;
- (id)buttonsForCurrentState;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)showTopDivider;
- (void)viewProduct:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageProductButtonSlice *slice; // @dynamic slice;

@end
