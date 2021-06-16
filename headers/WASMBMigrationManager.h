//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAUserJID;

@interface WASMBMigrationManager : NSObject
{
    NSString *_sourceAppGroupName;
    NSString *_targetAppGroupName;
    WAUserJID *_possibleMigrationTargetJID;
}

+ (id)dbFilesToMigrate;
+ (id)directoriesToMigrate;
+ (id)userDefaultsTargetKeyOverride;
+ (id)userDefaultsToMigrate;
- (void).cxx_destruct;
- (unsigned long long)checkIfStorageIsEnoughForMigration;
- (id)initWithMigrationDirection:(unsigned long long)arg1;
- (id)initWithSourceAppGroupName:(id)arg1 targetAppGroupName:(id)arg2;
- (void)internalSendWamEvent:(id)arg1 withStorageInfo:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isEligibleForMigration) _Bool eligibleForMigration;
- (unsigned long long)migrateFromSourceToTarget;
@property(readonly, nonatomic) WAUserJID *possibleMigrationTargetJID; // @synthesize possibleMigrationTargetJID=_possibleMigrationTargetJID;
- (void)rollbackWithOperations:(id)arg1;
- (void)sendWamEvent:(id)arg1 withStorageInfo:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *sourceAppGroupName; // @synthesize sourceAppGroupName=_sourceAppGroupName;
@property(readonly, copy, nonatomic) NSString *sourceAppVersion;
@property(readonly, copy, nonatomic) NSString *targetAppGroupName; // @synthesize targetAppGroupName=_targetAppGroupName;
- (unsigned long long)totalDBFileSize;
- (unsigned long long)totalMediaFileSize;

@end

