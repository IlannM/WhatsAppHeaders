//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageWebPageSlice.h"

@class WAMessage;

@interface WAMessageExternalVideoSlice : WAMessageWebPageSlice
{
    WAMessage *_message;
    _Bool _isFromExternalAdReply;
    long long _videoType;
    struct CGSize _aspectRatio;
}

+ (long long)maximumNumberOfLines;
+ (id)metricsForExternalVideoFromMetrics:(id)arg1;
+ (long long)minimumNumberOfLines;
+ (Class)viewClass;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void)fetchImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasThumbnail;
- (id)initWithMessages:(id)arg1 metrics:(id)arg2;
- (void)internalFitToWidth:(double)arg1;
@property(readonly, nonatomic) _Bool isFromExternalAdReply; // @synthesize isFromExternalAdReply=_isFromExternalAdReply;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
- (double)textVerticalOffset;
- (struct CGSize)thumbnailSize;

@end
