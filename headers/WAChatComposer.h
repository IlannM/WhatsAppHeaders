//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WANavigationController.h>

#import "WAContactDetailsViewControllerDelegate-Protocol.h"
#import "WAGroupComposerDelegate-Protocol.h"
#import "WAGroupParticipantPickerViewControllerDelegate-Protocol.h"
#import "WANewContactViewControllerDelegate-Protocol.h"
#import "WASinglePersonPickerDelegate-Protocol.h"

@class NSString, WAGroupComposerViewController;
@protocol UINavigationControllerDelegate><WAChatComposerDelegate;

@interface WAChatComposer : WANavigationController <WAGroupComposerDelegate, WASinglePersonPickerDelegate, WAGroupParticipantPickerViewControllerDelegate, WAContactDetailsViewControllerDelegate, WANewContactViewControllerDelegate>
{
    WAGroupComposerViewController *_groupComposer;
    unsigned long long _originalMode;
    NSString *_contactIdentifier;
    _Bool _contactAddedByQR;
    unsigned long long _mode;
}

- (void).cxx_destruct;
- (void)addNewContact;
- (void)contactDetailsViewController:(id)arg1 startCallWithUserJID:(id)arg2 withVideo:(_Bool)arg3;
- (void)contactDetailsViewController:(id)arg1 startChatWithContact:(id)arg2;
- (void)contactDetailsViewControllerDidDeleteContact:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)groupComposer:(id)arg1 didFinishWithSubject:(id)arg2 picture:(id)arg3 isDogfooding:(_Bool)arg4;
- (id)groupParticipantsPicker;
- (id)initWithMode:(unsigned long long)arg1;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)newContactController:(id)arg1 didRequestContactViewControllerForJID:(id)arg2;
- (void)newContactController:(id)arg1 didSaveContact:(id)arg2;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)showContactDetailsViewControllerForContact:(id)arg1 newContact:(_Bool)arg2 source:(long long)arg3;
- (void)showSinglePersonPickerAnimated:(_Bool)arg1;
- (void)singlePersonPicker:(id)arg1 didAskToInviteFriendsFromTableViewCell:(id)arg2;
- (void)singlePersonPicker:(id)arg1 didSelectContact:(id)arg2 frequentlyContacted:(_Bool)arg3;
- (void)singlePersonPickerDidAskToCreateNewContact:(id)arg1;
- (void)singlePersonPickerDidAskToCreateNewGroup:(id)arg1;
- (void)singlePersonPickerDidCancel:(id)arg1;
- (_Bool)singlePersonPickerShouldSearchPushNamesForChatsSection:(id)arg1;
- (void)transitionFromContactDetailsPageToSinglePersonPicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UINavigationControllerDelegate><WAChatComposerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
