//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, MISSING_TYPE;

@interface _TtC14MainAppLibrary13URLPlayerView : UIView
{
    MISSING_TYPE *sourceURL;
    MISSING_TYPE *autoplays;
    MISSING_TYPE *delegate;
    MISSING_TYPE *state;
    MISSING_TYPE *isScrubbing;
    MISSING_TYPE *resumePlaybackAfterScrubbing;
    MISSING_TYPE *playerItemStatusObservation;
    MISSING_TYPE *playerRateObservation;
    MISSING_TYPE *playerTimeObserver;
    MISSING_TYPE *audioActivity;
    MISSING_TYPE *needsRewindOnPlay;
    MISSING_TYPE *playerItem;
    MISSING_TYPE *player;
    MISSING_TYPE *isSeeking;
    MISSING_TYPE *resumePlaybackAfterSeeking;
    MISSING_TYPE *targetSeekTime;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) AVPlayerLayer *layer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic, readonly) AVPlayer *player; // @synthesize player;
@property(nonatomic, readonly) AVPlayerItem *playerItem; // @synthesize playerItem;
- (void)playerItemDidPlayToEndTime;
- (void)playerItemPlaybackStalled;

@end

