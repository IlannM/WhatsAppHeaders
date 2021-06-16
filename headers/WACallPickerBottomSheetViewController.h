//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABottomSheetViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WACallPickerBottomSheetHeaderViewDelegate-Protocol.h"
#import "WAContactGridViewControllerDataSource-Protocol.h"
#import "WAContactGridViewControllerDelegate-Protocol.h"
#import "WAJoinableEducationBannerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, WABlocklistAlertManager, WACallPickerBottomSheetHeaderView, WAContactGridViewController, WAContactsSearchController, WAGroupJID, WASlideDownAlertView;

@interface WACallPickerBottomSheetViewController : WABottomSheetViewController <WAContactGridViewControllerDataSource, WAContactGridViewControllerDelegate, WACallPickerBottomSheetHeaderViewDelegate, WAJoinableEducationBannerViewDelegate, UISearchBarDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_contacts;
    NSMutableArray *_selectedContacts;
    NSArray *_searchedContacts;
    unsigned long long _lastABIndex;
    _Bool _abSortingEnabled;
    _Bool _shouldResetContentOffset;
    WASlideDownAlertView *_slideDownView;
    WAContactsSearchController *_searchController;
    WAContactGridViewController *_contactGridViewController;
    WACallPickerBottomSheetHeaderView *_callHeaderView;
    WAGroupJID *_groupJID;
    _Bool _roomsEnabled;
    WABlocklistAlertManager *_blocklistAlertManager;
    int _callUISource;
}

- (void).cxx_destruct;
- (void)bannerViewDidTapClose:(id)arg1;
@property(nonatomic) int callUISource; // @synthesize callUISource=_callUISource;
- (void)commonInit;
- (id)contactGridViewController:(id)arg1 contactAtIndex:(unsigned long long)arg2;
- (void)contactGridViewController:(id)arg1 didTapCallButtonIsVideo:(_Bool)arg2;
- (void)contactGridViewController:(id)arg1 requestedToDeleteContactAtIndex:(unsigned long long)arg2;
- (void)contentViewWillResize;
- (id)extraHeaderView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)heightForContactGridView;
- (void)hideCallHeaderViewBottomLineIfNeeded;
- (unsigned long long)indexOfContactInSelectedContact:(id)arg1;
- (id)initWithContacts:(id)arg1 abSortingEnabled:(_Bool)arg2 selectedContacts:(id)arg3;
- (id)initWithGroupJID:(id)arg1 abSortingEnabled:(_Bool)arg2;
- (_Bool)isDisplayingSearchResults;
- (double)maximumHeight;
- (double)minimumHeight;
- (unsigned long long)numberOfContactsInContactGridViewController:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeContactFromSelectedContacts:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
@property(copy, nonatomic) NSArray *selectedContacts;
- (_Bool)selectedContactsContainsContact:(id)arg1;
- (void)setSearchResultsContacts:(id)arg1 forSearchText:(id)arg2;
- (void)setupHeaderView;
- (void)sortContactsByABAvailability;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (Class)tableViewCellClass;
- (id)tableViewCellIdentifier;
- (void)updateTableViewWithImmediateLayoutChange:(_Bool)arg1 invalidateContactsGridLayout:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

