//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WATextInputViewController;

@protocol WATextInputViewControllerDelegate <NSObject>
- (void)textInputController:(WATextInputViewController *)arg1 didFinishWithText:(NSString *)arg2;
- (void)textInputControllerDidCancel:(WATextInputViewController *)arg1;
@end

