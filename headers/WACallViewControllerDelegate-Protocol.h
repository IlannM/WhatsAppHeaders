//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WACallViewController;

@protocol WACallViewControllerDelegate <NSObject>
- (void)callViewControllerDidFinish:(WACallViewController *)arg1;
- (void)callViewControllerDidRequestMaximize:(WACallViewController *)arg1;
- (void)callViewControllerDidRequestMinimize:(WACallViewController *)arg1 overlay:(_Bool)arg2;
- (void)callViewControllerDidShowContentView:(WACallViewController *)arg1;
- (void)callViewControllerWillHideContentView:(WACallViewController *)arg1;
- (void)callViewControllerWillRequestMinimize:(WACallViewController *)arg1;
@end
