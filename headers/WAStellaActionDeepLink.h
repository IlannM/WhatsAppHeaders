//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADeepLink.h"

@class NSString;

@interface WAStellaActionDeepLink : WADeepLink
{
    NSString *_action;
}

- (void).cxx_destruct;
- (void)handleDeepLinkWithRootVC:(id)arg1;
- (_Bool)isStellaActionURL:(id)arg1;
- (void)logDeepLinkEvent;
- (_Bool)parseURL:(id)arg1 context:(id)arg2;
- (long long)standardAppSwitcherAllowedBehaviour;

@end

