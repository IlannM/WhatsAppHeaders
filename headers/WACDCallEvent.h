//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAStorageManagedObject.h>

@class NSDate, NSString;
@protocol WAServerDate;

@interface WACDCallEvent : WAStorageManagedObject
{
}


// Remaining properties
@property(nonatomic) long long bytesReceived; // @dynamic bytesReceived;
@property(nonatomic) long long bytesSent; // @dynamic bytesSent;
@property(copy, nonatomic) NSDate<WAServerDate> *date; // @dynamic date;
@property(nonatomic) double duration; // @dynamic duration;
@property(copy, nonatomic) NSString *groupJIDString; // @dynamic groupJIDString;
@property(nonatomic) short outcome; // @dynamic outcome;
@end

