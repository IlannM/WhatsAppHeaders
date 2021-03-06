//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABackupInformation.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAUploadedBackup : WABackupInformation
{
    NSString *_path;
    unsigned long long _loadingCount;
    NSObject<OS_dispatch_queue> *_captureQueue;
    _Bool _cloudLoading;
}

- (void).cxx_destruct;
- (void)applyHint:(unsigned long long)arg1;
- (void)captureUploadWithPath:(id)arg1 sizeHint:(unsigned long long)arg2;
- (void)cloudAccountChanged:(id)arg1;
- (void)cloudAccountLoadOverrideExpired:(id)arg1;
- (void)copyFromURL:(id)arg1;
- (void)didFinishLoading;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithManager:(id)arg1 path:(id)arg2;
@property(nonatomic, getter=isCloudLoading) _Bool cloudLoading; // @synthesize cloudLoading=_cloudLoading;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (_Bool)load;
- (void)performBlockAffectingLoading:(CDUnknownBlockType)arg1;
- (void)resetCapturedUploadWithCompletion:(CDUnknownBlockType)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)updateCloudLoadingFromManager:(id)arg1;
- (void)updateUploadWithPath:(id)arg1 sizeHint:(unsigned long long)arg2;

@end

