//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, WAChatSession, WAChatStorage;

@interface WAMessageBulkDeletionHelper : NSObject
{
    _Atomic _Bool _canceled;
    WAChatStorage *_chatStorage;
    WAChatSession *_chatSession;
    _Bool _bspSystemMessageEnabled;
    long long _reason;
    _Bool _fromWebClient;
    NSDate *_filterBeforeDate;
    NSNumber *_filterStarred;
    NSArray *_filterTypes;
    unsigned long long _batchLimit;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long batchLimit; // @synthesize batchLimit=_batchLimit;
- (void)cancel;
- (void)chatStorageNotifyDeletedBeforeDate:(id)arg1 ofTypes:(id)arg2 shouldIncludeStarred:(id)arg3;
- (void)evaluateWithCompletion:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSDate *filterBeforeDate; // @synthesize filterBeforeDate=_filterBeforeDate;
@property(copy, nonatomic) NSNumber *filterStarred; // @synthesize filterStarred=_filterStarred;
@property(copy, nonatomic) NSArray *filterTypes; // @synthesize filterTypes=_filterTypes;
@property(nonatomic) _Bool fromWebClient; // @synthesize fromWebClient=_fromWebClient;
- (id)initWithChatSession:(id)arg1 reason:(long long)arg2;
- (void)internalDeleteWithChatSessionID:(id)arg1 messageCounter:(int)arg2 unreadSort:(int)arg3 context:(id)arg4 detailPredicates:(id)arg5 fetchLimit:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)internalEvaluateWithCompletion:(CDUnknownBlockType)arg1;
- (void)internalReportProgress:(float)arg1;
- (_Bool)internalShouldDeleteMessage:(id)arg1;
@property(readonly, getter=isCanceled) _Bool canceled;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;

@end

