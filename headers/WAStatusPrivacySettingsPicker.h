//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

#import "WAParticipantPickerViewControllerDelegate-Protocol.h"

@class NSString, WATableRow;

@interface WAStatusPrivacySettingsPicker : WAStaticTableViewController <WAParticipantPickerViewControllerDelegate>
{
    WATableRow *_myContactsRow;
    WATableRow *_blacklistRow;
    WATableRow *_whitelistRow;
    _Bool _hideHeaderText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideHeaderText; // @synthesize hideHeaderText=_hideHeaderText;
- (id)init;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)privacyPolicyDidChange:(id)arg1;
- (void)selectPrivacySetting:(long long)arg1 jids:(id)arg2;
- (void)setUpTableView;
- (void)updateCheckMarks;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

