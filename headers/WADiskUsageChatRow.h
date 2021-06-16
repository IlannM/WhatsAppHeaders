//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString, WAChatJID;

@interface WADiskUsageChatRow : NSObject
{
    WAChatJID *_chatJID;
    NSString *_chatName;
    NSManagedObjectID *_chatID;
    unsigned long long _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSManagedObjectID *chatID; // @synthesize chatID=_chatID;
@property(readonly, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
@property(readonly, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithChatJID:(id)arg1 chatName:(id)arg2 chatID:(id)arg3 size:(unsigned long long)arg4;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;

@end

