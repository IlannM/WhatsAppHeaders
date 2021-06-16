//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

#import "WADeviceListMDDeviceControllerInfoDelegate-Protocol.h"

@class NSString, WAAdjustableSeparatorTableViewCell, WADeviceDetailsHeaderCell, WADeviceListMDDeviceController, WATableSection;
@protocol WADeviceListDevice;

@interface WADeviceInfoViewController : WAStaticTableViewController <WADeviceListMDDeviceControllerInfoDelegate>
{
    id <WADeviceListDevice> _device;
    WADeviceListMDDeviceController *_controller;
    _Bool _isDeviceBeingRemoved;
    double _syncUpdateStartTime;
    _Bool _hasSyncReloadInProgress;
    WATableSection *_aboutSection;
    WAAdjustableSeparatorTableViewCell *_removeDeviceCell;
    WAAdjustableSeparatorTableViewCell *_syncStateCell;
    WAAdjustableSeparatorTableViewCell *_appStateSyncStateCell;
    WAAdjustableSeparatorTableViewCell *_locationCell;
    WAAdjustableSeparatorTableViewCell *_activityCell;
    WADeviceDetailsHeaderCell *_headerCell;
}

- (void).cxx_destruct;
- (id)appStateSyncState;
- (_Bool)canUpdateInterface;
- (void)close:(id)arg1;
- (void)deviceListMDDeviceController:(id)arg1 didUpdateToState:(id)arg2 fromState:(id)arg3 forDeviceJID:(id)arg4;
- (void)deviceListMDDeviceControllerDidReload:(id)arg1;
- (void)didUpdateWebDeviceList:(id)arg1;
- (void)handleDeviceRemovalWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithDevice:(id)arg1 controller:(id)arg2;
- (void)reallyRemoveDevice;
- (void)reallyRemoveDeviceForProgressAlert:(id)arg1;
- (void)reallyUpdateSyncStateWithExpectedLastUpdateTime:(double)arg1;
- (void)removeDevice;
- (void)removeExpiredDevice;
- (void)setUpFooterText;
- (void)setUpTableView;
- (id)syncState:(long long)arg1;
- (void)updateActiveDetails;
- (void)updateCellsAndSeparators;
- (void)updateDeviceInfo;
- (void)updateExpirationDependentUI;
- (void)updateRemoveRow;
- (void)updateRemoveRowText;
- (void)updateSyncState:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

