//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAChatSessionsViewController.h"

#import "WAArchivedChatsNUXTableViewCellDelegate-Protocol.h"
#import "WANavigationItemCustomBackButtonTitle-Protocol.h"

@class NSString, WAArchivedChatsNUXTableViewCell;
@protocol WAArchivedChatsViewControllerDelegate;

@interface WAArchivedChatsViewController : WAChatSessionsViewController <WAArchivedChatsNUXTableViewCellDelegate, WANavigationItemCustomBackButtonTitle>
{
    _Bool _shouldDisplayNUX;
    id <WAArchivedChatsViewControllerDelegate> _delegate;
    WAArchivedChatsNUXTableViewCell *_archivedChatsNUXTableViewCell;
}

+ (unsigned long long)editButtonPlacement;
+ (_Bool)showPinButton;
- (void).cxx_destruct;
- (void)announcementDidFinish:(id)arg1;
@property(retain, nonatomic) WAArchivedChatsNUXTableViewCell *archivedChatsNUXTableViewCell; // @synthesize archivedChatsNUXTableViewCell=_archivedChatsNUXTableViewCell;
- (void)archivedChatsNUXTableViewCellDidTapCloseButton:(id)arg1;
- (id)backButtonItemTitleForViewController:(id)arg1;
- (id)cellForChatSession:(id)arg1;
@property(nonatomic) __weak id <WAArchivedChatsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didInsertOrDeleteRows;
- (void)dismissViewControllerIfEmpty;
- (void)editButtonAction:(id)arg1;
- (id)fetchedResultsIndexPathFromTableIndexPath:(id)arg1;
- (unsigned long long)fetchedResultsSectionIndexFromTableSectionIndex:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)predicateForFetchRequest;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAnnounceChatUnarchivedAction;
- (void)showNUX;
- (id)tableIndexPathFromFetchedResultsIndexPath:(id)arg1;
- (unsigned long long)tableSectionIndexFromFetchedResultsSectionIndex:(unsigned long long)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateArchiveRelatedUI:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willShowNoContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

