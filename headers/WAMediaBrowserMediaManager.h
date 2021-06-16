//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageMediaManager.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, WAChatJID, WAChatSession;

@interface WAMediaBrowserMediaManager : WAMessageMediaManager <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_fetchedResultsController;
    _Bool _shouldIgnoreCellMoveNotification;
    WAChatJID *_chatJID;
    WAChatSession *_chatSession;
}

+ (id)titleForChatJID:(id)arg1 chatSession:(id)arg2;
- (void).cxx_destruct;
- (id)accessibilityLabelForHeaderInSection:(long long)arg1;
@property(readonly, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
@property(readonly, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (void)chatStorageDidMergeContext:(id)arg1;
- (void)chatStorageWillMergeContext:(id)arg1;
@property(readonly, copy, nonatomic) NSString *chatTitle;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)createFetchedResultsController;
- (void)dealloc;
- (id)indexPathOfMessage:(id)arg1;
- (id)initWithChatJID:(id)arg1 chatSession:(id)arg2;
- (id)initWithChatJID:(id)arg1 chatStorage:(id)arg2;
- (void)loadIfNeeded;
- (id)messageAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfMessagesOfType:(int)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)reload;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (id)title;
- (id)titleForHeaderInSection:(long long)arg1;
- (void)transactionDidReplaceChatSession:(id)arg1;
- (id)uniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
