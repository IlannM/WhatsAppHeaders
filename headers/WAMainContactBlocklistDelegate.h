//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WACoreContactBlocklistDelegate.h>

@class WAUserSessionPreferences, XMPPConnectionMain;

@interface WAMainContactBlocklistDelegate : WACoreContactBlocklistDelegate
{
    WAUserSessionPreferences *_sessionPreferences;
    XMPPConnectionMain *_xmppConnection;
}

- (void).cxx_destruct;
- (_Bool)handleResponseConfirmingBlocklistV2UserJIDs:(id)arg1 dhash:(id)arg2 error:(id *)arg3;
- (id)initWithChatStorage:(id)arg1 sessionPreferences:(id)arg2 xmppConnection:(id)arg3;
- (void)refreshWithNetworkRequest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) WAUserSessionPreferences *sessionPreferences; // @synthesize sessionPreferences=_sessionPreferences;
- (void)setBlocklistV2WithAction:(long long)arg1 userJID:(id)arg2 bizOptOutInfo:(id)arg3 webRequestID:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) XMPPConnectionMain *xmppConnection; // @synthesize xmppConnection=_xmppConnection;

@end
