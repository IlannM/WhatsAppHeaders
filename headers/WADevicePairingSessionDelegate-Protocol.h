//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WADeviceList, WADevicePairingSession, WAEC25519PublicKey, WAPBADVKeyIndexList, WAXOutgoingStanzaElementMdPrimarySetRequest_PairDevice_DeviceIdentity, WAXOutgoingStanzaElementMdPrimarySetRequest_PairDevice_KeyIndexList;

@protocol WADevicePairingSessionDelegate <NSObject>
- (void)devicePairingSession:(WADevicePairingSession *)arg1 didRequestPairDeviceWithRef:(NSString *)arg2 authKey:(WAEC25519PublicKey *)arg3 identityKey:(WAEC25519PublicKey *)arg4 deviceIdentity:(WAXOutgoingStanzaElementMdPrimarySetRequest_PairDevice_DeviceIdentity *)arg5 keyIndexList:(WAXOutgoingStanzaElementMdPrimarySetRequest_PairDevice_KeyIndexList *)arg6 completion:(void (^)(WADeviceJID *, NSData *, unsigned long long, NSError *))arg7;
- (void)devicePairingSession:(WADevicePairingSession *)arg1 didRequestRemoveAllCompanionDevicesWithCompletion:(void (^)(_Bool))arg2;
- (_Bool)devicePairingSession:(WADevicePairingSession *)arg1 didRequestStoreCompanionDevices:(NSArray *)arg2 withUpdatedKeyIndexList:(WAPBADVKeyIndexList *)arg3;
- (void)devicePairingSessionDidComplete:(WADevicePairingSession *)arg1;
- (WADeviceList *)devicePairingSessionDidRequestCurrentDeviceList:(WADevicePairingSession *)arg1;
- (WAPBADVKeyIndexList *)devicePairingSessionDidRequestNextKeyListForNewDevice:(WADevicePairingSession *)arg1 retryTimestamp:(unsigned long long)arg2 error:(id *)arg3;
@end

