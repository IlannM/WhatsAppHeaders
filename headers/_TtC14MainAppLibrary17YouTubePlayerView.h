//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC14MainAppLibrary17YouTubePlayerView : UIView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *bufferingStartTime;
    MISSING_TYPE *playingStartTime;
    MISSING_TYPE *totalBufferTime;
    MISSING_TYPE *totalPlayingTime;
    MISSING_TYPE *sourceURL;
    MISSING_TYPE *state;
    MISSING_TYPE *status;
    MISSING_TYPE *duration;
    MISSING_TYPE *currentTime;
    MISSING_TYPE *lastLayoutSize;
    MISSING_TYPE *quality;
    MISSING_TYPE *baseURL;
    MISSING_TYPE *shouldEnableYouTubeInlineUI;
    MISSING_TYPE *didRequestPause;
    MISSING_TYPE *isScrubbing;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic, readonly) struct UIEdgeInsets safeAreaInsets;

@end

