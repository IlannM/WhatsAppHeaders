//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

@interface WAWebClientSettingsViewController : WAStaticTableViewController
{
    _Bool _ignoreWebClientSessionDataUpdates;
}

- (void)configureDeviceCell:(id)arg1 withDevice:(id)arg2;
- (_Bool)hasDevicesConnected;
- (id)initWithStyle:(long long)arg1;
- (void)promptUserToSignOut;
- (void)scanQRCode;
- (void)setUpTableView;
- (void)signOut;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)webClientDidUpdateSessionData:(id)arg1;

@end
