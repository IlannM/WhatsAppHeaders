//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAVerificationBaseController.h"

#import "WAPassInputViewControllerDelegate-Protocol.h"
#import "WARegistrationPhoneInputViewControllerDelegate-Protocol.h"
#import "WASMBMigrationConfirmationControllerDelegate-Protocol.h"
#import "WASMBMigrationProgressControllerDelegate-Protocol.h"
#import "WATwoFactorRegistrationViewControllerDelegate-Protocol.h"
#import "WAWelcomeViewControllerDelegate-Protocol.h"

@class NSArray, NSString, WACompanionBootstrapLoading, WACompanionRegistration, WASMBMigrationManager, WAVerificationRegistrationControllerCompleteContext, WAVerificationRegistrationControllerPhoneNumberContext, WAVerificationRegistrationControllerPhoneNumberPrefillContext, WAVerificationRegistrationControllerTwoFactorContext, WAVerificationRegistrationControllerVerifyCodeContext;

@interface WAVerificationRegistrationController : WAVerificationBaseController <WAPassInputViewControllerDelegate, WARegistrationPhoneInputViewControllerDelegate, WASMBMigrationConfirmationControllerDelegate, WASMBMigrationProgressControllerDelegate, WATwoFactorRegistrationViewControllerDelegate, WAWelcomeViewControllerDelegate>
{
    unsigned long long _state;
    unsigned long long _notificationPermissionsState;
    NSArray *_companionQRCodes;
    WACompanionRegistration *_companionRegistration;
    WAVerificationRegistrationControllerCompleteContext *_completeContext;
    WAVerificationRegistrationControllerTwoFactorContext *_twoFactorContext;
    WAVerificationRegistrationControllerPhoneNumberContext *_phoneNumberContext;
    WAVerificationRegistrationControllerPhoneNumberPrefillContext *_phoneNumberPrefillContext;
    WAVerificationRegistrationControllerVerifyCodeContext *_verifyCodeContext;
    _Bool _shouldMigrateForSMB;
    WASMBMigrationManager *_smbMigrationManager;
    WACompanionBootstrapLoading *_companionBootstrapLoading;
}

- (void).cxx_destruct;
- (void)cancelChangeNumber;
@property(readonly, nonatomic) _Bool changingNumber;
@property(retain, nonatomic) WACompanionBootstrapLoading *companionBootstrapLoading; // @synthesize companionBootstrapLoading=_companionBootstrapLoading;
- (void)completeRegistrationWithDeviceJID:(id)arg1 session:(id)arg2 forceSMBMigration:(_Bool)arg3;
- (id)init;
@property(readonly, nonatomic, getter=isEligibleForMigration) _Bool eligibleForMigration;
- (void)migrationConfirmationController:(id)arg1 didFinishWithSession:(id)arg2 deviceJID:(id)arg3;
- (void)migrationConfirmationControllerDidDeclineMigration:(id)arg1;
- (void)migrationConfirmationControllerDidFail2FA:(id)arg1 session:(id)arg2 response:(id)arg3;
- (void)migrationConfirmationControllerDidProceedWithCodeRequst:(id)arg1 session:(id)arg2;
- (void)migrationConfirmationControllerDidReceiveUnknownError:(id)arg1;
- (void)migrationProgressController:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)moveToState:(unsigned long long)arg1;
- (id)passInputControllerWithSession:(id)arg1;
- (void)passInputViewController:(id)arg1 didFailTwoFacWithSession:(id)arg2 response:(id)arg3 acceptedVerificationCode:(id)arg4;
- (void)passInputViewControllerDidCancel:(id)arg1;
- (void)phoneInputViewController:(id)arg1 didEnterPhoneForSession:(id)arg2;
- (void)phoneInputViewControllerDidCancel:(id)arg1;
- (void)prefillWithPhoneNumber:(id)arg1;
- (void)presentViewControllersForState:(unsigned long long)arg1;
- (void)promptForTwoFacWithSession:(id)arg1 response:(id)arg2 forceSMBMigration:(_Bool)arg3 acceptedVerificationCode:(id)arg4;
- (void)registrationController:(id)arg1 didCompleteRegistrationWithDeviceJID:(id)arg2 session:(id)arg3;
- (void)registrationController:(id)arg1 didFailTwoFacWithSession:(id)arg2 response:(id)arg3;
- (void)registrationViewControllerVerificationDidCancel:(id)arg1;
- (void)registrationViewControllerVerificationDidFail:(id)arg1;
@property(readonly, nonatomic) WASMBMigrationManager *smbMigrationManager;
- (void)welcomeViewControllerDidAccept:(id)arg1;
- (_Bool)welcomeViewControllerShouldDualToS:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

