//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WADeviceJID, WADeviceListMDDeviceController;
@protocol WADeviceListDeviceMDMutableState;

@protocol WADeviceListMDDeviceControllerSubscriber <NSObject>
- (void)deviceListMDDeviceController:(WADeviceListMDDeviceController *)arg1 didUpdateToState:(id <WADeviceListDeviceMDMutableState>)arg2 fromState:(id <WADeviceListDeviceMDMutableState>)arg3 forDeviceJID:(WADeviceJID *)arg4;
- (void)deviceListMDDeviceControllerDidReload:(WADeviceListMDDeviceController *)arg1;
@end
