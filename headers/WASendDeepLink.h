//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADeepLink.h"

@class NSData, NSString, WAChatJID;

@interface WASendDeepLink : WADeepLink
{
    NSString *_ctwaContext;
    NSString *_iceBreaker;
    NSString *_sourceURL;
    NSString *_contactIDStr;
    NSString *_textToShare;
    NSString *_numberToContact;
    NSString *_deepLinkSource;
    NSData *_deepLinkData;
    WAChatJID *_chatJID;
    NSString *_jid;
    NSString *_entryPointSource;
    NSString *_app;
}

- (void).cxx_destruct;
- (id)appSwitcherHeaderText;
- (id)appSwitcherSecondaryHeaderText;
- (_Bool)isURLSafeForCTWA:(id)arg1;
- (void)logDeepLinkEvent;
- (id)openLinkButtonText;
- (void)openSendURLWithRootVC:(id)arg1;
- (void)openURLDeferredWithRootVC:(id)arg1 showAppSwitcher:(_Bool)arg2;
- (_Bool)parseURL:(id)arg1 context:(id)arg2;
- (id)urlForAppScheme:(id)arg1;

@end

