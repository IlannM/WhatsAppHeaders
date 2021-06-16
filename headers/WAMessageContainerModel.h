//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, WAMessage, WAMessageContainerMetrics;

@interface WAMessageContainerModel : NSObject
{
    _Bool _suspiciousLinkOnTop;
    _Bool _needsLinkDetection;
    _Bool _formatText;
    _Bool _appendReadMoreLinkWhenNeeded;
    _Bool _shouldRenderInEmojiView;
    _Bool _needsStatusSlice;
    _Bool _trusted;
    WAMessageContainerMetrics *_metrics;
    WAMessageContainerMetrics *_replyMetrics;
    NSArray *_messages;
    unsigned long long _displayStyle;
    NSAttributedString *_messageAttributedText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool appendReadMoreLinkWhenNeeded; // @synthesize appendReadMoreLinkWhenNeeded=_appendReadMoreLinkWhenNeeded;
@property(readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, nonatomic) WAMessage *firstMessage;
@property(nonatomic) _Bool formatText; // @synthesize formatText=_formatText;
- (id)initWithMessages:(id)arg1 trusted:(_Bool)arg2 metrics:(id)arg3 displayStyle:(unsigned long long)arg4;
@property(readonly, nonatomic, getter=isMediaAlbum) _Bool mediaAlbum;
@property(readonly, nonatomic, getter=isPaymentMessage) _Bool paymentMessage;
@property(readonly, nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;
@property(readonly, nonatomic, getter=isViewOnceMessage) _Bool viewOnceMessage;
@property(copy, nonatomic) NSAttributedString *messageAttributedText; // @synthesize messageAttributedText=_messageAttributedText;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(readonly, nonatomic) WAMessageContainerMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) _Bool needsLinkDetection; // @synthesize needsLinkDetection=_needsLinkDetection;
@property(nonatomic) _Bool needsStatusSlice; // @synthesize needsStatusSlice=_needsStatusSlice;
@property(readonly, nonatomic) WAMessageContainerMetrics *replyMetrics; // @synthesize replyMetrics=_replyMetrics;
@property(nonatomic) _Bool shouldRenderInEmojiView; // @synthesize shouldRenderInEmojiView=_shouldRenderInEmojiView;
@property(nonatomic) _Bool suspiciousLinkOnTop; // @synthesize suspiciousLinkOnTop=_suspiciousLinkOnTop;

@end

