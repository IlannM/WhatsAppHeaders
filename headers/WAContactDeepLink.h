//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADeepLink.h"

@class NSString;

@interface WAContactDeepLink : WADeepLink
{
    NSString *_contactCode;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *contactCode; // @synthesize contactCode=_contactCode;
- (void)logDeepLinkEvent;
- (void)logDeepLinkEventWithDetails:(id)arg1;
- (void)openURLDeferredWithRootVC:(id)arg1 showAppSwitcher:(_Bool)arg2;
- (_Bool)parseURL:(id)arg1 context:(id)arg2;
- (id)urlForAppScheme:(id)arg1;

@end

