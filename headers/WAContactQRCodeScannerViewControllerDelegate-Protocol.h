//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, WAContact, WAContactQRCodeScannerViewController, WAUserJID;

@protocol WAContactQRCodeScannerViewControllerDelegate
- (void)contactQRCodeScannerViewController:(WAContactQRCodeScannerViewController *)arg1 didRequestSaveContact:(WAContact *)arg2;
- (void)contactQRCodeScannerViewController:(WAContactQRCodeScannerViewController *)arg1 didRequestStartChatWithMessage:(NSString *)arg2 JID:(WAUserJID *)arg3 pushName:(NSString *)arg4;
- (void)contactQRCodeScannerViewControllerDidRequestShareCode:(WAContactQRCodeScannerViewController *)arg1;
- (void)contactQRCodeScannerViewControllerRequestedViewDismissalWithCompletion:(void (^)(void))arg1;
- (_Bool)contactQRCodeScannerViewControllerShouldAdjustBrightness;
@end

