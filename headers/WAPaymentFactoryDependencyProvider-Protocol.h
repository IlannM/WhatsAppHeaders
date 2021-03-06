//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, NSURL, UIViewController, WAPaymentBaseAccount, WAPaymentBaseHandler;
@protocol WAPaymentAccountDetailsHandlerDelegate, WAPaymentBaseHandlerDelegate, WAPaymentFlowViewControllerType, WAPaymentRootHandlerDelegate;

@protocol WAPaymentFactoryDependencyProvider <NSObject>
- (void)fullyResetPaymentsStateAndResetTOS:(_Bool)arg1 resetWAPIN:(_Bool)arg2;
- (_Bool)hasMerchantAccount;
- (WAPaymentBaseHandler *)newAccountDetailsHandlerForAccount:(WAPaymentBaseAccount *)arg1 rootViewController:(UIViewController<WAPaymentFlowViewControllerType> *)arg2 delegate:(id <WAPaymentAccountDetailsHandlerDelegate>)arg3 rootHandlerDelegate:(id <WAPaymentRootHandlerDelegate>)arg4;
- (WAPaymentBaseHandler *)newMerchantAccountSetupHandlerWithRootViewController:(UIViewController<WAPaymentFlowViewControllerType> *)arg1 delegate:(id <WAPaymentBaseHandlerDelegate>)arg2 rootHandlerDelegate:(id <WAPaymentRootHandlerDelegate>)arg3;
- (WAPaymentBaseHandler *)newPayHubHandlerWithRootViewController:(UIViewController<WAPaymentFlowViewControllerType> *)arg1 delegate:(id <WAPaymentBaseHandlerDelegate>)arg2 rootHandlerDelegate:(id <WAPaymentRootHandlerDelegate>)arg3 andFlowId:(NSString *)arg4 deepLinkURL:(NSURL *)arg5;
- (NSObject *)newTransactionHandlerCustomizer;
@end

