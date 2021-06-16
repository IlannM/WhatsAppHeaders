//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "WASavedContentBrowserChildNoItemsViewDataSource-Protocol.h"

@class NSString, WASavedContentBrowserChildNoItemsView;

@interface WASavedContentBrowserChildViewController : WAViewController <WASavedContentBrowserChildNoItemsViewDataSource>
{
    WASavedContentBrowserChildNoItemsView *_noItemsView;
}

- (void).cxx_destruct;
- (id)navigationController;
- (id)navigationItem;
@property(retain, nonatomic) WASavedContentBrowserChildNoItemsView *noItemsView; // @synthesize noItemsView=_noItemsView;
- (id)noItemsViewHeading;
- (id)noItemsViewImage;
- (id)noItemsViewSubheading;
- (void)setToolbarItems:(id)arg1;
- (id)toolbarItems;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

