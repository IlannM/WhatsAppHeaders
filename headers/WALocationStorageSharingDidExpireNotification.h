//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WABaseNotification.h>

@class WAChatJID;

@interface WALocationStorageSharingDidExpireNotification : WABaseNotification
{
    WAChatJID *_chatJID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;

@end

