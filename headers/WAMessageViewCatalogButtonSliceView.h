//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageButtonsSliceView.h"

@class UIButton, WAMessageViewCatalogButtonSlice;

@interface WAMessageViewCatalogButtonSliceView : WAMessageButtonsSliceView
{
    UIButton *_viewCatalogButton;
}

- (void).cxx_destruct;
- (id)buttonsForCurrentState;
- (void)configureSlice:(id)arg1 withCellData:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewCatalog:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageViewCatalogButtonSlice *slice; // @dynamic slice;

@end

