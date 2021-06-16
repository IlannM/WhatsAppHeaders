//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAStorageManagedObject.h>

#import "WALocationRecipient-Protocol.h"
#import "WAUnmangedCopyable-Protocol.h"

@class NSString, WAChatJID, WAUserJID;

@interface WALocationRecipient : WAStorageManagedObject <WALocationRecipient, WAUnmangedCopyable>
{
}

+ (id)fetchRequest;
@property(retain, nonatomic) WAChatJID *typesafeChatJID;
@property(retain, nonatomic) WAUserJID *userJID;
- (id)unmanagedCopy;

// Remaining properties
@property(copy, nonatomic) NSString *chatJID; // @dynamic chatJID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *jid; // @dynamic jid;
@property(readonly) Class superclass;

@end

