//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface WACompanionBootstrapLoading : NSObject
{
    MISSING_TYPE *completion;
    MISSING_TYPE *isInitialSyncProcessed;
    MISSING_TYPE *isSecurityNotificationSettingProcessed;
}

- (void).cxx_destruct;
- (void)handleFailedToSync:(id)arg1;
- (void)handleInitialSync;
- (void)handleSecurityNotificationSettingSync;
- (id)init;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

