//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

#import "WANavigationItemCustomBackButtonTitle-Protocol.h"

@class MISSING_TYPE;

@interface WAWallpaperViewController : WAStaticTableViewController <WANavigationItemCustomBackButtonTitle>
{
    MISSING_TYPE *chatSession;
    MISSING_TYPE *wallpaperView;
    MISSING_TYPE *notificationToneRow;
}

- (void).cxx_destruct;
- (id)backButtonItemTitleForViewController:(id)arg1;
- (id)init;
- (id)initWith:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInsetGrouped;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)resetWallpapers;
- (void)setUpTableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end

