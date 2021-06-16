//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABackupViewControllerCloudDriveDataProvider.h"

@class WABackupViewControllerDataProviderButton, WACloudStatus, WAMediaRestore, WAWeakTimer;

@interface WABackupViewControllerMediaRestoreDataProvider : WABackupViewControllerCloudDriveDataProvider
{
    unsigned long long _currentRestoreStatus;
    id _currentRestoreStatusObserver;
    WAMediaRestore *_currentRestore;
    id _currentRestorePhaseObserver;
    WAWeakTimer *_currentRestoreTimer;
    WACloudStatus *_currentCloudStatus;
    id _currentCloudStatusListener;
    WABackupViewControllerDataProviderButton *_errorNoAccount;
    WABackupViewControllerDataProviderButton *_errorNoBackup;
    WABackupViewControllerDataProviderButton *_errorNoSpace;
    WABackupViewControllerDataProviderButton *_buttonPrimary;
    WABackupViewControllerDataProviderButton *_buttonCellular;
    WABackupViewControllerDataProviderButton *_buttonSkip;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBackupViewController:(id)arg1;
- (unsigned long long)internalUpdateProperties:(unsigned long long)arg1;
- (unsigned long long)updateAnimateGears;
- (unsigned long long)updateErrorButton;
- (unsigned long long)updateOtherButtons;
- (unsigned long long)updatePrimaryButton;
- (unsigned long long)updatePrimaryFooter;

@end
