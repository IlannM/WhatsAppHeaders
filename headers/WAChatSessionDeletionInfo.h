//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WAChatSession;

@interface WAChatSessionDeletionInfo : NSObject
{
    _Bool _hadLastMessage;
    int _unreadCount;
    int _importantMessagesCount;
    WAChatSession *_chatSession;
    double _latestExpiryTimestamp;
}

- (void).cxx_destruct;

@end

