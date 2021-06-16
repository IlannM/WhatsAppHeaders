//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WANetworkUsageMetricsManager.h>

@class NSMutableDictionary, NSMutableSet;

@interface WAPrimaryNetworkUsageMetricsManager : WANetworkUsageMetricsManager
{
    _Bool _stateRestored;
    double _lastSubmissionDayEpoch;
    NSMutableDictionary *_configurationForIdentifier;
    NSMutableSet *_configurationIdentifiersToSave;
}

- (void).cxx_destruct;
- (id)configurationForMediaType:(long long)arg1 transferRadio:(long long)arg2 origin:(long long)arg3 autoDownload:(_Bool)arg4;
- (id)initWithSynchronizeInterval:(double)arg1 keyValueStore:(id)arg2 cellProvider:(id)arg3 reachabilityHelper:(id)arg4;
- (void)internalReset;
- (void)internalSave;
- (void)mergeExtensionConfigurations;
- (void)prepareAndSubmitIfNeeded;
- (void)restoreMainAppState;
- (void)scheduleSaveForConfiguration:(id)arg1;

@end

