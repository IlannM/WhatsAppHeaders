//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WARankingMetric.h"

@class MISSING_TYPE;

@interface WAStandardDecayRankingMetric : WARankingMetric
{
}

- (void)absorbMetric:(id)arg1;
- (MISSING_TYPE *)allDecaysWithCurrentTime:(double)arg1;
- (MISSING_TYPE *)applyDecayTo: /* Error: Ran out of types for this method. */;
- (id)codableCopy;
@property(readonly, nonatomic) double decay1;
@property(readonly, nonatomic) double decay28;
@property(readonly, nonatomic) double decay7;
@property(readonly, nonatomic) double decay84;
- (id)initWithPBMetric:(id)arg1;
- (MISSING_TYPE *)logEventWithValue:(double)arg1 ceiling:(id)arg2 loggedValue:(out double *)arg3;
- (void)migrateFromLegacyProto;

@end

