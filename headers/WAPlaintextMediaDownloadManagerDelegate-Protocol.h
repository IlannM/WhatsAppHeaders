//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSString, WAPlaintextDownloadRequest, WAPlaintextMediaDownloadManager;

@protocol WAPlaintextMediaDownloadManagerDelegate
- (void)plaintextMediaDownloader:(WAPlaintextMediaDownloadManager *)arg1 didFailToDownloadMediaForRequest:(WAPlaintextDownloadRequest *)arg2 error:(NSError *)arg3;
- (void)plaintextMediaDownloader:(WAPlaintextMediaDownloadManager *)arg1 didFinishDownloadingMediaForRequest:(WAPlaintextDownloadRequest *)arg2 toPath:(NSString *)arg3;
@end

