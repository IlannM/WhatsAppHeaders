//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABackupViewControllerCloudDriveDataProvider.h"

@class NSError, WABackup, WABackupErrorManager, WABackupViewControllerDataProviderButton, WACloudBackupManager, WACloudStatus, WAWeakTimer;

@interface WABackupViewControllerStandardDataProvider : WABackupViewControllerCloudDriveDataProvider
{
    WACloudBackupManager *_backupManager;
    WABackupErrorManager *_errorManager;
    WABackup *_currentBackup;
    id _currentBackupObserver;
    WAWeakTimer *_currentBackupTimer;
    WACloudStatus *_currentCloudStatus;
    id _currentCloudStatusListener;
    NSError *_currentError;
    id _currentErrorObserver;
    id _currentBackgroundRefreshStatusObserver;
    WABackupViewControllerDataProviderButton *_buttonErrorNotSignedIn;
    WABackupViewControllerDataProviderButton *_buttonErrorOther;
    WABackupViewControllerDataProviderButton *_buttonBackUpNow;
    WABackupViewControllerDataProviderButton *_buttonBackUpDisabled;
    WABackupViewControllerDataProviderButton *_buttonPaused;
    WABackupViewControllerDataProviderButton *_buttonInProgress;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBackupViewController:(id)arg1;
- (unsigned long long)internalUpdateProperties:(unsigned long long)arg1;
- (void)muteBadgeIfNeeded;
- (void)startBackupAction;
- (unsigned long long)updateErrorButton;
- (unsigned long long)updateStatusProperties:(unsigned long long)arg1;
- (void)viewDidAppear;

@end
