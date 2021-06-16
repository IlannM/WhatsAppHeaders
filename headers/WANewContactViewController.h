//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAAddressBookCountryPickerDelegate-Protocol.h"
#import "WAAddressBookLabelPickerDelegate-Protocol.h"
#import "WAAddressBookPropertyPickerDelegate-Protocol.h"
#import "WAContactQRCodeScannerViewControllerDelegate-Protocol.h"
#import "WAContactQRPhotoPreviewViewControllerDelegate-Protocol.h"
#import "WAContactQRViewControllerDelegate-Protocol.h"
#import "WACountryPickerControllerDelegate-Protocol.h"
#import "WAMediaPickerControllerDelegate-Protocol.h"
#import "WANewContactPropertyCellDelegate-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSSet, NSString, WAContact, WACountryInfo, WANewContactTableView, WAUserJID;
@protocol WANewContactViewControllerDelegate;

@interface WANewContactViewController : WAViewController <UITableViewDelegate, UITableViewDataSource, WACountryPickerControllerDelegate, WANewContactPropertyCellDelegate, WAAddressBookPropertyPickerDelegate, WAAddressBookLabelPickerDelegate, WAAddressBookCountryPickerDelegate, WAContactQRCodeScannerViewControllerDelegate, WAContactQRPhotoPreviewViewControllerDelegate, WAMediaPickerControllerDelegate, WAContactQRViewControllerDelegate>
{
    NSMutableArray *_properties;
    NSArray *_expandedPropertyKeys;
    NSArray *_allPropertyKeys;
    NSSet *_addtionalPropertyKeys;
    NSArray *_namePropertyKeys;
    WANewContactTableView *_tableView;
    _Bool _expanded;
    NSDictionary *_propertiesDict;
    NSIndexPath *_indexPathForEditingCell;
    NSMutableArray *_expandedProperties;
    _Bool _dismissKeyboardIfTooHigh;
    _Bool _isModified;
    _Bool _existingContact;
    _Bool _firstTime;
    double _loggingSessionID;
    _Bool _newContact;
    _Bool _contactAddedByQR;
    _Bool _shouldPerformPhoneNumberCheckOnExistingPhoneNumber;
    id <WANewContactViewControllerDelegate> _delegate;
    WAContact *_originalContact;
    WAContact *_contactToEdit;
    long long _source;
    WAUserJID *_userJIDForUnknowUser;
    WACountryInfo *_selectedCountry;
}

