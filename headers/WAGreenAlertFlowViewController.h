//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WANavigationController.h>

@class MISSING_TYPE;

@interface WAGreenAlertFlowViewController : WANavigationController
{
    MISSING_TYPE *stateObserver;
    MISSING_TYPE *navigationDelegate;
    MISSING_TYPE *shouldAllowDismissal;
    MISSING_TYPE *variant;
    MISSING_TYPE *footerVersion;
    MISSING_TYPE *completionHandler;
    MISSING_TYPE *logger;
    MISSING_TYPE *currentState;
    MISSING_TYPE *$__lazy_storage_$_closeButton;
}

- (void).cxx_destruct;
- (_Bool)accessibilityPerformEscape;
- (void)closeButtonTapped;
- (id)init;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithVariant:(long long)arg1 footerVersion:(long long)arg2 shouldAllowDismissal:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end

