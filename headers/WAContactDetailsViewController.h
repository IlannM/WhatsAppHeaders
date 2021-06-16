//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

#import "WAContactCardItemTableViewCellDelegate-Protocol.h"
#import "WANewContactViewControllerDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"
#import "WAProfilePictureParallaxViewDelegate-Protocol.h"

@class NSString, WAContact, WAProfilePictureParallaxView, WATableSection, WAUserJID;
@protocol WAContactDetailsViewControllerDelegate, WAVCardMessagePreviewActionDelegate;

@interface WAContactDetailsViewController : WAStaticTableViewController <WAContactCardItemTableViewCellDelegate, WANewContactViewControllerDelegate, WAProfilePictureParallaxViewDelegate, WAParticipantPickerViewControllerDelegate>
{
    WATableSection *_sectionSaveToAddressBookActions;
    WAProfilePictureParallaxView *_profilePictureView;
    _Bool _newContact;
    long long _source;
    id <WAContactDetailsViewControllerDelegate> _delegate;
    WAUserJID *_highlightedUserJID;
    id <WAVCardMessagePreviewActionDelegate> _vCardPreviewActionDelegate;
    WAContact *_contact;
}

+ (void)performActionForEmailAddress:(id)arg1 fromViewController:(id)arg2;
+ (id)title;
- (void).cxx_destruct;
- (void)addSectionForContactMultiValueProperty:(id)arg1 actionableCells:(_Bool)arg2;
- (void)addVCardContactToExistingContact;
- (void)addVCardIntoContactAndPresentEditingScreen:(id)arg1;
- (void)callContactWithUserJID:(id)arg1 withVideo:(_Bool)arg2;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (void)contactsStorageDidUpdateContacts:(id)arg1;
@property(nonatomic) __weak id <WAContactDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editAction:(id)arg1;
- (void)handleTapOnTableViewCellForContactProperty:(id)arg1;
@property(retain, nonatomic) WAUserJID *highlightedUserJID; // @synthesize highlightedUserJID=_highlightedUserJID;
- (id)initWithContact:(id)arg1 newContact:(_Bool)arg2 source:(long long)arg3;
- (id)initWithContact:(id)arg1 source:(long long)arg2;
- (void)inviteButtonTappedInContactCardItemCell:(id)arg1;
- (void)messageButtonTappedInContactCardItemCell:(id)arg1;
- (void)messageContactWithUserJID:(id)arg1;
- (void)newContactController:(id)arg1 didDeleteContact:(id)arg2;
- (void)newContactController:(id)arg1 didRequestContactViewControllerForJID:(id)arg2;
- (void)newContactController:(id)arg1 didSaveContact:(id)arg2;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPickerRequestedCreateNewContact:(id)arg1;
- (void)performActionForDate:(id)arg1;
- (void)performActionForEmailAddress:(id)arg1;
- (void)performActionForPostalAddress:(id)arg1;
- (void)performActionForURLAddress:(id)arg1;
- (void)presentDisabledAddressBookViewController;
- (void)profilePictureViewImageChanged:(id)arg1;
- (void)promptToCallOrMessageJID:(id)arg1 phoneNumber:(id)arg2;
- (void)reloadDataRefetchingCurrentContact;
- (void)saveVCardContactAsNewContact;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setUpTableView;
@property(nonatomic) __weak id <WAVCardMessagePreviewActionDelegate> vCardPreviewActionDelegate; // @synthesize vCardPreviewActionDelegate=_vCardPreviewActionDelegate;
- (void)shopsButtonTappedInContactCardItemCell:(id)arg1;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)updateNavigationBar;
- (void)videoCallButtonTappedInContactCardItemCell:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)voiceCallButtonTappedInContactCardItemCell:(id)arg1;
- (id)wa_previewActionItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
