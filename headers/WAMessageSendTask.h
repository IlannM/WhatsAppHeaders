//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WAMessage, WAMessageID;

@interface WAMessageSendTask : NSObject
{
    WAMessage *_message;
    WAMessageID *_messageID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool complete;
- (id)initWithMessage:(id)arg1;
@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) WAMessageID *messageID; // @synthesize messageID=_messageID;

@end
