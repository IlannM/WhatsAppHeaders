//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, WATwoFactorCodeViewController;

@protocol WATwoFactorCodeViewControllerDelegate <NSObject>
- (void)codeViewController:(WATwoFactorCodeViewController *)arg1 didEnterCode:(NSString *)arg2;
- (_Bool)codeViewController:(WATwoFactorCodeViewController *)arg1 handleOpenUrl:(NSURL *)arg2;
- (void)codeViewControllerDidPressLeftBarButton:(WATwoFactorCodeViewController *)arg1;
@end

