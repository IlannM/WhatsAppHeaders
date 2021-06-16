//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MXMetricManagerSubscriber-Protocol.h"

@class NSString;

@interface WAMetricsKitSubscriber : NSObject <MXMetricManagerSubscriber>
{
}

- (id)createDiagnosticLogWithData:(id)arg1 index:(long long)arg2;
- (void)didReceiveDiagnosticPayloads:(id)arg1;
- (void)didReceiveMetricPayloads:(id)arg1;
- (void)metricsWithMetricsBucketEnumerator:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)submitCPUExceptionEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)submitCrashExceptionEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)submitDiskWriteExceptionEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)submitHangExceptionEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

