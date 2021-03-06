//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WATableViewController.h>

#import "WAContactTableViewCellDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"
#import "WAPresentAlertDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"

@class NSArray, NSString, UIFont, WABlocklistAlertManager, WAContactsSection, WAMutableDictionary, WANoResultsView, WASearchResultsController, WATableSection;
@protocol WASinglePersonPickerDelegate;

@interface WASinglePersonPicker : WATableViewController <WASearchControllerDelegate, WASearchResultsControllerDelegate, WAContactTableViewCellDelegate, WAPresentAlertDelegate, WAParticipantPickerViewControllerDelegate>
{
    WATableSection *_sectionTopActions;
    WATableSection *_sectionBottomActions;
    WAContactsSection *_sectionFrequentlyContacted;
    WATableSection *_sectionSearchResultsActions;
    _Bool _needsRefreshOnContactsSync;
    NSString *_disabledContactStatusText;
    NSString *_blockedContactStatusText;
    UIFont *_singleLetterSectionTitleFont;
    UIFont *_longSectionTitleFont;
    double _sectionHeaderHeight;
    WAMutableDictionary *_contactsForChatSearchResults;
    double _keyboardHeight;
    WANoResultsView *_noResultsView;
    WABlocklistAlertManager *_blocklistAlertManager;
    _Bool _displayCloseButton;
    id <WASinglePersonPickerDelegate> _delegate;
    unsigned long long _pickerMode;
    WASearchResultsController *_searchResultsController;
    NSArray *_contactsSections;
    unsigned long long _totalCount;
}

- (void).cxx_destruct;
- (id)actionsSectionForSection:(long long)arg1 inTableView:(id)arg2;
- (void)cancelAction:(id)arg1;
- (id)cellForContactAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)configureTableViewRowHeight;
- (void)configureWithContactSections:(id)arg1;
- (id)contactForIndexPath:(id)arg1 inTableView:(id)arg2;
- (id)contactForSearchResultAtIndexPath:(id)arg1;
- (id)contactForTableIndexPath:(id)arg1;
- (id)contactsSectionForTableSection:(unsigned long long)arg1;
@property(copy, nonatomic) NSArray *contactsSections; // @synthesize contactsSections=_contactsSections;
- (id)contactsWithJID:(id)arg1;
- (id)createButtonRowWithTitle:(id)arg1 buttonImageName:(id)arg2 textAlignment:(long long)arg3 accessibilityIdentifier:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)createInviteButtonRow;
- (id)createMissingContactsButtonRow;
- (id)createNewContactButtonRow;
- (id)createNewGroupButtonRow;
- (id)createNewGroupCallButton;
- (id)createShareLinkButtonRow;
@property(nonatomic) __weak id <WASinglePersonPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool displayCloseButton; // @synthesize displayCloseButton=_displayCloseButton;
- (id)initWithDelegate:(id)arg1;
- (void)initiateCallFromContactTableViewCell:(id)arg1 withVideo:(_Bool)arg2;
- (id)internalTableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)longSectionTitleFont;
- (id)noResultsBackgroundView;
- (long long)numberOfSectionsInSearchController:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)openMissingContactsFAQArticle;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidAskToStartCall:(id)arg1 contacts:(id)arg2 videoEnabled:(_Bool)arg3;
- (void)participantPickerDidCancel:(id)arg1;
@property(nonatomic) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
- (void)presentAlert:(id)arg1;
- (void)reloadContacts;
- (void)reloadSupplementaryTableRows;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)searchController:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)searchController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchController:(id)arg1 previewingContext:(id)arg2 commitViewController:(id)arg3;
- (id)searchController:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (id)searchController:(id)arg1 viewControllerForPreviewingContext:(id)arg2 atLocation:(struct CGPoint)arg3;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)searchController:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchControllerDidEndSearch:(id)arg1;
- (_Bool)searchControllerShouldRegisterFor3DTouch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchControllerWillEndSearch:(id)arg1;
- (_Bool)searchResultsAreEmpty;
@property(retain, nonatomic) WASearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (_Bool)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned long long)arg2;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (_Bool)searchResultsControllerShouldReloadData:(id)arg1;
- (_Bool)searchResultsControllerShouldSearchPushNamesForChatsSection:(id)arg1;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (double)sectionHeaderHeight;
- (id)sectionIndexTitlesForTableView:(id)arg1;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
- (void)showMissingContactsPrompt;
- (_Bool)showMissingContactsUI;
- (void)showNoResultsView:(_Bool)arg1;
- (void)showUnblockPromptForContact:(id)arg1 atIndexPath:(id)arg2 inTableView:(id)arg3;
- (id)singleLetterSectionTitleFont;
- (void)syncManagerDidFinishSync:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectContactCellAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 isActionsSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)unblockContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)videoCallButtonTappedInContactTableViewCell:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)voiceCallButtonTappedInContactTableViewCell:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

