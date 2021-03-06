//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMMSMediaDownloadOperationDelegate-Protocol.h"
#import "WBMMSDownloadOperationDelegate-Protocol.h"

@class NSString, WAChatStorage, WAMMSTaskSession, WAMMSTaskSessionV4, WAMediaDownloadOperationHandler, WANetworkUsageManager, WANetworkUsageMetricsManager, WAThumbnailDownloadOperationHandler;
@protocol OS_dispatch_queue, WARegularMediaDownloadManagerDelegate;

@interface WARegularMediaDownloadManager : NSObject <WAMMSMediaDownloadOperationDelegate, WBMMSDownloadOperationDelegate>
{
    WAChatStorage *_chatStorage;
    WAMMSTaskSessionV4 *_taskSessionV4;
    WAMMSTaskSession *_taskSessionV3;
    WANetworkUsageManager *_networkUsageManager;
    WANetworkUsageMetricsManager *_networkUsageMetricsManager;
    id <WARegularMediaDownloadManagerDelegate> _delegate;
    WAMediaDownloadOperationHandler *_operationHandler;
    WAThumbnailDownloadOperationHandler *_thumbnailOperationHandler;
    NSObject<OS_dispatch_queue> *_downloadDelegateQueue;
}

- (void).cxx_destruct;
- (void)beginSuspendingDownloadsForReason:(unsigned long long)arg1;
- (void)cancelAllDownloads;
- (void)cancelMediaDownloadForMessage:(id)arg1 userInitiated:(_Bool)arg2;
- (void)cancelMediaDownloadForMessage:(id)arg1 userInitiated:(_Bool)arg2 onlyIfWaiting:(_Bool)arg3;
- (void)cancelMediaDownloadForMessageUniqueKey:(id)arg1 fileHash:(id)arg2 userInitiated:(_Bool)arg3 onlyIfWaiting:(_Bool)arg4 fireDelegateCallback:(_Bool)arg5;
- (id)cancelMediaDownloadForMessageUniqueKey:(id)arg1 fileHash:(id)arg2 userInitiated:(_Bool)arg3 onlyIfWaiting:(_Bool)arg4 inOperationHandler:(id)arg5;
- (void)cancelMediaDownloadFromMessageDeletionNotification;
- (void)cancelMediaDownloadFromMessageDeletionNotificationInOperationHandler:(id)arg1;
- (void)commonDownloadOperation:(id)arg1 didFinishWithAsset:(id)arg2 downloadState:(int)arg3 error:(id)arg4 bytesTransferred:(unsigned long long)arg5 requestEncFileHash:(id)arg6 ciphertextFilePath:(id)arg7;
- (void)commonDownloadOperation:(id)arg1 didUpdateProgress:(double)arg2;
- (void)downloadOperation:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)downloadOperation:(id)arg1 didRequestEndpointInformation:(CDUnknownBlockType)arg2;
- (void)downloadOperation:(id)arg1 didUpdateProgress:(double)arg2;
- (void)downloadTask:(id)arg1 assetForDecryptedFile:(CDUnknownBlockType)arg2;
- (void)downloadTask:(id)arg1 didFinishWithAsset:(id)arg2 assetType:(unsigned long long)arg3 error:(id)arg4 terminal:(_Bool)arg5 bytesTransferred:(unsigned long long)arg6;
- (void)downloadTask:(id)arg1 didFinishWithRegularMediaAsset:(id)arg2 assetType:(unsigned long long)arg3 error:(id)arg4 terminal:(_Bool)arg5 bytesTransferred:(unsigned long long)arg6;
- (void)downloadTask:(id)arg1 didFinishWithThumbnailAsset:(id)arg2 error:(id)arg3 terminal:(_Bool)arg4 bytesTransferred:(unsigned long long)arg5;
- (void)downloadTask:(id)arg1 didUpdateProgress:(double)arg2;
- (void)downloadTask:(id)arg1 populatedDownloadEvent:(id)arg2 shouldSubmit:(_Bool)arg3 isRetry:(_Bool)arg4;
- (void)downloadTaskDidDecryptPartialMedia:(id)arg1 toFilePath:(id)arg2;
- (void)endSuspendingDownloadsForReason:(unsigned long long)arg1;
- (id)initWithChatStorage:(id)arg1 mmsTaskSessionV4:(id)arg2 mmsTaskSessionV3:(id)arg3 networkUsageManager:(id)arg4 networkUsageMetricsManager:(id)arg5 delegate:(id)arg6;
- (_Bool)isDownloadingMediaInMessage:(id)arg1;
- (void)mergeContentExtensionDownloadForMessage:(id)arg1 withTemporaryMediaPath:(id)arg2;
- (void)mergeContentExtensionPartialDownloadAfterCancellationWithEncHash:(id)arg1 andTemporaryMediaPath:(id)arg2;
- (void)mergeContentExtensionPartialDownloadForMessage:(id)arg1 withTemporaryMediaPath:(id)arg2;
- (void)prepareThumbnailAssetForDownloadTask:(id)arg1;
- (void)processMediaAsset:(id)arg1 isThumbnail:(_Bool)arg2 forDownloadOperation:(id)arg3 error:(id)arg4 bytesTransferred:(unsigned long long)arg5 messageHandlingBlock:(CDUnknownBlockType)arg6;
- (float)progressOfMediaDownloadForMessage:(id)arg1;
- (void)queueMediaDownloadForMessage:(id)arg1 autoDownload:(_Bool)arg2 requestLengthType:(long long)arg3 policy:(id)arg4;
- (void)queueThumbnailDownloadForMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

