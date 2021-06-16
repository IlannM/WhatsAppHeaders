//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol WACallGridManagerDelegate;

@interface WACallGridManager : NSObject
{
    NSMutableArray *_leftColumn;
    NSMutableArray *_rightColumn;
    NSMutableArray *_queue;
    _Bool _processingView;
    _Bool _currentlyHighPriority;
    NSArray *_allViews;
    id <WACallGridManagerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allViews; // @synthesize allViews=_allViews;
@property(readonly, nonatomic) long long currentCount;
@property(nonatomic) id <WACallGridManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithPeerVideoViews:(id)arg1 selfVideoView:(id)arg2 delegate:(id)arg3;
- (void)needsGridLayout;
- (void)processNextQueuedObject;
- (void)removeView:(id)arg1;
- (void)setFinalFrames;
- (void)setInitialFramesWithView:(id)arg1;

@end

