//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface WAExtensionOutgoingMessageResult : NSObject
{
    NSArray *_outgoingMessages;
    NSDictionary *_resendInfo;
}

- (void).cxx_destruct;
- (id)initWithOutgoingMessages:(id)arg1 resendInfo:(id)arg2;
@property(readonly, nonatomic) NSArray *outgoingMessages; // @synthesize outgoingMessages=_outgoingMessages;
@property(readonly, nonatomic) NSDictionary *resendInfo; // @synthesize resendInfo=_resendInfo;

@end

