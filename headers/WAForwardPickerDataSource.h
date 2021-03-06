//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSSet, NSString, WAContactsSection;
@protocol WAForwardPickerDataSourceDelegate;

@interface WAForwardPickerDataSource : NSObject <UITableViewDataSource>
{
    long long _statusSectionIndex;
    WAContactsSection *_sectionFrequentlyContacted;
    WAContactsSection *_sectionRecentChats;
    NSArray *_fetchedRecentChats;
    _Bool _allowsStatusSelection;
    long long _contentType;
    NSSet *_excludedJIDs;
    id <WAForwardPickerDataSourceDelegate> _delegate;
    long long _fsFrequentContactsCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsStatusSelection; // @synthesize allowsStatusSelection=_allowsStatusSelection;
- (id)chatSessionAtIndexPath:(id)arg1;
- (id)contactAtIndexPath:(id)arg1;
- (id)contactFromChatSession:(id)arg1;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) __weak id <WAForwardPickerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSSet *excludedJIDs; // @synthesize excludedJIDs=_excludedJIDs;
- (id)fetchPendingOutboxTimestamps;
@property(readonly, nonatomic) long long fsFrequentContactsCount; // @synthesize fsFrequentContactsCount=_fsFrequentContactsCount;
- (long long)fsNumberOfFrequentsInContacts:(id)arg1;
- (long long)indexOfFrequentlyContactedSection;
- (long long)indexOfRecentChatsSection;
- (id)init;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (_Bool)isIndexPathForStatusRow:(id)arg1;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)loadDataIfNecessary;
- (void)loadFrequentlyContactedIfNecessary;
- (void)loadRecentChatsIfNecessary;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)timestampsOfPendingOutboxes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

