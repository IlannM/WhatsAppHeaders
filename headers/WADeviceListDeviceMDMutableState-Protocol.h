//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate;
@protocol WAServerDate;

@protocol WADeviceListDeviceMDMutableState <NSObject>
@property(readonly, nonatomic) _Bool isActiveNow;
@property(readonly, nonatomic) _Bool isRemoved;
@property(readonly, nonatomic) NSDate<WAServerDate> *lastSeenDate;
@property(readonly, nonatomic) long long syncState;
@end

