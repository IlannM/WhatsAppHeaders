//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WARestoreBackupViewControllerRestoreProvider-Protocol.h"

@class WACloudBackupManager, WACloudStatus, WAPreviousBackup;
@protocol WARestoreBackupViewControllerRestoreProviderDelegate;

@interface WARestoreBackupViewControllerCloudDriveRestoreProvider : NSObject <WARestoreBackupViewControllerRestoreProvider>
{
    WACloudBackupManager *_cloudBackupManager;
    WAPreviousBackup *_previousBackup;
    WACloudStatus *_cloudStatus;
    id _cloudStatusListener;
    _Bool _registered;
    id <WARestoreBackupViewControllerRestoreProviderDelegate> _delegate;
    unsigned long long _currentBackupVersion;
}

- (void).cxx_destruct;
- (_Bool)available;
- (void)cloudStatusUpdated;
@property(nonatomic) unsigned long long currentBackupVersion; // @synthesize currentBackupVersion=_currentBackupVersion;
- (void)dealloc;
- (_Bool)didChangeAccountRecently;
- (void)finishRestore;
- (id)footerTextForDownloadProgress;
- (id)initWithDelegate:(id)arg1;
- (_Bool)initialized;
- (id)laterMediaRestoreSize;
- (id)previousBackup;
- (void)previousBackupChanged:(id)arg1;
- (id)progressText:(_Bool *)arg1;
- (void)registerForRestoreNotifications;
- (id)restoreHelperText;
- (unsigned long long)restorePhase;
- (void)restorePhaseEnded:(id)arg1;
- (void)restoreWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)restoring;
- (void)unregisterForRestoreNotifications;

@end

