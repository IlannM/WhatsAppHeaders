//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAUpgradeCallback-Protocol.h"

@class NSString;

@interface WAUpgradeManager : NSObject <WAUpgradeCallback>
{
}

+ (_Bool)checkForUpgrade;
+ (id)classesToNotifyDuringUpgrade;
+ (void)notifyListenersOfUpgradeFrom:(id)arg1 to:(id)arg2;
+ (id)previousAppVersion;
+ (_Bool)shouldRunMigrationFrom:(id)arg1 firstFixedBetaVersion:(id)arg2;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
