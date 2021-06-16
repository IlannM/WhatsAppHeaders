//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADeepLink.h"

@class NSString;

@interface WAGroupInviteDeepLink : WADeepLink
{
    CDUnknownBlockType _presentHandler;
    NSString *_inviteCode;
}

- (void).cxx_destruct;
- (void)deepLinkAppSwitcherResponse:(long long)arg1;
- (void)handlePresentGroupInviteJoinController:(id)arg1 topMostPresentedViewController:(id)arg2 showAppSwitcher:(_Bool)arg3;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
- (void)logDeepLinkEvent;
- (void)openURLDeferredWithRootVC:(id)arg1 showAppSwitcher:(_Bool)arg2;
- (_Bool)parseURL:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType presentHandler; // @synthesize presentHandler=_presentHandler;
- (long long)standardAppSwitcherAllowedBehaviour;
- (id)urlForAppScheme:(id)arg1;

@end
