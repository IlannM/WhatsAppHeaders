//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStellaIntentHandling-Protocol.h"

@class NSString, WAContextMain, WAStellaContactAllowList, WAStellaDataEncryption;

@interface WAStellaUnreadChatsNotifier : NSObject <WAStellaIntentHandling>
{
    WAContextMain *_context;
    WAStellaContactAllowList *_allowList;
    WAStellaDataEncryption *_encryption;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAStellaContactAllowList *allowList; // @synthesize allowList=_allowList;
@property(nonatomic) __weak WAContextMain *context; // @synthesize context=_context;
@property(retain, nonatomic) WAStellaDataEncryption *encryption; // @synthesize encryption=_encryption;
- (id)fetchChatSessionsWithUnreadMessages;
- (id)fetchUnreadMessagesForChatSession:(id)arg1 onOrAfterSort:(int)arg2 onOrAfterDate:(id)arg3 limit:(long long)arg4;
- (void)handleUnreadChatsNotification:(id)arg1;
- (id)initWithContext:(id)arg1 allowList:(id)arg2 encryption:(id)arg3;
- (_Bool)process:(id)arg1 error:(out id *)arg2;
- (void)registerNotificationHandlers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

