//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WASignalManager.h>

#import "WAUpgradeCallback-Protocol.h"

@class NSString;

@interface WASignalManager (Location) <WAUpgradeCallback>
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
- (void)MAIN_APP_performAfterInit;
- (void)constructSenderKeyDistributionMessageDataWithFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)decryptLocation:(id)arg1 participantDeviceJID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)decryptLocationKeyDistributionMessage:(id)arg1 senderDeviceJID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)decryptLocationRequest:(id)arg1 deviceJID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)decryptMessageWithRequest:(id)arg1 forSignalAddress:(id)arg2 plaintextMessage:(out id *)arg3 error:(out id *)arg4;
- (void)encryptLocation:(id)arg1 deviceJID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeviceJIDNeedingSenderKeysForLocation:(CDUnknownBlockType)arg1;
- (void)fetchDevicesHavingSenderKeysForLocation:(CDUnknownBlockType)arg1;
- (void)handleDigestRequestNotification:(id)arg1;
- (void)handleIdentityChange:(id)arg1 notification:(id)arg2;
- (void)handleLocationEncryptionError:(id)arg1;
- (void)handlePrekeyUploadRequest:(id)arg1 notification:(id)arg2;
- (void)invalidateLocationSenderKey;
- (id)locationGroupJID;
- (void)markSenderKeySentForAllLocationParticipantsIf:(CDUnknownBlockType)arg1;
- (void)markSenderKeySentForLocationParticipantDevice:(id)arg1 if:(CDUnknownBlockType)arg2;
- (void)processIncomingEncryptionNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
