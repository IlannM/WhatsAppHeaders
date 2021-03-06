//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAUpgradeCallback-Protocol.h"

@class NSString, WAActionManager, WAAutoBackupSettings, WABackup, WABackupErrorManager, WABackupKeyManager, WACloudStatus, WAPreviousBackup, WARestore, WARestoreExclusiveConnectionManager, WAUploadedBackup;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WACloudBackupManager : NSObject <WAUpgradeCallback>
{
    id _uploadListener;
    WABackupKeyManager *_keyManager;
    unsigned long long _waitingBackgroundTask;
    WARestoreExclusiveConnectionManager *_exclusiveConnectionManager;
    _Bool _isChangingBackupType;
    _Bool _didChangeAccountRecently;
    _Bool _backUpWithBackgroundTasks;
    _Bool _backingUp;
    _Bool _restoring;
    WACloudStatus *_uploadStatus;
    WACloudStatus *_downloadStatus;
    WABackupErrorManager *_errorManager;
    WAAutoBackupSettings *_autoBackupSettings;
    WAPreviousBackup *_previousBackup;
    WAUploadedBackup *_uploadedBackup;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    WAActionManager *_currentAction;
    id _ubiquityIdentityToken;
}

+ (void)addUserDefault:(id)arg1;
+ (void)addUserDefaults:(id)arg1;
+ (id)originalAttributeForHandle:(id)arg1 error:(out id *)arg2;
+ (unsigned long long)originalFileIndexForPaths:(id)arg1 relativeToPath:(id)arg2;
+ (_Bool)setOriginalAttribute:(id)arg1 forHandle:(id)arg2;
+ (_Bool)setOriginalFileAtPath:(id)arg1 usingRelativePath:(id)arg2;
+ (id)sharedManager;
+ (id)userDefaultsToInclude;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
- (void).cxx_destruct;
- (void)action:(Class)arg1 withChatStorage:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) WAAutoBackupSettings *autoBackupSettings; // @synthesize autoBackupSettings=_autoBackupSettings;
@property(readonly, nonatomic) _Bool available;
@property(readonly, nonatomic) _Bool availableEstimate;
@property(nonatomic) _Bool backUpWithBackgroundTasks; // @synthesize backUpWithBackgroundTasks=_backUpWithBackgroundTasks;
@property(readonly, nonatomic) WABackupKeyManager *backupKeyManager;
- (void)backupWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelScheduledBackup;
- (_Bool)checkFailureReason:(out id *)arg1;
- (void)cleanTemporaryFiles;
- (void)clearAccountChangedRecently;
- (id)createDownloadOperationWithRestore:(id)arg1;
- (id)createDownloadStatus;
- (id)createPreviousBackup;
- (id)createUploadOperationWithBackup:(id)arg1 encryptionKey:(id)arg2 fromOperation:(id)arg3;
- (id)createUploadStatus;
@property(readonly, nonatomic) WAActionManager *currentAction; // @synthesize currentAction=_currentAction;
@property(readonly, nonatomic) WABackup *currentBackup;
@property(readonly, nonatomic) WARestore *currentRestore;
- (void)dealloc;
- (void)deleteBackupForJID:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteBackupKeys;
@property(nonatomic) _Bool didChangeAccountRecently; // @synthesize didChangeAccountRecently=_didChangeAccountRecently;
@property(readonly, nonatomic) WACloudStatus *downloadStatus; // @synthesize downloadStatus=_downloadStatus;
- (void)endWaitingBackgroundTask;
@property(readonly, nonatomic) WABackupErrorManager *errorManager; // @synthesize errorManager=_errorManager;
- (_Bool)evictFiles;
- (void)finishRestore;
- (void)forceTemporaryBackupFilesClean;
@property(readonly, nonatomic) NSString *gifsPath;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (id)initWithAutoBackupSettings:(id)arg1 exclusiveConnectionManager:(id)arg2;
@property(readonly, nonatomic) _Bool initialized;
@property(nonatomic, getter=isBackingUp) _Bool backingUp; // @synthesize backingUp=_backingUp;
@property(nonatomic) _Bool isChangingBackupType; // @synthesize isChangingBackupType=_isChangingBackupType;
@property(readonly, nonatomic, getter=isReadyForBackup) _Bool readyForBackup;
@property(nonatomic, getter=isRestoring) _Bool restoring; // @synthesize restoring=_restoring;
@property(readonly, nonatomic, getter=isUserRegistered) _Bool userRegistered;
@property(readonly, nonatomic, getter=isUserRegistered_cached) _Bool userRegistered_cached;
- (void)listenForUploadCompletion;
- (void)loadUbiquityIdentityToken;
@property(readonly) NSString *localBackupPath;
@property(readonly) NSString *localRestorePath;
- (void)markAccountChanged;
@property(readonly, nonatomic) NSString *mediaPath;
@property(readonly, nonatomic) NSString *persistentDataFilePath;
- (void)postLoadOverrideExpiredNotification;
- (void)prepare;
@property(readonly, nonatomic) WAPreviousBackup *previousBackup; // @synthesize previousBackup=_previousBackup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)registerForAutoBackup;
- (void)reportUploadStatusFinished:(id)arg1;
- (void)reportUploadStatusInProgress:(id)arg1;
- (void)restoreUsingCloudStatus:(id)arg1 andBackupInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runDeleteBackupForJID:(id)arg1 withOptions:(unsigned long long)arg2 encounteredErrors:(id)arg3 inGroup:(id)arg4;
- (void)scheduleBackup;
- (void)setBackupKeyTypeAndPassword:(id)arg1 forUserJID:(id)arg2;
@property(retain, nonatomic) id ubiquityIdentityToken; // @synthesize ubiquityIdentityToken=_ubiquityIdentityToken;
@property(readonly, nonatomic) NSString *smbBackedUpDirectoryPath;
- (void)startBackup;
- (void)startCurrentAction;
@property(readonly, nonatomic) NSString *stickersPath;
@property(readonly, nonatomic) unsigned long long temporaryBackupSize;
- (void)ubiquityIdentityTokenChanged:(id)arg1;
- (void)ubiquityIdentityTokenDidChange;
- (void)unregisterForAutoBackup;
@property(readonly, nonatomic) WACloudStatus *uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(readonly, nonatomic) WAUploadedBackup *uploadedBackup; // @synthesize uploadedBackup=_uploadedBackup;
@property(readonly, copy, nonatomic) NSString *uploadedBackupPath;
- (void)willEndForegroundTask:(id)arg1;
- (void)willEnterForeground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

