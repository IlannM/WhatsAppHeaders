//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WALiveLocationReportingSessionSegment;

@interface WALiveLocationReportingSession : NSObject
{
    WALiveLocationReportingSessionSegment *_wholeSessionSegment;
    WALiveLocationReportingSessionSegment *_currentSegment;
    NSDate *_lastUpdateTime;
    _Bool _stopped;
    _Bool _advancing;
    unsigned long long _algorithm;
}

+ (void)applicationDidFinishLaunching;
+ (void)reportWholeSessionSegment:(id)arg1;
- (void).cxx_destruct;
- (void)advanceSegment;
- (void)advanceSegmentIfNeeded:(long long)arg1;
@property(nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
- (void)batteryStateDidChange:(id)arg1;
- (void)didReceiveLocationError:(id)arg1;
- (void)didSendUpdateWithLocation:(id)arg1 backoffStage:(long long)arg2 numberOfKeyDistributionMessages:(long long)arg3;
- (id)init;
- (void)sendUpdateStatWithError:(id)arg1 accuracy:(double)arg2 numberOfKeyDistributionMessages:(long long)arg3;
- (void)stop;

@end

