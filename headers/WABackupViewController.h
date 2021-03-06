//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAWarningViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WABackupViewControllerDataProviderDelegate-Protocol.h"
#import "WAPasswordProtectionBackupViewControllerDelegate-Protocol.h"

@class NSNumber, NSString, UILabel, UISwitch, UITableViewCell, UIView, WAActivityIndicatorView, WABackupInfoTableViewCell, WABackupViewControllerDataProvider;

@interface WABackupViewController : WAWarningViewController <UITableViewDataSource, UITableViewDelegate, WABackupViewControllerDataProviderDelegate, WAPasswordProtectionBackupViewControllerDelegate>
{
    WABackupViewControllerDataProvider *_dataProvider;
    WABackupInfoTableViewCell *_backupInfoCell;
    UITableViewCell *_passwordProtectionCell;
    UITableViewCell *_autoBackupCell;
    WAActivityIndicatorView *_activityIndicator;
    UIView *_backupStatusView;
    double _backupStatusViewHeight;
    UILabel *_backupStatusLabel;
    UISwitch *_videoIncludeSwitch;
    _Bool _videoEstimateNeeded;
    _Bool _videoEstimateLoading;
    NSNumber *_videoEstimate;
}

+ (void)showIfPossibleFromTabBarController:(id)arg1;
+ (id)warningViewLabel;
- (void).cxx_destruct;
- (void)backupCompleteNotification:(id)arg1;
- (void)changedIncludeVideos:(id)arg1;
- (void)dataProvider:(id)arg1 didUpdateProperties:(unsigned long long)arg2;
- (void)dismissModal:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)layoutFooterViewAnimated:(_Bool)arg1;
- (void)mediaRestoreStatusUpdated:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)passwordProtectionBackupViewControllerDidFinishWithController:(id)arg1;
- (void)reloadTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateAutoBackupSettingValue;
- (void)updatePasswordProtectionSettingValue;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)willMoveToParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

