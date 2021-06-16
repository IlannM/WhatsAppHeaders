//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WAPBMessage;
@protocol WADeviceDate;

@interface XMPPLocationSharingParticipantInfo : NSObject
{
    NSDate<WADeviceDate> *_expiration;
    NSDate<WADeviceDate> *_lastUpdateDate;
    WAPBMessage *_message;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate<WADeviceDate> *expiration; // @synthesize expiration=_expiration;
- (id)initWithExpiration:(id)arg1 lastUpdateDate:(id)arg2 message:(id)arg3;
- (id)initWithExpirationString:(id)arg1 elapsedString:(id)arg2;
- (id)initWithStanza:(id)arg1;
@property(readonly, nonatomic) NSDate<WADeviceDate> *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly, nonatomic) WAPBMessage *message; // @synthesize message=_message;

@end
