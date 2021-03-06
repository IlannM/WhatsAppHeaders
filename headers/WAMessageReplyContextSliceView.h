//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageTextWithImageSliceView.h"

@class UIView, WAMessageReplyContextSlice;

@interface WAMessageReplyContextSliceView : WAMessageTextWithImageSliceView
{
    UIView *_senderColorStripView;
}

- (void).cxx_destruct;
- (void)fetchImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleDoubleTapAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (id)handleLongPressAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (_Bool)shouldHighlightContainerViewOnTouchesDidBegin;
- (void)touches:(id)arg1 didBeginWithHighlight:(_Bool)arg2;
- (void)touchesDidEnd;

// Remaining properties
@property(readonly, nonatomic) WAMessageReplyContextSlice *slice; // @dynamic slice;

@end

