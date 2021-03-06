//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import "UISplitViewControllerDelegate-Protocol.h"
#import "WARestorable-Protocol.h"

@class NSString, UIViewController, WASplitViewPlaceholderOptions;

@interface WASplitViewController : UISplitViewController <UISplitViewControllerDelegate, WARestorable>
{
    UIViewController *_mainViewController;
    WASplitViewPlaceholderOptions *_placeholderOptions;
}

- (void).cxx_destruct;
- (id)initWithMainViewController:(id)arg1 placeholderOptions:(id)arg2;
@property(readonly, nonatomic) UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (id)newEmptyDetailNavigationController;
@property(readonly, nonatomic) WASplitViewPlaceholderOptions *placeholderOptions; // @synthesize placeholderOptions=_placeholderOptions;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

