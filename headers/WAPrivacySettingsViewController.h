//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

#import "WANavigationDeepLinkHandler-Protocol.h"

@class NSMutableArray, NSString, UISwitch, WAActivityLabel, WATableRow, WATableSection;
@protocol WAPrivacySettingsProviding;

@interface WAPrivacySettingsViewController : WAStaticTableViewController <WANavigationDeepLinkHandler>
{
    WATableRow *_lastSeenRow;
    WATableRow *_profilePicRow;
    WATableRow *_statusV2Row;
    WATableRow *_statusV3Row;
    WATableRow *_groupAddRow;
    WATableRow *_liveLocationRow;
    WATableRow *_blockedRow;
    WATableRow *_disappearingModeRow;
    WATableRow *_readReceiptsRow;
    WATableRow *_biometricPrivacyRow;
    UISwitch *_readReceiptsSwitch;
    WATableSection *_biometricPrivacySection;
    WAActivityLabel *_activityLabel;
    double _activityStartTime;
    _Bool _needPrivacyRefresh;
    _Bool _privacyFetchFailed;
    NSMutableArray *_chatSessionsSharingLiveLocation;
    id <WAPrivacySettingsProviding> _privacyPolicy;
}

- (void).cxx_destruct;
- (void)blockedContactsListDidChange:(id)arg1;
- (void)handleDeepLinkAction:(unsigned long long)arg1;
- (id)init;
- (void)liveLocationSharingEndDateDidChange:(id)arg1;
- (void)privacyPolicyDidChange:(id)arg1;
- (void)refreshPrivacyIfNeeded;
- (void)requestDisappearingModeSettingChange:(id)arg1;
- (void)setUpTableView;
- (void)setupReadReceiptsRow:(id)arg1 privacySettingValue:(unsigned long long)arg2 canEnableDisableRow:(_Bool)arg3;
- (void)setupTableRow:(id)arg1 sectionIndex:(unsigned long long)arg2 privacySettingsValue:(unsigned long long)arg3 canEnableDisableRow:(_Bool)arg4;
- (void)showBlacklistController;
- (void)showDisappearingModeSettingsControllerAnimated:(_Bool)arg1;
- (void)showLiveLocationController;
- (void)switchReadReceiptsAction:(id)arg1;
- (void)updateBiometricPrivacySection;
- (void)updateBlockedContactsCountDisplay;
- (void)updateDisappearingModeDisplay;
- (void)updateLiveLocationCurrentlySharingDisplay;
- (void)updatePrivacyValues;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)wa_applicationWillEnterForeground;
- (void)xmppConnectionStateDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

