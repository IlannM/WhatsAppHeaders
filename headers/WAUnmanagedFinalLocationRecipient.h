//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAFinalLocationRecipient-Protocol.h"

@class NSDate, NSString, WAChatJID, WAUserJID;

@interface WAUnmanagedFinalLocationRecipient : NSObject <WAFinalLocationRecipient>
{
    WAUserJID *_userJID;
    WAChatJID *_typesafeChatJID;
    NSString *_messageID;
    NSDate *_expiration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
- (id)initWithCoreDataObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(readonly, nonatomic) WAChatJID *typesafeChatJID; // @synthesize typesafeChatJID=_typesafeChatJID;
@property(readonly, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

