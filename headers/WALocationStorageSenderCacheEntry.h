//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;
@protocol WAServerDate;

@interface WALocationStorageSenderCacheEntry : NSObject
{
    NSArray *_senders;
    NSDate<WAServerDate> *_expiration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate<WAServerDate> *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSArray *senders; // @synthesize senders=_senders;

@end
