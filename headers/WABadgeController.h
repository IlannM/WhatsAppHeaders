//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, WACallStorage;

@interface WABadgeController : NSObject
{
    MISSING_TYPE *badge;
    MISSING_TYPE *messageNotificationCenter;
    MISSING_TYPE *userSessionPreferences;
    MISSING_TYPE *xmppConnection;
    MISSING_TYPE *flush;
    MISSING_TYPE *callStorage;
    MISSING_TYPE *missedCallObserver;
    MISSING_TYPE *impl;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *estimate;
    MISSING_TYPE *foreground;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) WACallStorage *callStorage; // @synthesize callStorage;
- (void)didCommitReadTransaction;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (void)didReceiveVisibleMessage:(id)arg1;
- (id)init;
- (id)initWithCallStorage:(id)arg1 chatStorage:(id)arg2 messageNotificationCenter:(id)arg3 userSessionPreferences:(id)arg4 localKeyValueStore:(id)arg5 xmppConnection:(id)arg6;

@end

