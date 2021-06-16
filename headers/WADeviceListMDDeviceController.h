//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, WAHistorySyncService, WAMediaUploaderMain, XMPPPresenceController;
@protocol WADeviceListMDDeviceControllerInfoDelegate, WADeviceListMDDeviceControllerListDelegate, WAOwnDeviceManagingMain;

@interface WADeviceListMDDeviceController : NSObject
{
    NSArray *_linkedDevices;
    NSArray *_recentlyRemovedDevices;
    NSMutableDictionary *_stateByDeviceJID;
    id <WAOwnDeviceManagingMain> _deviceManager;
    WAMediaUploaderMain *_mediaUploader;
    WAHistorySyncService *_historySyncService;
    XMPPPresenceController *_presenceController;
    id <WADeviceListMDDeviceControllerListDelegate> _listDelegate;
    id <WADeviceListMDDeviceControllerInfoDelegate> _infoDelegate;
}

- (void).cxx_destruct;
- (long long)compareLinkedDevice:(id)arg1 withDevice:(id)arg2;
@property(readonly, nonatomic) NSArray *devices;
- (void)didChangeDeviceSyncState:(id)arg1;
- (void)didRemoveRecentlyRemovedDevices:(id)arg1;
- (void)didUpdateDeviceList:(id)arg1;
- (void)didUpdateDevicePresence:(id)arg1;
- (void)didUpdateOptIn:(id)arg1;
@property(nonatomic) __weak id <WADeviceListMDDeviceControllerInfoDelegate> infoDelegate; // @synthesize infoDelegate=_infoDelegate;
- (id)initWithDeviceManager:(id)arg1 mediaUploader:(id)arg2 historySyncService:(id)arg3 presenceController:(id)arg4;
@property(nonatomic) __weak id <WADeviceListMDDeviceControllerListDelegate> listDelegate; // @synthesize listDelegate=_listDelegate;
- (void)loadIfNecessary;
- (void)mediaUploadBegan:(id)arg1;
- (void)mediaUploadFinished:(id)arg1;
- (void)mutateStateForDeviceJID:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (id)newOrExistingStateForDevice:(id)arg1 reuploadingDeviceJIDs:(id)arg2;
- (id)reloadLinkedDevicesWithAddedDeviceJIDs:(id)arg1;
- (void)reloadRecentlyRemovedDevices;

@end
