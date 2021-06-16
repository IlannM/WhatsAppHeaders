//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WACloudBackupManager.h"

@class NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface WACloudBackupManager_Documents : WACloudBackupManager
{
    NSString *_capturedRemoteBackupPath;
    id _ubiquityURL;
    NSObject<OS_dispatch_queue> *_uploadingDateQueue;
}

+ (void)getDownloadedAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)getDownloadingAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)getKey:(id)arg1 atPath:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)internalStartFileDownloading:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)phoneNumberFromBackupInfoFilePath:(id)arg1;
+ (void)startFileDownloading:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (_Bool)available;
- (_Bool)availableEstimate;
- (void)configureCloudOperation:(id)arg1;
- (id)createDownloadOperationWithRestore:(id)arg1;
- (id)createDownloadStatus;
- (id)createPreviousBackup;
- (id)createUploadOperationWithBackup:(id)arg1 encryptionKey:(id)arg2 fromOperation:(id)arg3;
- (id)createUploadStatus;
- (void)deleteBackupForJID:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadMetadataForAllBackups;
- (_Bool)evictFiles;
- (void)fixCloudAccount;
- (id)initWithAutoBackupSettings:(id)arg1 exclusiveConnectionManager:(id)arg2;
- (_Bool)initialized;
- (_Bool)isUserRegistered_cached;
- (void)loadUbiquityURL;
- (id)localBackupPath;
- (id)localRestorePath;
@property(readonly, nonatomic) NSString *remoteBackupPath;
- (void)removeCloudItemsAtPaths:(id)arg1;
- (void)reportUploadStatusFinished:(id)arg1;
- (void)reportUploadStatusInProgress:(id)arg1;
- (void)runDeleteBackupForJID:(id)arg1 withOptions:(unsigned long long)arg2 encounteredErrors:(id)arg3 inGroup:(id)arg4;
@property(retain, nonatomic) NSURL *ubiquityURL; // @synthesize ubiquityURL=_ubiquityURL;
- (void)startCurrentAction;
- (void)ubiquityIdentityTokenDidChange;
- (id)uploadingInfoFilePath;

@end
