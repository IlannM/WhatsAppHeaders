//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WA2Tuple, WAMediaPickerStats, WAMultiSendPreviewViewController;

@protocol WAMultiSendPreviewViewControllerDelegate <NSObject>
- (void)multiSendPreviewViewController:(WAMultiSendPreviewViewController *)arg1 didConfirmItems:(NSArray *)arg2 pickerStatistics:(WAMediaPickerStats *)arg3;
- (void)multiSendPreviewViewController:(WAMultiSendPreviewViewController *)arg1 didRequestAddContactWithDetails:(WA2Tuple *)arg2;
- (void)multiSendPreviewViewControllerDidCancel:(WAMultiSendPreviewViewController *)arg1;
- (void)multiSendPreviewViewControllerDidRequestRetakePhoto:(WAMultiSendPreviewViewController *)arg1;

@optional
- (void)multiSendPreviewViewControllerGIFDidFailBecauseOfNetworkError:(WAMultiSendPreviewViewController *)arg1;
@end
