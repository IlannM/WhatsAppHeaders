//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PKPushCredentials, PKPushPayload, PKPushRegistry;

@protocol PKPushRegistryDelegate <NSObject>
- (void)pushRegistry:(PKPushRegistry *)arg1 didUpdatePushCredentials:(PKPushCredentials *)arg2 forType:(NSString *)arg3;

@optional
- (void)pushRegistry:(PKPushRegistry *)arg1 didInvalidatePushTokenForType:(NSString *)arg2;
- (void)pushRegistry:(PKPushRegistry *)arg1 didReceiveIncomingPushWithPayload:(PKPushPayload *)arg2 forType:(NSString *)arg3;
- (void)pushRegistry:(PKPushRegistry *)arg1 didReceiveIncomingPushWithPayload:(PKPushPayload *)arg2 forType:(NSString *)arg3 withCompletionHandler:(void (^)(void))arg4;
@end

