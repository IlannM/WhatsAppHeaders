//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITableViewCell, UIViewController;
@protocol UIViewControllerPreviewing;

@protocol WATableViewCellPreviewingDelegate <NSObject>
- (void)previewingContext:(id <UIViewControllerPreviewing>)arg1 inTableViewCell:(UITableViewCell *)arg2 commitViewController:(UIViewController *)arg3;
- (UIViewController *)previewingContext:(id <UIViewControllerPreviewing>)arg1 viewControllerForData:(id)arg2 inTableViewCell:(UITableViewCell *)arg3;
@end

