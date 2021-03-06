//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WALocationSender-Protocol.h"

@class NSData, NSDate, NSNumber, NSString, WAChatJID, WAUserJID;
@protocol WAServerDate;

@interface WAUnmanagedLocationSender : NSObject <WALocationSender>
{
    NSDate<WAServerDate> *_endDate;
    WAUserJID *_senderJID;
    WAChatJID *_chatJID;
    NSDate<WAServerDate> *_timestamp;
    NSData *_locationMessage;
    NSString *_messageUniqueKey;
    NSNumber *_sequenceNumber;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDate<WAServerDate> *endDate; // @synthesize endDate=_endDate;
- (id)initWithCoreDataObject:(id)arg1;
@property(readonly, copy, nonatomic) NSData *locationMessage; // @synthesize locationMessage=_locationMessage;
@property(readonly, copy, nonatomic) NSString *messageUniqueKey; // @synthesize messageUniqueKey=_messageUniqueKey;
@property(readonly, nonatomic) WAUserJID *senderJID; // @synthesize senderJID=_senderJID;
@property(readonly, copy, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, copy, nonatomic) NSDate<WAServerDate> *timestamp; // @synthesize timestamp=_timestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

