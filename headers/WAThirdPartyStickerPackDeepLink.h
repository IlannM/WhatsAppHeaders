//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADeepLink.h"

@class NSData, NSDictionary, NSString;

@interface WAThirdPartyStickerPackDeepLink : WADeepLink
{
    NSString *_sourceBundleID;
    NSDictionary *_json;
    NSData *_data;
}

- (void).cxx_destruct;
- (void)deepLinkAppSwitcherResponse:(long long)arg1;
- (void)handleDeepLinkWithRootVC:(id)arg1;
- (void)logDeepLinkEvent;
- (void)openURLDeferredWithRootVC:(id)arg1 showAppSwitcher:(_Bool)arg2;
- (_Bool)parseURL:(id)arg1 context:(id)arg2;
- (void)showThirdPartyError:(id)arg1 rootVC:(id)arg2;
- (long long)standardAppSwitcherAllowedBehaviour;
- (id)urlForAppScheme:(id)arg1;

@end

