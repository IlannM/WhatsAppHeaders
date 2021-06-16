//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WABackgroundProcessingTask-Protocol.h"

@class NSString, WABackgroundKeyValueStoreMaintenanceTask;
@protocol WABackgroundTaskDelegate;

@interface WABackgroundDatabaseMaintenanceTask : NSObject <WABackgroundProcessingTask>
{
    WABackgroundKeyValueStoreMaintenanceTask *_currentTask;
    id <WABackgroundTaskDelegate> _delegate;
}

+ (id)identifier;
+ (id)queue;
+ (_Bool)repeated;
+ (id)taskRequest;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WABackgroundTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isUserRegistered;
- (void)launchTask;
- (void)taskExpired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
