//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSString, WAMMSMediaDownloadOperation, WAMMSMediaTransferOperationAsset, WamEventMediaDownload2;

@protocol WAMMSMediaDownloadOperationDelegate
- (void)downloadTask:(WAMMSMediaDownloadOperation *)arg1 assetForDecryptedFile:(void (^)(WAMMSMediaTransferOperationAsset *))arg2;
- (void)downloadTask:(WAMMSMediaDownloadOperation *)arg1 didFinishWithAsset:(WAMMSMediaTransferOperationAsset *)arg2 assetType:(unsigned long long)arg3 error:(NSError *)arg4 terminal:(_Bool)arg5 bytesTransferred:(unsigned long long)arg6;
- (void)downloadTask:(WAMMSMediaDownloadOperation *)arg1 didUpdateProgress:(double)arg2;
- (void)downloadTask:(WAMMSMediaDownloadOperation *)arg1 populatedDownloadEvent:(WamEventMediaDownload2 *)arg2 shouldSubmit:(_Bool)arg3 isRetry:(_Bool)arg4;
- (void)downloadTaskDidDecryptPartialMedia:(WAMMSMediaDownloadOperation *)arg1 toFilePath:(NSString *)arg2;
@end
