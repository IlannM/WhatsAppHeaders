//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADeepLink.h"

@interface WADeepLinkWithStandardAppSwitcher : WADeepLink
{
    WADeepLink *_deepLink;
}

- (void).cxx_destruct;
- (id)allowedStates;
- (_Bool)appSwitcherAllowedForState:(unsigned long long)arg1;
- (id)appSwitcherAllowedStates;
- (id)appSwitcherHeaderText;
- (id)appSwitcherSecondaryHeaderText;
- (_Bool)consumerAppCanOpenURL;
- (void)deepLinkAppSwitcherResponse:(long long)arg1;
- (void)handleByInternalDeepLink;
- (id)initWithURL:(id)arg1 context:(id)arg2 deepLink:(id)arg3;
- (void)logDeepLinkEvent;
- (void)openAppSwitcherWithRootVC:(id)arg1 openLinkText:(id)arg2;
- (id)openLinkButtonText;
- (void)openURLDeferredWithRootVC:(id)arg1 showAppSwitcher:(_Bool)arg2;
- (_Bool)parseURL:(id)arg1 context:(id)arg2;
- (_Bool)smbAppCanOpenURL;
- (id)urlForAppScheme:(id)arg1;

@end

