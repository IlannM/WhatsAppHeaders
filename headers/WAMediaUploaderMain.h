//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAMediaUploader.h>

@class NSSet, WAMediaReuploader, WAMessagingService;

@interface WAMediaUploaderMain : WAMediaUploader
{
    WAMessagingService *_messagingService;
    WAMediaReuploader *_mediaReuploader;
}

- (void).cxx_destruct;
- (void)cancelAllUploads;
- (void)cancelStreamingUploadOperation:(id)arg1;
- (_Bool)cancelUploadForItemWithUniqueID:(id)arg1;
- (void)cancelUploadForMessage:(id)arg1 userInitiated:(_Bool)arg2;
- (void)chatStorageDidDeleteMessages:(id)arg1;
- (void)clearCompletedGroupOperationsForUploadOperation:(id)arg1;
- (void)clearInMemoryMediaKeyInfoForUploadOperation:(id)arg1;
- (unsigned long long)countOfInProgressUploads;
- (void)createAndEnqueueMediaUploadForMessages:(id)arg1 templateMessage:(id)arg2 shouldUploadFullMediaToMMS:(_Bool)arg3 shouldUploadThumbnailToMMS:(_Bool)arg4 thumbnailUploadConfig:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)existCheckOnlyUploadForMessages:(id)arg1;
- (void)existCheckTask:(id)arg1 didFinishWithResult:(unsigned long long)arg2 existingAsset:(id)arg3 directPath:(id)arg4 mmsv3DownloadURL:(id)arg5 uploadEvent:(id)arg6 error:(id)arg7 terminal:(_Bool)arg8;
- (void)existCheckTask:(id)arg1 willRetryWithUploadEvent:(id)arg2;
- (void)fullUploadTaskCompletedWithResult:(id)arg1 error:(id)arg2 messages:(id)arg3 terminal:(_Bool)arg4 shouldSendMessage:(_Bool)arg5;
- (void)handleEnqueueFullMediaForMessages:(id)arg1 shouldUploadFullMediaToMMS:(_Bool)arg2 shouldUploadThumbnailToMMS:(_Bool)arg3 fullMediaOperation:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleFinishedOptimisticUploadTask:(id)arg1 messages:(id)arg2 result:(id)arg3 uploadEvent:(id)arg4 error:(id)arg5;
- (void)handleLoggingOfUploadResult:(id)arg1 didSendToStatus:(_Bool)arg2 didSendToGroup:(_Bool)arg3 error:(id)arg4;
- (_Bool)handleOptimisticUploadForMessages:(id)arg1 templateMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleSendAndLoggingOfUpdatedMessages:(id)arg1 uploadResult:(id)arg2 didSendToStatus:(_Bool)arg3 didSendToGroup:(_Bool)arg4 terminal:(_Bool)arg5 shouldSendMessage:(_Bool)arg6 continueSendingOnError:(_Bool)arg7 error:(id)arg8;
- (id)initWithChatStorage:(id)arg1 mmsTaskSession:(id)arg2 xmppConnection:(id)arg3 networkUsageManager:(id)arg4 networkUsageMetricsManager:(id)arg5 mediaReuploader:(id)arg6;
@property(readonly, copy, nonatomic) NSSet *mediaReuploadRequesterDeviceJIDs;
- (void)mediaUploadBeganForMessages:(id)arg1 uploadMode:(unsigned long long)arg2;
@property(retain, nonatomic) WAMessagingService *messagingService;
- (void)regularUploadTaskCompletedWithResult:(id)arg1 error:(id)arg2 messages:(id)arg3 reuploading:(_Bool)arg4 terminal:(_Bool)arg5 shouldSendMessage:(_Bool)arg6 userInfo:(id)arg7;
- (void)requestWithMessages:(id)arg1 didUpdateProgress:(double)arg2 isReupload:(_Bool)arg3;
- (void)reuploadMediaInMessage:(id)arg1 requesterDeviceJID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startMediaUploadForMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startMediaUploadForMessages:(id)arg1 templateMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)streamingPTTUploadOperationForMediaAtPath:(id)arg1;
- (void)thumbnailUploadTaskCompletedWithResult:(id)arg1 error:(id)arg2 messages:(id)arg3 terminal:(_Bool)arg4 shouldSendMessage:(_Bool)arg5;
- (void)updateCompletedGroupOperationsForUploadOperationIfNecessary:(id)arg1 error:(id)arg2;
- (void)uploadOperation:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)uploadOperation:(id)arg1 didUpdateProgress:(double)arg2;
- (void)uploadTask:(id)arg1 didFinishWithResult:(id)arg2 uploadEvent:(id)arg3 error:(id)arg4 terminal:(_Bool)arg5;
- (void)uploadTask:(id)arg1 didUpdateProgress:(double)arg2;
- (void)uploadTask:(id)arg1 willBeginUploadWithMediaKey:(id)arg2 asset:(id)arg3 reuseReason:(unsigned long long)arg4 plaintextHash:(id)arg5 ciphertextHash:(id)arg6;
- (void)uploadTask:(id)arg1 willRetryWithUploadEvent:(id)arg2;

@end
