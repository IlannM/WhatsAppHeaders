//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSFileHandle, NSMutableOrderedSet, NSString, NSURL, NSURLSession, NSURLSessionTask, WAHTTPFetcher, WAWebPageMetadata, WamEventIphoneLinkMediaDownload;

@interface WAWebPageMediaDownloader : NSObject <NSURLSessionDataDelegate>
{
    _Bool _cancelled;
    WAWebPageMetadata *_metadata;
    WAHTTPFetcher *_fetcher;
    NSURLSession *_session;
    WamEventIphoneLinkMediaDownload *_fieldStatsEvent;
    unsigned long long _downloadableMediaSize;
    NSString *_mediaMimeType;
    NSURLSessionTask *_downloadableMediaFetchDataTask;
    CDUnknownBlockType _mediaFetchCompletionHandler;
    CDUnknownBlockType _mediaFetchErrorHandler;
    CDUnknownBlockType _mediaFetchProgressBlock;
    NSURL *_mediaDataFileURL;
    NSFileHandle *_mediaDataFileHandle;
    unsigned long long _receivedDataLength;
    CDUnknownBlockType _mediaSizeFetchCompletionHandler;
    NSURL *_downloadableMediaURLOverride;
    NSMutableOrderedSet *_urlsToTry;
}

+ (id)regularMP4URLFromGIFURL:(id)arg1;
+ (id)scaledGiphyURLFromGIFURL:(id)arg1 widthRequest:(_Bool)arg2;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)beginTryGIFURLsForSizeRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)cleanUp;
- (void)configWithMediaDownloader:(id)arg1;
- (void)createSessionIfNecessary;
- (void)downloadMediaWithCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2 progressBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long downloadableMediaSize; // @synthesize downloadableMediaSize=_downloadableMediaSize;
- (void)downloadableMediaSizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)downloadableMediaURL;
@property(readonly, nonatomic) NSURL *downloadableMediaURLOverride; // @synthesize downloadableMediaURLOverride=_downloadableMediaURLOverride;
- (id)downloadedMediaExtension;
- (void)fetchNextGIFURLResponse;
- (void)handleTriedGIFURLResponse:(id)arg1 forURL:(id)arg2;
- (id)initWithMetadata:(id)arg1;
@property(readonly, nonatomic) _Bool mediaDownloadOngoing;
@property(readonly, nonatomic) NSString *mediaMimeType; // @synthesize mediaMimeType=_mediaMimeType;
- (_Bool)pauseMediaDownload;
- (void)recordDownloaderMediaType;
- (void)recordMediaDownloaderState:(long long)arg1;
- (_Bool)resumeMediaDownload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

