//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString;
@protocol WAMessageSearchPreparingTextControllerDelegate;

@interface WAMessageSearchPreparingTextController : NSObject
{
    unsigned long long _indexedMessageCount;
    unsigned long long _totalMessageCount;
    _Bool _finished;
    NSNumberFormatter *_formatter;
    _Bool _started;
    id <WAMessageSearchPreparingTextControllerDelegate> _delegate;
    NSString *_text;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAMessageSearchPreparingTextControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishIndexing:(id)arg1;
- (void)didIndexSomeMessages:(id)arg1;
- (id)init;
- (void)loadMessageCounts;
- (void)start;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)updateText;

@end

