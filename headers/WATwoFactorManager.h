//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults, WAKeychainWrapper, WATwoFactorFileValues, XMPPConnectionMain;
@protocol WATwoFactorManagerDependencyProvider;

@interface WATwoFactorManager : NSObject
{
    id <WATwoFactorManagerDependencyProvider> _dependencyProvider;
    WAKeychainWrapper *_keychain;
    NSUserDefaults *_userDefaults;
    XMPPConnectionMain *_xmppConnection;
    NSString *_code;
    WATwoFactorFileValues *_values;
    _Bool _backgroundCleanupIsCancelled;
}

+ (id)defaultDependencyProvider;
- (void).cxx_destruct;
@property _Bool backgroundCleanupIsCancelled; // @synthesize backgroundCleanupIsCancelled=_backgroundCleanupIsCancelled;
- (void)checkTwoFactorStatusWithServer;
- (void)cleanupOldKeychainCodesInBackground;
- (void)clearTwoFactorForAccountReset;
- (id)initWithAccountProvider:(id)arg1 dependencyProvider:(id)arg2 keychain:(id)arg3 userDefaults:(id)arg4 xmppConnection:(id)arg5;
- (void)internalSyncTwoFactorSettingsToServer;
@property(readonly, nonatomic) _Bool is2FAEnabled;
@property(readonly, nonatomic) _Bool isRecoveryEmailSet;
@property(readonly, nonatomic) _Bool needsVerification;
- (void)removeTwoFactorAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetTwoFactorAuthentication;
- (void)saveClearedValuesAfterMutatingWithBlock:(CDUnknownBlockType)arg1 shouldNotify:(_Bool)arg2;
- (void)saveCurrentValuesShouldNotify:(_Bool)arg1;
- (void)setOrUpdateTwoFactorAuthenticationCode:(id)arg1 email:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setRegistrationTwoFactorAuthenticationCode:(id)arg1;
- (_Bool)updateFileAndKeychainValueForMigration;
- (_Bool)verifyTwoFactorAuthenticationCode:(id)arg1;
- (void)xmppConnectionStateDidChange:(id)arg1;

@end
