//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAStatusDownloadableItemView.h"

#import "WALoopingVideoPlayerViewDelegate-Protocol.h"

@class NSString, WAInteractiveAnnotationView, WAStatusGIFPlayerContainerView;

@interface WAStatusGIFItemView : WAStatusDownloadableItemView <WALoopingVideoPlayerViewDelegate>
{
    double _playbackStartTime;
    double _presentationTime;
    _Bool _needsPresentationSize;
    WAStatusGIFPlayerContainerView *_containerView;
    WAInteractiveAnnotationView *_annotationsView;
}

- (void).cxx_destruct;
- (void)addOrUpdateAnnotationsView;
- (void)didSetItem;
- (void)didUpdateItem;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)loopingVideoPlayerView:(id)arg1 didChangeCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)loopingVideoPlayerViewDidLoad:(id)arg1;
- (void)prepareForReuse;
- (double)presentationTime;
- (void)setPaused:(_Bool)arg1;
- (id)zoomableView;
- (struct CGSize)zoomableViewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

