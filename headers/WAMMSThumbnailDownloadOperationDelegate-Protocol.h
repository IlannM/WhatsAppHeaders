//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, WAMMSThumbnailDownloadOperation, WamEventMediaDownload2;

@protocol WAMMSThumbnailDownloadOperationDelegate
- (void)downloadTask:(WAMMSThumbnailDownloadOperation *)arg1 didCompleteWithError:(NSError *)arg2 terminal:(_Bool)arg3 bytesTransferred:(unsigned long long)arg4;
- (void)downloadTask:(WAMMSThumbnailDownloadOperation *)arg1 populatedDownloadEvent:(WamEventMediaDownload2 *)arg2 shouldSubmit:(_Bool)arg3;
@end

