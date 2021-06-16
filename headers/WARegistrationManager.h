//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WACellProvider, WAChangeNumberSource, WADomainFrontingProviderStore, WAKeychainWrapper, WAPhoneNumber, WARegistrationManagerDependencyProvider, WARegistrationToken, WAUserSessionPreferences, XMPPConnectionMain;
@protocol WADeviceDate;

@interface WARegistrationManager : NSObject
{
    WARegistrationManagerDependencyProvider *_provider;
    XMPPConnectionMain *_xmppConnection;
    WAKeychainWrapper *_keychainWrapper;
    WACellProvider *_cellProvider;
    WADomainFrontingProviderStore *_domainFrontingProviderStore;
    WAUserSessionPreferences *_userSessionPreferences;
    _Bool _registrationTokenUpdateInProgress;
    NSDate *_registrationTokenKeychainCreationDate;
    NSDate *_registrationTokenKeychainModificationDate;
    _Bool _didReachRegistrationDomain;
    NSDate<WADeviceDate> *_lastRegistrationDomainProbeTime;
}

- (void).cxx_destruct;
- (id)absoluteURLStringForPreparedURL:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)beginDomainFrontingRequest:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginFetchWithPreparedURL:(id)arg1 waHostIfProxying:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) WAChangeNumberSource *changeNumberSource;
- (void)cleanResultsWithCurrentIdentifier:(id)arg1 withServiceDescriptor:(id)arg2 lastValidCreationDate:(id)arg3;
- (void)cleanupRegistrationTokensForCurrentAccount:(id)arg1;
- (void)clearChangeNumberSource:(_Bool)arg1;
- (void)dealloc;
- (id)descriptorForAccount:(id)arg1 withIdentifier:(id)arg2 withServiceIdentifier:(id)arg3 withICloudAndEncryptedBackupsEnabled:(_Bool)arg4;
- (void)handleUpdateRegistrationTokenResponseWithToken:(id)arg1 account:(id)arg2 errors:(id)arg3;
- (id)initWithCellProvider:(id)arg1 xmppConnection:(id)arg2 userSessionPreferences:(id)arg3 keychainWrapper:(id)arg4 provider:(id)arg5;
- (id)initWithCellProvider:(id)arg1 xmppConnection:(id)arg2 userSessionPreferences:(id)arg3 signalManager:(id)arg4;
- (_Bool)isRegistrationTokenValid:(id)arg1;
- (id)offlineABExposures;
- (void)performOnConnect;
- (void)performSameDeviceCheckForSession:(id)arg1 updateRegistrationTokenIfNeccessary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)prepareForRegistrationSessionWithAccount:(id)arg1;
- (id)privateRegistrationToken;
- (void)probeDomainFrontingProvidersIfNecessary;
- (void)processCertResponseJSONResponse:(id)arg1 isChangeNumber:(_Bool)arg2;
- (void)processRegistrationJSONResponse:(id)arg1 isChangeNumber:(_Bool)arg2;
- (void)processVerificationServerResponse:(id)arg1 error:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)reallyUpdateServerRegistrationTokenIfNecessaryForDeviceJID:(id)arg1;
- (void)registerWithVerificationCode:(id)arg1 entryMethod:(int)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) WARegistrationToken *registrationToken;
- (id)registrationTokenForUpdatingServerForAccount:(id)arg1;
- (void)removePrivateRegistrationToken;
- (void)removeRegistrationTokenForAccount:(id)arg1;
- (void)removeRegistrationTokenForDeviceJID:(id)arg1;
- (void)removeSharedRegistrationTokenForAccount:(id)arg1;
- (void)removeV0KeychainRegistrationToken;
- (void)removeV0RegistrationTokenFile;
- (void)requestVerificationCodeUsingMethod:(id)arg1 session:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)resetTwoFactorAuthenticationViaEmailForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveChangeNumberSourceWithJIDsToNotify:(id)arg1;
- (id)sessionWithPhoneNumber:(id)arg1;
- (void)setOfflineABExposures:(id)arg1;
@property(retain, nonatomic) WAPhoneNumber *verificationCodePhoneNumber;
- (id)sharedBackupAndRecoveryTokenDescriptorForAccount:(id)arg1;
- (id)sharedBackupTokenDescriptorForAccount:(id)arg1;
- (id)sharedRegistrationTokenForAccount:(id)arg1 canUpdateAccessibilityControl:(_Bool)arg2;
- (void)updateServerRegistrationTokenIfNecessaryForDeviceJID:(id)arg1;
- (id)urlBuilderForPhoneNumber:(id)arg1;
- (_Bool)useDualToSDuringRegistration;
- (id)v0KeychainRegistrationToken;
- (id)v0KeychainRegistrationTokenDescriptor;
- (void)verifyTwoFactorAuthenticationCode:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)wipeForTwoFactorAuthenticationForSession:(id)arg1 wipeToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)writePrivateRegistrationToken:(id)arg1;
- (_Bool)writeSharedRegistrationToken:(id)arg1 account:(id)arg2;

@end