+ (id)controllerForContact:(id)arg1 isModified:(_Bool)arg2 existingContact:(_Bool)arg3 source:(long long)arg4;
+ (id)controllerForContact:(id)arg1 isModified:(_Bool)arg2 source:(long long)arg3;
+ (id)controllerForContact:(id)arg1 source:(long long)arg2;
+ (id)controllerForSavingVCardContact:(id)arg1 intoContact:(id)arg2 source:(long long)arg3;
- (void).cxx_destruct;
- (void)addContactPropertyField;
- (void)addNewValueToMultiValueProperty:(id)arg1;
- (void)addViaQR:(id)arg1;
- (void)addressBookCountryPicker:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)addressBookCountryPickerDidCancel:(id)arg1;
- (void)addressBookLabelPickerDidCancel:(id)arg1;
- (void)addressBookLabelPickerDidFinish:(id)arg1;
- (void)addressBookPropertyPicker:(id)arg1 didFinishWithProperty:(id)arg2;
- (void)addressBookPropertyPickerDidCancel:(id)arg1;
- (void)adjustContentInsetForKeyboardHeight:(double)arg1;
- (void)cancelAction:(id)arg1;
@property(nonatomic) _Bool contactAddedByQR; // @synthesize contactAddedByQR=_contactAddedByQR;
- (void)contactQRCodeScannerViewController:(id)arg1 didRequestSaveContact:(id)arg2;
- (void)contactQRCodeScannerViewController:(id)arg1 didRequestStartChatWithMessage:(id)arg2 JID:(id)arg3 pushName:(id)arg4;
- (void)contactQRCodeScannerViewControllerDidRequestShareCode:(id)arg1;
- (void)contactQRCodeScannerViewControllerRequestedViewDismissalWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)contactQRCodeScannerViewControllerShouldAdjustBrightness;
- (void)contactQRPhotoPreviewViewController:(id)arg1 requestAddContactWithUserJID:(id)arg2 pushName:(id)arg3;
- (void)contactQRPhotoPreviewViewController:(id)arg1 requestStartChatWithMessage:(id)arg2 JID:(id)arg3 pushName:(id)arg4;
- (void)contactQRPhotoPreviewViewControllerDidCancel:(id)arg1;
- (void)contactQRPhotoPreviewViewControllerRequestedViewDismissalWithCompletion:(CDUnknownBlockType)arg1;
- (void)contactQRViewControllerDidRequestQRScanner:(id)arg1;
@property(retain, nonatomic) WAContact *contactToEdit; // @synthesize contactToEdit=_contactToEdit;
- (void)countryPicker:(id)arg1 didSelectCountry:(id)arg2;
- (void)countryPickerDidSelectOther:(id)arg1;
@property(nonatomic) __weak id <WANewContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteContactWithSourceView:(id)arg1;
- (void)didRequestSaveContact:(id)arg1;
- (void)didRequestStartChatWithMessage:(id)arg1 JID:(id)arg2 pushName:(id)arg3;
- (void)dismiss;
- (void)doneAction:(id)arg1;
- (void)expandForm;
- (id)initWithContact:(id)arg1 source:(long long)arg2;
- (unsigned long long)insertIndexForProperty:(id)arg1;
- (void)insertNameProperty:(id)arg1 refresh:(_Bool)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)mediaPickerController:(id)arg1 didFinishWithSelectedItems:(id)arg2;
- (void)mediaPickerControllerDidFinishPresenting:(id)arg1;
- (void)mediaPickerControllerDidTapGIF:(id)arg1;
- (void)newContactPropertCellDidBeginEditing:(id)arg1;
- (void)newContactPropertCellDidEndEditing:(id)arg1;
- (_Bool)newContactPropertCellShouldReturn:(id)arg1;
- (void)newContactPropertCellValueDidChange:(id)arg1;
- (void)newContactPropertyCell:(id)arg1 requestContactViewControllerForUserJID:(id)arg2;
- (void)newContactPropertyCellDidCollapse:(id)arg1;
- (void)newContactPropertyCellDidExpand:(id)arg1;
- (void)newContactPropertyCellNeedResize:(id)arg1;
- (void)newContactPropertyCellRequestAddressCountryPicker:(id)arg1;
- (void)newContactPropertyCellRequestCountryPicker:(id)arg1;
- (void)newContactPropertyCellRequestLabelPicker:(id)arg1;
@property(retain, nonatomic) WAContact *originalContact; // @synthesize originalContact=_originalContact;
- (id)prepareEvent;
- (void)reallyDeleteContact;
- (void)resetFormWithContact:(id)arg1;
- (void)resignAndFindNextFirstResponderForCell:(id)arg1;
- (void)resizeTableView;
@property(retain, nonatomic) WACountryInfo *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
@property(nonatomic) _Bool shouldPerformPhoneNumberCheckOnExistingPhoneNumber; // @synthesize shouldPerformPhoneNumberCheckOnExistingPhoneNumber=_shouldPerformPhoneNumberCheckOnExistingPhoneNumber;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) WAUserJID *userJIDForUnknowUser; // @synthesize userJIDForUnknowUser=_userJIDForUnknowUser;
- (void)setupForm;
- (void)setupFormForExistingFields;
- (void)showLimitWarning:(id)arg1;
- (void)showQRViewController;
- (id)tableIndexPathForContactProperty:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)unusedContactProperties;
- (void)updateFonts;
- (void)validateChanges;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
