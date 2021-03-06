//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WAContact, WAParticipantPickerViewController;

@protocol WAParticipantPickerViewControllerDelegate <NSObject>
- (void)participantPicker:(WAParticipantPickerViewController *)arg1 didSelectContacts:(NSArray *)arg2;
- (void)participantPickerDidCancel:(WAParticipantPickerViewController *)arg1;

@optional
- (void)participantPicker:(WAParticipantPickerViewController *)arg1 didUnblockContact:(WAContact *)arg2;
- (void)participantPickerDidAskToStartCall:(WAParticipantPickerViewController *)arg1 contacts:(NSArray *)arg2 videoEnabled:(_Bool)arg3;
- (void)participantPickerRequestedCreateNewContact:(WAParticipantPickerViewController *)arg1;
@end

