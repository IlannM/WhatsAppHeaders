//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController, WADeviceJID, WARegistrationSession;
@protocol WARegistrationViewController;

@protocol WARegistrationCompletionDelegate <NSObject>
- (void)registrationController:(UIViewController<WARegistrationViewController> *)arg1 didCompleteRegistrationWithDeviceJID:(WADeviceJID *)arg2 session:(WARegistrationSession *)arg3;
@end

