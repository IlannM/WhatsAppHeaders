//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WARegistrationTwoFacFailDelegate-Protocol.h"

@class NSArray, WAChangeNumberInputController, WADeviceJID, WARegistrationSession;

@protocol WAChangeNumberInputControllerDelegate <WARegistrationTwoFacFailDelegate>
- (void)changeNumberInputControllerDidCancel:(WAChangeNumberInputController *)arg1;
- (void)changeNumberInputControllerDidEnterPhone:(WAChangeNumberInputController *)arg1 session:(WARegistrationSession *)arg2;
- (void)changeNumberInputControllerDidFinish:(WAChangeNumberInputController *)arg1 session:(WARegistrationSession *)arg2 deviceJID:(WADeviceJID *)arg3 notificationContacts:(NSArray *)arg4;
@end
