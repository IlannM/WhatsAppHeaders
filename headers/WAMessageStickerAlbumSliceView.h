//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

#import "WAStickerMessageContainingSliceView-Protocol.h"

@class NSArray, WAMessageStickerAlbumSlice, WAMessageStickerSliceView;
@protocol WAMessageContainerSliceViewDelegate;

@interface WAMessageStickerAlbumSliceView : WAMessageContainerSliceView <WAStickerMessageContainingSliceView>
{
    WAMessageStickerSliceView *_stickerSliceViews[2];
    struct CGRect _stickerRects[2];
    id <WAMessageContainerSliceViewDelegate> _delegate;
}

+ (_Bool)isUserInteractionEnabled;
+ (_Bool)pairsWithQuickActionButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allStickerSliceViews;
@property(readonly, nonatomic) NSArray *allStickerViews;
- (void)configureSlice:(id)arg1 withCellData:(id)arg2;
- (id)delegate;
- (void)didHideMenuForMessage:(id)arg1;
- (void)handleDoubleTapAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (id)handleLongPressAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (void)handleSingleTapAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (void)hideStickerView:(_Bool)arg1 forMessage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)messageAtPoint:(struct CGPoint)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (void)reloadStickerSliceView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)stickerStatusSliceViewForMessage:(id)arg1;
- (id)stickerViewForMessage:(id)arg1;
- (id)wa_accessibilityElements;
- (void)willPresentMenuForMessage:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageStickerAlbumSlice *slice; // @dynamic slice;

@end
