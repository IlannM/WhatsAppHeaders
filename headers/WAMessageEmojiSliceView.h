//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class WAMessageEmojiSlice, WAMessageEmojiView;

@interface WAMessageEmojiSliceView : WAMessageContainerSliceView
{
    WAMessageEmojiView *_emojiView;
}

- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reapplyAnimationIfNeeded;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageEmojiSlice *slice; // @dynamic slice;

@end
