//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStopLocationSharingRequest-Protocol.h"

@class NSDate, NSString, WAChatJID;
@protocol WAServerDate;

@interface WAUnmanagedStopLocationSharingRequest : NSObject <WAStopLocationSharingRequest>
{
    WAChatJID *_chatJID;
    NSDate<WAServerDate> *_retryEndDate;
    NSString *_requestID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
- (id)initWithCoreDataObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) NSDate<WAServerDate> *retryEndDate; // @synthesize retryEndDate=_retryEndDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
