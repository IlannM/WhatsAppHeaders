//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, WARemoveExpiredEphemeralMessagesTask;
@protocol WAServerDate;

@protocol WARemoveExpiredEphemeralMessagesTaskDelegate
- (void)removeExpiredEphemeralMessagesTaskDidEndPruningRun:(WARemoveExpiredEphemeralMessagesTask *)arg1 nextMessageExpirationDate:(NSDate<WAServerDate> *)arg2;
@end

