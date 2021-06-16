//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAAddCompanionReference-Protocol.h"
#import "WADevicePairingSessionDelegate-Protocol.h"

@class NSData, NSError, NSString, UIViewController, WACompanionDevice, WACompanionQRCode, WADeviceJID, WADeviceJIDVersion, WADeviceList, WAEC25519PublicKey, WAExactTimer, WAPBADVDeviceIdentitySignaturePair, WAPBADVKeyIndexList, WAPBADVKeyIndexListSignaturePair, WAPendingCompanionDevice, WAUserJID, WAUserSessionPreferences, XMPPDeviceList;
@protocol WAAppStateSyncDeletionHandling, WADateProvider, WADevicePairingSessionDelegate, WAOwnDeviceManagerDeviceListDelegateAdding, WAOwnDeviceSigning;

@interface WADevicePairingSession : NSObject <WADevicePairingSessionDelegate, WAAddCompanionReference>
{
    NSString *_refForRequest;
    WAEC25519PublicKey *_authKeyForRequest;
    WAEC25519PublicKey *_devicePublicKeyForSigning;
    NSData *_deviceSecretKeyForSigning;
    WAPBADVKeyIndexList *_nextList;
    WADeviceList *_currentDeviceList;
    WAPBADVKeyIndexListSignaturePair *_signedKeyIndexListPair;
    WAPBADVDeviceIdentitySignaturePair *_signedDeviceIdentityPair;
    WAPendingCompanionDevice *_pendingDevice;
    WADeviceJID *_deviceJID;
    NSData *_companionProps;
    NSError *_completionError;
    NSString *_deviceLocationCity;
    NSString *_deviceLocationRegion;
    unsigned long long _retryTimestamp;
    XMPPDeviceList *_pendingDeviceList;
    _Bool _addConfirmed;
    WADeviceJIDVersion *_deviceJIDVersion;
    WACompanionDevice *_companionDevice;
    long long _currentState;
    WACompanionQRCode *_code;
    _Bool _isRetry;
    WAUserJID *_accountUserJID;
    id <WAOwnDeviceManagerDeviceListDelegateAdding> _deviceListDelegate;
    id <WAOwnDeviceSigning> _deviceSigning;
    id <WADevicePairingSessionDelegate> _sessionDelegate;
    id <WAAppStateSyncDeletionHandling> _appStateDeletionHandler;
    CDUnknownBlockType _stateCompletionHandler;
    WAUserSessionPreferences *_userPreferences;
    id <WADateProvider> _dateProvider;
    UIViewController *_fromVC;
    CDUnknownBlockType _completion;
    WADevicePairingSession *_retrySession;
    WAExactTimer *_addTimeoutTimer;
    double _startTimestamp;
}

+ (id)fieldStatsEventSessionID:(id)arg1;
+ (void)submitLinkDeviceFieldStatsEventWithQRCode:(id)arg1 startTimestamp:(double)arg2 stage:(long long)arg3 errorCode:(long long)arg4;
- (void).cxx_destruct;
- (void)addNotificationDidTimeOut;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)cancel;
- (void)completePairing;
- (void)createPendingDevice;
- (void)dealloc;
- (void)devicePairingSession:(id)arg1 didRequestPairDeviceWithRef:(id)arg2 authKey:(id)arg3 identityKey:(id)arg4 deviceIdentity:(id)arg5 keyIndexList:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)devicePairingSession:(id)arg1 didRequestRemoveAllCompanionDevicesWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)devicePairingSession:(id)arg1 didRequestStoreCompanionDevices:(id)arg2 withUpdatedKeyIndexList:(id)arg3;
- (void)devicePairingSessionDidComplete:(id)arg1;
- (id)devicePairingSessionDidRequestCurrentDeviceList:(id)arg1;
- (id)devicePairingSessionDidRequestNextKeyListForNewDevice:(id)arg1 retryTimestamp:(unsigned long long)arg2 error:(id *)arg3;
- (void)didReceiveOwnAccountSyncWithDeviceList:(id)arg1;
- (void)disableAppStateSyncIfNecessary;
- (void)handleLocationResponseWithLocation:(id)arg1 placemark:(id)arg2;
- (void)handlePairDeviceComplete;
- (void)handlePairDeviceResponseWithDeviceJID:(id)arg1 companionProps:(id)arg2 retryTimestamp:(unsigned long long)arg3 serverError:(id)arg4;
- (id)initWithCode:(id)arg1 startTimestamp:(double)arg2 currentUserJID:(id)arg3 deviceListDelegate:(id)arg4 deviceSigning:(id)arg5 sessionDelegate:(id)arg6 appStateDeletionHandler:(id)arg7 userPreferences:(id)arg8 dateProvider:(id)arg9 fromViewController:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (id)initWithCode:(id)arg1 startTimestamp:(double)arg2 isRetry:(_Bool)arg3 pendingDeviceList:(id)arg4 currentUserJID:(id)arg5 deviceListDelegate:(id)arg6 deviceSigning:(id)arg7 sessionDelegate:(id)arg8 appStateDeletionHandler:(id)arg9 stateCompletionHandler:(CDUnknownBlockType)arg10 userPreferences:(id)arg11 dateProvider:(id)arg12 fromViewController:(id)arg13 completion:(CDUnknownBlockType)arg14;
@property(readonly, nonatomic) _Bool isFinished;
- (_Bool)isTerminalState;
- (void)loadCompanion;
- (void)loadDeviceVersion;
- (void)loadNextKeyIndexList;
- (void)reallyTransitionToNextStateForFailure;
- (void)reallyTransitionToNextStateForSuccess;
- (void)removeExistingDevicesIfNecessary;
- (void)requestPairDevice;
- (void)saveCompanion;
- (void)signADVData;
- (void)startPairing;
- (id)stateDescription;
- (void)transitionToNextStateForFailure;
- (void)transitionToNextStateForRetry;
- (void)transitionToNextStateForSuccess;
- (void)waitForAddNotification;
- (_Bool)willTransitionStateFromState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
