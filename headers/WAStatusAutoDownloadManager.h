//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface WAStatusAutoDownloadManager : NSObject
{
    MISSING_TYPE *messageMediaDownloader;
    MISSING_TYPE *chatStorage;
    MISSING_TYPE *statusSessionManager;
    MISSING_TYPE *localKeyValueStore;
    MISSING_TYPE *taskManager;
    MISSING_TYPE *xmppConnection;
    MISSING_TYPE *configuration;
    MISSING_TYPE *lastConnectionNetworkStatusKey;
    MISSING_TYPE *recurringDownloadTask;
    MISSING_TYPE *logPrefix;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithMessageMediaDownloader:(id)arg1 chatStorage:(id)arg2 statusSessionManager:(id)arg3 localKeyValueStore:(id)arg4 taskManager:(id)arg5 xmppConnection:(id)arg6 configuration:(id)arg7;
- (void)scheduleStatusAutoDownloadsForEligibleMessages;
- (void)startEligibleStatusAutoDownloadsWithContext:(long long)arg1;
- (void)statusTabOpened;
- (void)xmppConnectionStateDidChangeWithNotification:(id)arg1;

@end
