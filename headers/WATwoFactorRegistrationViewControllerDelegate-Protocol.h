//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WARegistrationCompletionDelegate-Protocol.h"

@class WATwoFactorRegistrationViewController;

@protocol WATwoFactorRegistrationViewControllerDelegate <WARegistrationCompletionDelegate>
- (void)registrationViewControllerVerificationDidCancel:(WATwoFactorRegistrationViewController *)arg1;
- (void)registrationViewControllerVerificationDidFail:(WATwoFactorRegistrationViewController *)arg1;
@end

