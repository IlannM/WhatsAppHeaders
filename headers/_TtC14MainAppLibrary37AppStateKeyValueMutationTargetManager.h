//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import "WAAppState-Protocol.h"
#import "WAAppStateEpochMutating-Protocol.h"
#import "WAAppStateLocaleMutating-Protocol.h"
#import "WAAppStatePushNameMutating-Protocol.h"

@class MISSING_TYPE;

@interface _TtC14MainAppLibrary37AppStateKeyValueMutationTargetManager : _TtCs12_SwiftObject <WAAppStateEpochMutating, WAAppStatePushNameMutating, WAAppStateLocaleMutating, WAAppState>
{
    MISSING_TYPE *keyManager;
    MISSING_TYPE *store;
    MISSING_TYPE *configuration;
    MISSING_TYPE *userDefaults;
    MISSING_TYPE *cache;
    MISSING_TYPE *queue;
}

- (_Bool)deletePushName:(id *)arg1;
- (_Bool)incrementCurrentEpochIfNeededWithBeyond:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)saveLocaleAs:(id)arg1 error:(id *)arg2;
- (_Bool)savePushName:(id)arg1 error:(id *)arg2;
- (_Bool)savePushName:(id)arg1 from:(long long)arg2 error:(id *)arg3;

@end

