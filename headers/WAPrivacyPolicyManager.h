//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAPrivacySettingsProviding-Protocol.h"

@class MISSING_TYPE;

@interface WAPrivacyPolicyManager : NSObject <WAPrivacySettingsProviding>
{
    MISSING_TYPE *activePolicy;
    MISSING_TYPE *sessionPreferences;
    MISSING_TYPE *serverProperties;
    MISSING_TYPE *xmppConnectionMain;
    MISSING_TYPE *keyValueStore;
    MISSING_TYPE *userDefaults;
    MISSING_TYPE *queue;
}

- (void).cxx_destruct;
- (void)fetchPrivacyFromSyncNotification:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithXmppConnectionMain:(id)arg1 sessionPreferences:(id)arg2 userDefaults:(id)arg3 keyValueStore:(id)arg4 serverProperties:(Class)arg5;
- (_Bool)isPolicyV2;
- (void)isV2EnabledByAccountSyncNotificationWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadGroupAddBlocklistUserJIDsAndReturnError:(id *)arg1;
- (void)loadPrivacySettingsIfNeeded;
- (void)resetPolicy;
- (void)setNeedsGroupsBlacklistDownstreamSync;
- (void)update:(unsigned long long)arg1 with:(unsigned long long)arg2;
- (void)updateActivePolicyIfNecessary;
- (void)updateGroupAddBlocklistWith:(id)arg1;
- (unsigned long long)valueFor:(unsigned long long)arg1;

@end

