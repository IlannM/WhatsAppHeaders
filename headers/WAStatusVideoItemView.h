//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAStatusDownloadableItemView.h"

#import "WAMediaPlayerDelegate-Protocol.h"

@class AVPlayerItem, NSString, WAInteractiveAnnotationView, WAMediaPlayerItemContainer;

@interface WAStatusVideoItemView : WAStatusDownloadableItemView <WAMediaPlayerDelegate>
{
    WAInteractiveAnnotationView *_annotationsView;
    AVPlayerItem *_playerItem;
    WAMediaPlayerItemContainer *_playerItemFNF;
}

+ (_Bool)needsVideoPlayer;
- (void).cxx_destruct;
- (void)addOrUpdateAnnotationsView;
- (_Bool)canTransitionToDownloadStatus:(long long)arg1;
- (void)didSetItem;
- (void)didUpdateVideoPlayerStatusToStatus:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)loadPlayerItem;
- (void)mediaDownloadDidFail;
- (void)mediaDownloadDidSucceed;
- (void)mediaDownloadProgressDidChange;
- (void)mediaPlayerDidFinishLoading:(id)arg1;
- (void)prepareForReuse;
- (void)setDownloadStatus:(long long)arg1 animated:(_Bool)arg2;
- (id)videoContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

