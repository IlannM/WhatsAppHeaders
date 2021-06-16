//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WANavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface WAStellaAuthorizationFlowViewController : WANavigationController <UINavigationControllerDelegate>
{
}

+ (void)presentFromViewController:(id)arg1 withDeepLink:(id)arg2;
- (void)dismissAuthFlow;
- (id)initWithRootViewController:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

