//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAShareContactViewController, WAVCard;

@protocol WAShareContactViewControllerDelegate <NSObject>
- (void)shareContactViewController:(WAShareContactViewController *)arg1 didFinishWithVCard:(WAVCard *)arg2;
- (void)shareContactViewControllerDidCancel:(WAShareContactViewController *)arg1;

@optional
- (NSString *)shareContactViewControllerConfirmationButtonTitle:(WAShareContactViewController *)arg1;
@end

