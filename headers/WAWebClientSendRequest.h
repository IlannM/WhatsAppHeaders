//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAPersistentRequest.h>

@class NSString, XMPPIQStanza;

@interface WAWebClientSendRequest : WAPersistentRequest
{
    NSString *_requestDescription;
    NSString *_webRef;
    XMPPIQStanza *_iq;
}

+ (id)identifierPrefix;
+ (id)internalRawPrefix;
+ (id)newRandomIdentifier;
- (void).cxx_destruct;
- (_Bool)canBegin;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescription:(id)arg1 webRef:(id)arg2 iq:(id)arg3;
- (double)internalDelayBeforeRetry;
@property(readonly, nonatomic) XMPPIQStanza *iq; // @synthesize iq=_iq;
@property(readonly, nonatomic) NSString *requestDescription; // @synthesize requestDescription=_requestDescription;
@property(readonly, nonatomic) NSString *webRef; // @synthesize webRef=_webRef;

@end

