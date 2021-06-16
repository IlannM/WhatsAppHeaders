//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSDictionary, NSFetchedResultsController, NSMutableArray, NSString;
@protocol WAListRecipientsControllerDelegate;

@interface WAListRecipientsController : NSObject <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_fetchedResultsController;
    NSMutableArray *_names;
    NSMutableArray *_insertedAndUpdatedUserJIDs;
    NSDictionary *_status;
    id <WAListRecipientsControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (long long)addGroupMemberToList:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
@property(nonatomic) __weak id <WAListRecipientsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchAllContacts;
- (void)fetchNamesForJIDs:(id)arg1;
- (long long)indexOfRecipientWithJID:(id)arg1;
- (id)initWithList:(id)arg1;
- (id)nameAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfRecipients;
- (long long)removeGroupMemberFromList:(id)arg1;
- (void)resortList;
- (id)statusForUserJID:(id)arg1;
- (_Bool)updateNamesIfNeeded;
- (void)updateStatusV2Data:(id)arg1;
- (id)userJIDsNeedStatusUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
