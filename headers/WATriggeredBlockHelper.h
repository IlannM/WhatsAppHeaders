//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults, WAPersistentKeyValueStore;

@interface WATriggeredBlockHelper : NSObject
{
    WAPersistentKeyValueStore *_keyValueStore;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (void)deleteForUser:(id)arg1;
- (id)initWithKeyValueStore:(id)arg1 withUserDefaults:(id)arg2;
- (_Bool)isActiveForUser:(id)arg1 onDate:(id)arg2;
- (id)loadForUser:(id)arg1;
- (unsigned long long)purgeIfNeededOnDate:(id)arg1;
- (unsigned long long)purgeOnDate:(id)arg1;
- (void)recordActionForUser:(id)arg1 onDate:(id)arg2;
- (void)recordForUser:(id)arg1 expiresOn:(id)arg2 withCooldown:(double)arg3;
- (_Bool)recordShownForUser:(id)arg1 onDate:(id)arg2;
- (void)saveForUser:(id)arg1 triggeredBlock:(id)arg2;
- (_Bool)wasAlreadyShown:(id)arg1;

@end

