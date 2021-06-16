//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAModalNavigationController.h>

#import "WADeleteAccountPhoneConfirmationViewControllerDelegate-Protocol.h"
#import "WADeleteConfirmationControllerDelegate-Protocol.h"
#import "WAFeedbackInputControllerDelegate-Protocol.h"

@class NSString;
@protocol UINavigationControllerDelegate><WADeleteAccountControllerDelegate;

@interface WADeleteAccountController : WAModalNavigationController <WADeleteAccountPhoneConfirmationViewControllerDelegate, WAFeedbackInputControllerDelegate, WADeleteConfirmationControllerDelegate>
{
    _Bool _didWarnAboutBackupDeletion;
}

- (void)deleteAccountPhoneConfirmationViewControllerDidTapChangeNumberInsteadButton:(id)arg1;
- (void)deleteConfirmationControllerDidCancel:(id)arg1;
- (void)deleteConfirmationControllerDidFinish:(id)arg1;
@property(readonly, nonatomic) _Bool didWarnAboutBackupDeletion; // @synthesize didWarnAboutBackupDeletion=_didWarnAboutBackupDeletion;
- (void)feedbackInputController:(id)arg1 didFinishWithFeedbackText:(id)arg2;
- (void)feedbackInputControllerDidCancel:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)phoneConfirmationControllerDidCancel:(id)arg1;
- (void)phoneConfirmationControllerDidFinish:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UINavigationControllerDelegate><WADeleteAccountControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
