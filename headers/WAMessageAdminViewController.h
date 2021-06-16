//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABottomSheetViewController.h"

#import "UISearchBarDelegate-Protocol.h"

@class NSArray, NSString, WABlocklistAlertManager, WAChatSession, WAContactsSearchController, WAMessageAdminSearchBarView;

@interface WAMessageAdminViewController : WABottomSheetViewController <UISearchBarDelegate>
{
    NSArray *_contacts;
    NSArray *_searchResults;
    WAContactsSearchController *_searchController;
    WAMessageAdminSearchBarView *_searchBarView;
    WABlocklistAlertManager *_alertManager;
    _Bool _resetContentOffsetOnSearchStart;
    CDUnknownBlockType _completionBlock;
    WAChatSession *_chatSession;
    double _panelHeight;
}

+ (id)controllerForChatSession:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)configureTableViewRowHeight;
- (id)contactForCellIndexPath:(id)arg1;
- (void)contentViewWillResize;
@property(readonly, nonatomic) NSArray *currentDataSource;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (id)extraHeaderView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(readonly, nonatomic, getter=isDisplayingSearchResults) _Bool displayingSearchResults;
- (double)maximumHeight;
- (double)minimumHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) double panelHeight; // @synthesize panelHeight=_panelHeight;
- (void)reloadContacts;
@property(nonatomic) _Bool resetContentOffsetOnSearchStart; // @synthesize resetContentOffsetOnSearchStart=_resetContentOffsetOnSearchStart;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsWithContacts:(id)arg1 searchBar:(id)arg2 searchText:(id)arg3;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
