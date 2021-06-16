//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSIndexSet, WAStreamingMediaLoader;

@protocol WAStreamingMediaLoaderDelegate <NSObject>
- (void)didFailToLoadInStreamingMediaLoader:(WAStreamingMediaLoader *)arg1 error:(NSError *)arg2;
- (void)didFetchThumbnailThatNeedsReloadingInStreamingMediaLoader:(WAStreamingMediaLoader *)arg1;
- (void)didFinishLoadingInStreamingMediaLoader:(WAStreamingMediaLoader *)arg1;
- (void)didUpdateDownloadProgressOfStreamingMediaLoader:(WAStreamingMediaLoader *)arg1 bytesDownloaded:(unsigned long long)arg2;
- (void)streamingMediaLoader:(WAStreamingMediaLoader *)arg1 populatedDownloadEvents:(NSArray *)arg2;
- (void)streamingMediaLoaderDidBeginPlayback:(WAStreamingMediaLoader *)arg1;
- (void)streamingMediaLoaderDidRequestAdd:(WAStreamingMediaLoader *)arg1;
- (void)streamingMediaLoaderDidRequestRemove:(WAStreamingMediaLoader *)arg1;
- (_Bool)streamingMediaLoaderDidRequestSave:(WAStreamingMediaLoader *)arg1 forFileMap:(NSIndexSet *)arg2;
- (void)streamingMediaLoaderDidVerifyFileSize:(WAStreamingMediaLoader *)arg1 fileSize:(unsigned long long)arg2;
@end
