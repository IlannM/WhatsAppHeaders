//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIDocumentMenuViewController, UIDocumentPickerViewController;

@protocol UIDocumentMenuDelegate <NSObject>
- (void)documentMenu:(UIDocumentMenuViewController *)arg1 didPickDocumentPicker:(UIDocumentPickerViewController *)arg2;

@optional
- (void)documentMenuWasCancelled:(UIDocumentMenuViewController *)arg1;
@end

