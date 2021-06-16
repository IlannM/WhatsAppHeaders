//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAWebClientUtils : NSObject
{
}

+ (void)authenticateUserWithCompletion:(CDUnknownBlockType)arg1 controller:(id)arg2;
+ (id)authenticationErrorAlertPresenter;
+ (_Bool)canContinueAuthenticationDespiteError:(id)arg1;
+ (_Bool)canSkipAuthenticationForError:(id)arg1;
+ (void)cancelWebClientLoggedInReminderLocalNotification;
+ (id)emojiWeights;
+ (id)loginWebInfoForWebSession:(id)arg1;
+ (void)mergeEmojiWeights:(id)arg1;
+ (id)noConnectionErrorAlertPresenter;
+ (void)presentWebClientLoggedInReminderBannerNotificationiOS9AndBelow;
+ (id)queue;
+ (void)scheduleWebClientLoggedInReminderLocalNotificationForDevice:(id)arg1;
+ (_Bool)shouldRetryForCount:(unsigned long long)arg1;
+ (void)showBiometricUseAlertFromController:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)showGeneralErrorAlertInViewController:(id)arg1 webClientSessionResult:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showNoConnectionErrorMessageInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)showSignInErrorMessageInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)supportedFeaturesForWebSession:(id)arg1;
+ (id)syncElementsForWebSession:(id)arg1 type:(id)arg2;

@end
