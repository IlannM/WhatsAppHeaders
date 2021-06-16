//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAProfilePictureManager.h>

#import "WAUpgradeCallback-Protocol.h"

@class NSString;

@interface WAProfilePictureManager (MainApp) <WAUpgradeCallback>
+ (id)alertTextForGroupIconRequestError:(id)arg1;
+ (id)alertTextForProfilePictureIconRequestError:(id)arg1;
+ (void)fireProfilePictureChangedNotificationForJID:(id)arg1;
+ (_Bool)isProfilePictureValid:(id)arg1;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
- (void)MAIN_APP_performAfterInit;
- (void)MAIN_APP_requestProfilePictureThumbnailForJID:(id)arg1 onlyIfNecessary:(_Bool)arg2;
- (void)deleteAllCachedThumbnails;
- (void)deleteAllProfilePictureItems;
- (void)deleteMyProfilePicture;
- (void)deleteProfilePictureForJID:(id)arg1;
- (void)deleteProfilePictureForJID:(id)arg1 withOriginalPath:(id)arg2;
- (void)deleteTemporaryGroupPictureForJID:(id)arg1;
- (void)disallowProfilePictureRequests;
- (void)downloadGroupInviteProfilePictureFromDirectPath:(id)arg1 withIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCachedGroupInviteProfilePictureForGroupJID:(id)arg1 pictureIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fieldstatDownloadEventResult:(id)arg1 error:(id)arg2 elapsedTime:(double)arg3 pictureChanged:(_Bool)arg4 thumbnail:(_Bool)arg5;
- (void)handleFullSizedProfilePictureRequestForJID:(id)arg1 startTime:(double)arg2 error:(id)arg3 pictureIdentifier:(id)arg4 imageData:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleGroupInviteProfilePictureRequestForGroupJID:(id)arg1 withError:(id)arg2 pictureIdentifier:(id)arg3 imageData:(id)arg4 startTime:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (long long)handleMyProfilePictureDownloadWithStartTime:(double)arg1 error:(id)arg2 pictureIdentifier:(id)arg3 imageData:(id)arg4;
- (void)handleProfilePictureThumbnailRequestForJID:(id)arg1 startTime:(double)arg2 error:(id)arg3 pictureIdentifier:(id)arg4 imageData:(id)arg5;
- (_Bool)hasPendingGetFullsizeRequestForJID:(id)arg1;
- (id)initWithChatStorage:(id)arg1 storageDirectory:(id)arg2 keyValueStore:(id)arg3 taskSession:(id)arg4 taskSessionV4:(id)arg5 networkUsageManager:(id)arg6 networkUsageMetricsManager:(id)arg7;
- (_Bool)internalProcessIncomingPictureNotification:(id)arg1;
- (void)markProfilePictureAsNeedingUpdateForJID:(id)arg1;
- (void)migrateDataForTemporaryProfilePictureFromJID:(id)arg1 toJID:(id)arg2;
- (id)myProfilePictureData;
- (id)myProfilePictureThumbnailData;
- (void)processIncomingPictureNotification:(id)arg1;
- (void)processPictureChangeNotificationForContactWithJID:(id)arg1 pictureIdentifier:(id)arg2 timestamp:(id)arg3;
- (void)processPictureChangeNotificationForGroupWithJID:(id)arg1 pictureIdentifier:(id)arg2 changeAuthorJID:(id)arg3 timestamp:(id)arg4;
- (_Bool)profilePictureRequestsAllowed;
- (void)reallyScheduleCleanupTask;
- (void)refreshMyProfilePictureWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestFullSizedProfilePictureForJID:(id)arg1 unconditionallyFetchPictureData:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestFullSizedProfilePictureForJIDImpl:(id)arg1 unconditionallyFetchPictureData:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestMyProfilePictureIfNeeded;
- (void)requestMyProfilePictureWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestProfilePictureDeleteForJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestProfilePictureDeleteForJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestProfilePictureFromDirectPathWithJID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)requestProfilePictureSetForJID:(id)arg1 picture:(id)arg2 insertEvent:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestProfilePictureSetForJID:(id)arg1 withPictureData:(id)arg2 webClientRequestID:(id)arg3 insertEvent:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestProfilePictureThumbnailForGroupJID:(id)arg1 withGroupAddRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestProfilePictureThumbnailForGroupJID:(id)arg1 withInviteCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestProfilePictureThumbnailForJID:(id)arg1 onlyIfNecessary:(_Bool)arg2;
- (void)requestProfilePictureThumbnailImplForJID:(id)arg1 onlyIfNecessary:(_Bool)arg2;
- (void)resetBackoffTracker;
- (void)resetProfilePictureThumbnailCacheForJID:(id)arg1;
- (void)reuploadMyProfilePictureOnlyIfNeeded:(_Bool)arg1;
- (void)saveChatStorageBackgroundContext:(id)arg1 afterDeletingPictureDataForJID:(id)arg2;
- (void)saveChatStorageBackgroundContext:(id)arg1 afterUpdatingPictureData:(id)arg2 withPictureID:(id)arg3 forJID:(id)arg4;
- (void)saveMyProfilePicture:(id)arg1;
- (id)savePictureData:(id)arg1 pictureType:(unsigned long long)arg2 pictureID:(id)arg3 forJID:(id)arg4;
- (void)scheduleCleanupTask;
- (void)storeTemporaryGroupPicture:(id)arg1 forTemporaryGroupJID:(id)arg2;
- (id)temporaryGroupPictureForJID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
