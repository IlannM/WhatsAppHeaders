//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAUserNoticeManager.h"

@class WAUserNoticeStateForWeb;

@interface WAUserNoticeManager (MainAppLibrary)
@property(nonatomic, readonly) WAUserNoticeStateForWeb *noticeStateForWeb;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (id)sharedObjectKeyForPersistentRequestManager:(id)arg1;
- (void)userNoticeModalDidAccept:(id)arg1;
- (void)userNoticeModalDidClose:(id)arg1;
- (void)userNoticeModalDidOpenLink:(id)arg1;
@end
