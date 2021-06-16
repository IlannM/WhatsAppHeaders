//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSString, WAMessage, WARegularMediaDownloadManager;

@protocol WARegularMediaDownloadManagerDelegate
- (void)regularMediaDownloader:(WARegularMediaDownloadManager *)arg1 didFailToDownloadMediaInMessage:(WAMessage *)arg2 presentAlert:(_Bool)arg3 error:(NSError *)arg4;
- (void)regularMediaDownloader:(WARegularMediaDownloadManager *)arg1 didFinishDownloadingMediaInMessage:(WAMessage *)arg2 toRelativePath:(NSString *)arg3 downloadState:(int)arg4;
- (void)regularMediaDownloader:(WARegularMediaDownloadManager *)arg1 didFinishDownloadingThumbnailForMessage:(WAMessage *)arg2;
- (void)regularMediaDownloader:(WARegularMediaDownloadManager *)arg1 didUpdateProgressOfMessage:(WAMessage *)arg2;
- (void)regularMediaDownloader:(WARegularMediaDownloadManager *)arg1 didUpdateTemporaryMediaForMessage:(WAMessage *)arg2 inPath:(NSString *)arg3;
@end

