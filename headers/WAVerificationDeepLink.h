//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADeepLink.h"

@class NSString;

@interface WAVerificationDeepLink : WADeepLink
{
    NSString *_verificationCode;
}

- (void).cxx_destruct;
- (void)handleDeepLinkWithRootVC:(id)arg1;
- (void)logDeepLinkEvent;
- (_Bool)parseURL:(id)arg1 context:(id)arg2;
- (long long)standardAppSwitcherAllowedBehaviour;

@end

