//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSString, WAWeakTimer;
@protocol WAMessageLiveLocationSliceDelegate;

@interface WAMessageBaseLiveLocationButtonSlice : WAMessageContainerSlice
{
    WAWeakTimer *_timer;
    _Bool _invalidated;
    _Bool _divider;
    id <WAMessageLiveLocationSliceDelegate> _delegate;
    NSString *_messageUniqueID;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAMessageLiveLocationSliceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool divider; // @synthesize divider=_divider;
- (id)initWithMessages:(id)arg1 metrics:(id)arg2;
- (void)internalFitToWidth:(double)arg1;
- (void)invalidateStatusIfNeeded;
- (void)locationSharingEndDateDidChange:(id)arg1;
@property(readonly, nonatomic) NSString *messageUniqueID; // @synthesize messageUniqueID=_messageUniqueID;
- (void)scheduleExpirationTimerForMessage:(id)arg1 now:(id)arg2;

@end

