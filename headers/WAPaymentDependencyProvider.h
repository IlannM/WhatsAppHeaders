//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAPaymentDependencyProviderProtocol-Protocol.h"

@class MISSING_TYPE;
@protocol WAPaymentBlockedContactsList, WAPaymentChatTransactionHandler, WAPaymentFactoryDependencyProvider, WAPaymentNotificationsHandler, WAPaymentServerPropsHandler, WAPaymentSettingsServiceSectionProvider, WAPaymentSupportHandlerProtocol, WAPaymentSyncHandler, WAPaymentSystemEventsHandler;

@interface WAPaymentDependencyProvider : NSObject <WAPaymentDependencyProviderProtocol>
{
    MISSING_TYPE *blockedContactsList;
    MISSING_TYPE *chatTransactionHandler;
    MISSING_TYPE *notificationsHandler;
    MISSING_TYPE *serverPropsHandler;
    MISSING_TYPE *supportHandler;
    MISSING_TYPE *syncHandler;
    MISSING_TYPE *systemEventsHandler;
}

- (void).cxx_destruct;
- (id)beginDisablingApplicationIdleTimer;
@property(nonatomic, readonly) id <WAPaymentBlockedContactsList> blockedContactsList; // @synthesize blockedContactsList;
@property(nonatomic, readonly) id <WAPaymentChatTransactionHandler> chatTransactionHandler; // @synthesize chatTransactionHandler;
- (id)createDYIDocumentShareSheetForURL:(id)arg1 sourceView:(id)arg2;
- (id)createInviteListParticipantPickerViewHandlerWith:(id)arg1 delegate:(id)arg2 paymentManager:(id)arg3 contactsStorage:(id)arg4;
- (id)createListSearchBar;
- (id)createMessageSenderContactViewControllerForJID:(id)arg1;
- (id)createParticipantPickerViewHandlerWithType:(unsigned long long)arg1 delegate:(id)arg2 paymentManager:(id)arg3 groupOrListJID:(id)arg4 contactsStorage:(id)arg5;
- (id)createPaymentBlocklistAlertManager;
- (id)createPaymentQRShareWithActivityViewControllerFromBarButtonItem:(id)arg1 card:(id)arg2 viewController:(id)arg3;
- (id)createUPIParticipantPickerViewHandlerWithType:(unsigned long long)arg1 delegate:(id)arg2 paymentManager:(id)arg3 groupOrListJID:(id)arg4 contactsStorage:(id)arg5;
- (void)endDisablingApplicationIdleTimerForReferenceToken:(id)arg1;
@property(nonatomic, readonly) id <WAPaymentFactoryDependencyProvider> factory;
- (id)init;
- (id)initWithChatTransactionHandler:(id)arg1 notificationsHandler:(id)arg2 syncHandler:(id)arg3 serverPropsHandler:(id)arg4 systemEventsHandler:(id)arg5 supportHandler:(id)arg6 blockedContactsList:(id)arg7;
@property(nonatomic, readonly) Class navigationHelperHandler;
- (id)newInviteContactHandlerFor:(id)arg1;
- (id)newSearchControllerForChatStorage:(id)arg1 contactsStorage:(id)arg2 includesPushNameContacts:(_Bool)arg3 includeSelf:(_Bool)arg4 delegate:(id)arg5;
@property(nonatomic, readonly) id <WAPaymentNotificationsHandler> notificationsHandler; // @synthesize notificationsHandler;
@property(nonatomic, retain) id <WAPaymentServerPropsHandler> serverPropsHandler; // @synthesize serverPropsHandler;
@property(nonatomic, retain) id <WAPaymentSyncHandler> syncHandler; // @synthesize syncHandler;
@property(nonatomic, readonly) id <WAPaymentSettingsServiceSectionProvider> settingsServiceSectionProvider;
@property(nonatomic, readonly) id <WAPaymentSupportHandlerProtocol> supportHandler; // @synthesize supportHandler;
@property(nonatomic, readonly) id <WAPaymentSystemEventsHandler> systemEventsHandler; // @synthesize systemEventsHandler;

@end

