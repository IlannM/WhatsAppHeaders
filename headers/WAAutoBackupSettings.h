//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSUserDefaults;
@protocol WADeviceDate;

@interface WAAutoBackupSettings : NSObject
{
    id _autoBackupDate;
    unsigned long long _frequency;
    NSUserDefaults *_defaults;
}

+ (id)descriptionForFrequency:(unsigned long long)arg1;
+ (id)expirationForDate:(id)arg1 withMultiple:(long long)arg2 ofInterval:(unsigned long long)arg3;
+ (long long)integerForFrequency:(unsigned long long)arg1;
+ (id)localizedDescriptionForFrequency:(unsigned long long)arg1;
+ (unsigned long long)parseFrequencyFromInteger:(long long)arg1;
+ (double)timeIntervalForFrequency:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate<WADeviceDate> *autoBackupDate; // @synthesize autoBackupDate=_autoBackupDate;
@property(readonly, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void)didRestoreUserDefaults:(id)arg1;
@property(readonly, nonatomic) _Bool enabled;
- (id)expirationForDate:(id)arg1 withMultiple:(long long)arg2;
@property(nonatomic) unsigned long long frequency; // @synthesize frequency=_frequency;
- (_Bool)hasMultiple:(long long)arg1 ofCurrentAutoBackupIntervalElapsedSinceDate:(id)arg2;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
@property(readonly, nonatomic) NSDate *nextExpectedBackupDate;
- (void)resetAutoBackupDate;
- (void)setAutoBackupDate:(id)arg1;
@property(readonly, nonatomic) _Bool shouldPerformAutoBackupNow;
- (void)updateAutoBackupDate;

@end
