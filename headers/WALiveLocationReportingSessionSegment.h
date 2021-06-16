//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WALiveLocationReportingSessionSegment : NSObject
{
    _Bool _chargingDetected;
    long long _numberOfUpdates;
    long long _backoffStage;
    NSString *_userDefaultsKey;
    NSDate *_startTime;
    NSDate *_endTime;
    double _startBatteryLevel;
    double _endBatteryLevel;
    long long _segmentNumber;
}

+ (void)deleteSavedWholeSessionSegment;
+ (id)savedSegment;
+ (id)savedWholeSessionSegment;
+ (id)wholeSessionSegment;
- (void).cxx_destruct;
@property(readonly, nonatomic) double age;
@property(nonatomic) long long backoffStage; // @synthesize backoffStage=_backoffStage;
@property(nonatomic) _Bool chargingDetected; // @synthesize chargingDetected=_chargingDetected;
- (id)dictionaryValue;
- (void)didSendUpdate;
@property(nonatomic) double endBatteryLevel; // @synthesize endBatteryLevel=_endBatteryLevel;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSegmentNumber:(long long)arg1;
@property(nonatomic) long long numberOfUpdates; // @synthesize numberOfUpdates=_numberOfUpdates;
- (void)save;
@property(nonatomic) long long segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property(nonatomic) double startBatteryLevel; // @synthesize startBatteryLevel=_startBatteryLevel;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
- (void)stop;
- (id)successor;

@end

