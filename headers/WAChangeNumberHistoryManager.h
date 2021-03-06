//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAChangeNumberHistoryManager : NSObject
{
}

+ (id)sharedManager;
- (_Bool)cleanUpDatabase;
- (id)init;
- (id)latestJIDForContactWithUserJID:(id)arg1;
- (id)previousJIDForContactWithUserJID:(id)arg1;
- (void)reallyScheduleCleanupTask;
- (void)recordJIDChangeWithOldUserJID:(id)arg1 newUserJID:(id)arg2;
- (void)scheduleCleanupTask;
- (void)setDismissedForNewUserJID:(id)arg1;
- (void)setDismissedForOldUserJID:(id)arg1;
- (id)valueForUserJID:(id)arg1 inNamespace:(id)arg2;

@end

