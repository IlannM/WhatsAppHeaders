//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSString, WAChatStorage;

@interface WANotificationHandler : NSObject <UNUserNotificationCenterDelegate>
{
    WAChatStorage *_chatStorage;
}

+ (unsigned long long)getNotificationTypeFromUserInfo:(id)arg1;
+ (id)handlerWithChatStorage:(id)arg1;
- (void).cxx_destruct;
- (void)acceptCallWithCallID:(id)arg1;
- (void)declineCallWithCallID:(id)arg1;
- (void)handleActionWithIdentifier:(id)arg1 associatedChatJID:(id)arg2 messageText:(id)arg3 userInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)incomingCallNotificationCategoriesWithActionsEnabled:(_Bool)arg1 categoryOptions:(unsigned long long)arg2;
- (id)incomingPendingCallNotificationCategoriesWithActionsEnabled:(_Bool)arg1 categoryOptions:(unsigned long long)arg2;
- (id)initWithChatStorage:(id)arg1;
- (id)missedCallNotificationCategoriesWithCategoryOptions:(unsigned long long)arg1;
- (id)notificationActionsForIncomingPendingWithActionsEnabled:(_Bool)arg1 joinable:(_Bool)arg2;
- (id)notificationActionsForIncomingWithActionsEnabled:(_Bool)arg1 joinable:(_Bool)arg2;
- (id)notificationActionsForMissedCallForGroupCall:(_Bool)arg1;
- (void)notifyReplyFailedForJID:(id)arg1 toMessageWithID:(id)arg2 contactName:(id)arg3 messageText:(id)arg4;
- (void)openMessageForMediaReuploadNotificationWithUserInfo:(id)arg1;
- (void)registerUserNotificationSettingsWithActions:(unsigned long long)arg1;
- (void)replyWithMessage:(id)arg1 toChatJID:(id)arg2 toMessageWithUniqueKey:(id)arg3 markAsRead:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)shouldRespectImportant;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

