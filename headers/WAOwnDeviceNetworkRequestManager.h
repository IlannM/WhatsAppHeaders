//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAOwnDeviceNetworkRequestManager : NSObject
{
}

- (void)requestPairDeviceWithRef:(id)arg1 authKey:(id)arg2 deviceIdentity:(id)arg3 keyIndexList:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestRemoveAllCompanionDevices:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestRemoveAllCompanionDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestRemoveCompanionWithJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUpdateKeyIndexListWithTS:(unsigned long long)arg1 keyIndexListData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendDeleteRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

