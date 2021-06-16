//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WARootViewController;

@protocol WARootViewControllerDelegate <NSObject>
- (_Bool)isApplicationBecomingActiveForRootViewController:(WARootViewController *)arg1;
- (void)rootViewControllerDidChangeState:(WARootViewController *)arg1;
- (void)rootViewControllerDidLoadChatStore:(WARootViewController *)arg1;
- (void)rootViewControllerDidRequestMaximizeCallScreen:(WARootViewController *)arg1;
- (void)rootViewControllerDidRequestMinimizeCallScreen:(WARootViewController *)arg1;
- (void)rootViewControllerDidRequestReconfigureUserNotificationSettingsForTOS:(WARootViewController *)arg1;
@end
