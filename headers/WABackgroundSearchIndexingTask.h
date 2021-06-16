//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WABackgroundProcessingTask-Protocol.h"

@class NSString;
@protocol WABackgroundTaskDelegate;

@interface WABackgroundSearchIndexingTask : NSObject <WABackgroundProcessingTask>
{
    id <WABackgroundTaskDelegate> _delegate;
}

+ (id)identifier;
+ (id)queue;
+ (_Bool)repeated;
+ (id)taskRequest;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WABackgroundTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)launchTask;
- (void)messageSearchEngineDidCompleteIndexing:(id)arg1;
- (void)taskEnded;
- (void)taskExpired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

