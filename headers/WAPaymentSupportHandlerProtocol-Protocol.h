//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, NSURL, UIImage, UIViewController, WAModalNavigationController, WAPaymentBaseTransaction;

@protocol WAPaymentSupportHandlerProtocol
- (void)attemptOutgoingCellularVoiceCallWithPhoneURL:(NSURL *)arg1 fromViewController:(UIViewController *)arg2;
- (void)openEmailComposerForEmailAddress:(NSString *)arg1 fromViewController:(UIViewController *)arg2;
- (void)presentContactUsFlowWithContext:(NSString *)arg1 inFAQFlow:(_Bool)arg2 transaction:(WAPaymentBaseTransaction *)arg3 imageToAttach:(UIImage *)arg4 supportPhoneNumber:(NSString *)arg5 disableScreenshotAttachment:(_Bool)arg6 completion:(void (^)(void))arg7;
- (void)pushContactUsFlowWithContext:(NSString *)arg1 navigationController:(WAModalNavigationController *)arg2 inFAQFlow:(_Bool)arg3 presentingController:(UIViewController *)arg4 transaction:(WAPaymentBaseTransaction *)arg5 imageToAttach:(UIImage *)arg6 supportPhoneNumber:(NSString *)arg7 disableScreenshotAttachment:(_Bool)arg8 supportTitleString:(NSString *)arg9 supportBodyString:(NSString *)arg10 supportExternalFields:(NSDictionary *)arg11 completion:(void (^)(void))arg12;
- (UIViewController *)rootPresentingViewController;
- (void)showContactUsFlowWithContext:(NSString *)arg1;
- (UIImage *)takeScreenShot;
@end

