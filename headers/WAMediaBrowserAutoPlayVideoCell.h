//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMediaBrowserZoomableMediaCell.h"

#import "WALoopingVideoPlayerViewDelegate-Protocol.h"

@class NSString, UIImageView, WAInteractiveAnnotationView, WALoopingVideoPlayerView;

@interface WAMediaBrowserAutoPlayVideoCell : WAMediaBrowserZoomableMediaCell <WALoopingVideoPlayerViewDelegate>
{
    WALoopingVideoPlayerView *_playerView;
    UIImageView *_posterImageView;
    WAInteractiveAnnotationView *_annotationsView;
}

- (void).cxx_destruct;
- (void)addOrUpdateAnnotationsView;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)didChangeObject;
- (void)didChangeObjectAtStage:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviewsInCell;
- (void)loopingVideoPlayerViewDidLoad:(id)arg1;
- (void)setAccessibilityLabelForContent:(id)arg1;
- (_Bool)shouldConsiderTouchForTaps:(struct CGPoint)arg1;
- (id)viewForZooming;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

