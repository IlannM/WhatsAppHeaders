//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAAccountSyncServiceProviding-Protocol.h"
#import "WAPersistentRequestManagerRegistering-Protocol.h"

@class MISSING_TYPE;

@interface WAAccountSyncManager : NSObject <WAAccountSyncServiceProviding, WAPersistentRequestManagerRegistering>
{
    MISSING_TYPE *dataTypeFetcher;
    MISSING_TYPE *contactBlocklist;
    MISSING_TYPE *privacyPolicyManager;
    MISSING_TYPE *dirtyBitCleaner;
    MISSING_TYPE *accountProvider;
    MISSING_TYPE *context;
    MISSING_TYPE *accountSyncDevicesHandler;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)arg1 connection:(id)arg2 accountSyncDevicesHandler:(id)arg3 dataTypeFetcher:(id)arg4 contactBlocklist:(id)arg5 privacyPolicyManager:(id)arg6;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (void)sendPersistentRequestSyncing:(long long)arg1;
- (void)sendRequestSyncing:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sharedObjectKeyForPersistentRequestManager:(id)arg1;

@end

