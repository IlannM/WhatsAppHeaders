//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSURL;
@protocol OS_dispatch_queue;

@protocol WABloksNetworking <NSObject>
- (void)downloaderImageWithURL:(NSURL *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 successHandler:(void (^)(NSData *))arg3 failureHandler:(void (^)(NSError *))arg4;
@end

