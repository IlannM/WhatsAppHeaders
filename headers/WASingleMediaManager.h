//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageMediaManager.h"

@class WAMessage;

@interface WASingleMediaManager : WAMessageMediaManager
{
    int _cachedMessageType;
    WAMessage *_message;
}

- (void).cxx_destruct;
- (void)chatStorageDidDeleteMessages:(id)arg1;
- (id)indexPathOfMessage:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (void)loadIfNeeded;
- (id)messageAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfMessagesOfType:(int)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;

@end

