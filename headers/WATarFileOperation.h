//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WASynchronousBackupOperation.h"

@class NSArray, NSCache, NSData, NSString;
@protocol WABackupTarFileEncryptionKey;

@interface WATarFileOperation : WASynchronousBackupOperation
{
    unsigned long long _tarStepsComplete;
    unsigned long long _stepsToComplete;
    _Bool _succeeded;
    NSArray *_files;
    NSString *_prefix;
    NSString *_remotePathToClone;
    NSCache *_plaintextHashCache;
    NSData<WABackupTarFileEncryptionKey> *_encryptionKey;
    _Bool _useOptimizedSearching;
    NSString *_path;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)cleanFilesIfOutOfSpace:(id)arg1;
- (unsigned long long)cloneFromRemoteIfPossible;
- (unsigned long long)completedSteps;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)initWithPath:(id)arg1 remotePathToClone:(id)arg2 fileList:(id)arg3 commonPrefix:(id)arg4 plaintextHashCache:(id)arg5 encryptionKey:(id)arg6;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)run;
@property _Bool useOptimizedSearching; // @synthesize useOptimizedSearching=_useOptimizedSearching;
- (_Bool)succeeded;
- (unsigned long long)totalSteps;

@end
