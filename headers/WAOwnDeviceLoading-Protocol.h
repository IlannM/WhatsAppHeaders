//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, WACompanionDevice, WADeviceJID, WAOwnDeviceList;

@protocol WAOwnDeviceLoading <NSObject>
@property(readonly, nonatomic) unsigned long long companionCount;
- (WACompanionDevice *)companionDevice:(WADeviceJID *)arg1;
@property(readonly, nonatomic) NSSet *companionDeviceJIDs;
@property(readonly, nonatomic) WAOwnDeviceList *deviceList;
@end

