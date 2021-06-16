//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WATriggeredOperation.h"

@class NSArray, NSMutableArray, NSString, WABackup, WACloudInteractionOperation, WARequireOperation;
@protocol WABackupKey;

@interface WAPrepareBackupOperation : WATriggeredOperation
{
    WABackup *_backup;
    id <WABackupKey> _encryptionKey;
    NSString *_userDefaultsPath;
    NSMutableArray *_fileOperations;
    NSArray *_tarOperations;
    WARequireOperation *_tarRequireOperation;
    WACloudInteractionOperation *_uploadOperation;
    _Atomic _Bool _criticalErrorOccured;
    NSString *_localBackupPath;
}

+ (_Bool)getCreationKey:(out id *)arg1 fileKey:(out id *)arg2 forPath:(id)arg3;
- (void).cxx_destruct;
- (void)addCompletionHandlerToTAROperations:(id)arg1;
- (_Bool)calculatePotentialBackupSize;
- (_Bool)checkBattery;
- (_Bool)checkCancel;
- (_Bool)checkForCorruption;
- (_Bool)checkForRegistration;
- (_Bool)checkRecentInProgress;
- (id)configureCopyForFileAtPath:(id)arg1;
- (id)configureCopyForSQLiteDatabaseAtPath:(id)arg1 temporaryPath:(id *)arg2;
- (void)continueAfterMainThreadChecks;
- (void)continueAfterSaveWithUploadOperation:(id)arg1;
- (void)continueWithEncryptionKey;
- (id)createEncryptionOperationForFileAtPath:(id)arg1 usingName:(id)arg2;
- (void)createLocalBackupDirectory;
- (id)encryptedLocalPathForName:(id)arg1;
- (void)finish;
- (id)generateTarFilePathsAndSplitHints:(id)arg1 shouldCachePlaintextHashes:(_Bool)arg2;
- (void)handleErrorIfNeeded:(id)arg1;
- (id)initWithBackup:(id)arg1;
@property(copy, nonatomic) NSString *localBackupPath; // @synthesize localBackupPath=_localBackupPath;
- (void)performTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)prepareGIFOperation;
- (id)prepareOtherAssetOperationWithPrefix:(id)arg1 tarName:(id)arg2 assetFilePathsBlock:(CDUnknownBlockType)arg3;
- (id)prepareSMBOperation;
- (id)prepareStickerOperation;
- (id)prepareTAROperationsWithUploadOperation:(id)arg1;
- (id)processFilePaths:(id)arg1 relativeToPath:(id)arg2 withHint:(out id *)arg3;
- (id)queryTarFilePathsAndShouldCachePlaintextHashes:(_Bool)arg1;
- (void)removeFileFromBackup:(id)arg1;
- (_Bool)requireChatStore;
- (void)saveUserDefaultsWithCompletion:(CDUnknownBlockType)arg1;
- (id)storeUserDefaultsToDictionary;

@end

