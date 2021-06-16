//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WATask.h>

@class NSDate, WAChatStorage, WAExactTimer;

@interface WARemoveExpiredMessagesTask : WATask
{
    short _deletionType;
    WAChatStorage *_chatStorage;
    WAExactTimer *_exactTimer;
    unsigned long long _fetchLimit;
    id _oldestMessageDate;
}

- (void).cxx_destruct;
- (_Bool)addPotentialOldestMessageDate:(id)arg1 taskQueue:(id)arg2;
- (_Bool)deleteSomeStatusMessagesBefore:(id)arg1 inContext:(id)arg2;
- (_Bool)didMessageDateExpire:(id)arg1;
- (id)findSomeExpiredMessagesBefore:(id)arg1 inContext:(id)arg2;
- (id)initWithDeletionType:(short)arg1 chatStorage:(id)arg2;
- (void)markerDateDidChange;
- (id)oldestDateUsingMarker:(_Bool)arg1 inContext:(id)arg2;
@property(readonly, nonatomic) NSDate *oldestMessageDate;
- (void)queryOldestMessageDateIfNeeded;
- (void)runTaskFromQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
