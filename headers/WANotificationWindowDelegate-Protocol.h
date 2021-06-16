//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WAMessage, WANotification, WANotificationWindow;

@protocol WANotificationWindowDelegate <NSObject>
- (_Bool)isChatVisibleDuringNotificationWithWindow:(WANotificationWindow *)arg1;
- (void)messageNotificationWindowTapped:(WANotificationWindow *)arg1;
- (void)notificationWindow:(WANotificationWindow *)arg1 didSelectBasicNotification:(WANotification *)arg2;
- (void)notificationWindow:(WANotificationWindow *)arg1 didSelectPaymentNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)notificationWindow:(WANotificationWindow *)arg1 openChatWithMessage:(WAMessage *)arg2 inputText:(NSString *)arg3;
- (void)notificationWindow:(WANotificationWindow *)arg1 userDidSubmitText:(NSString *)arg2;
- (void)notificationWindowDidCancel:(WANotificationWindow *)arg1;
- (void)statusErrorNotificationWindowTapped:(WANotificationWindow *)arg1;
@end
