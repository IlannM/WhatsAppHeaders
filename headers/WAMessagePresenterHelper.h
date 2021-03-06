//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface WAMessagePresenterHelper : NSObject
{
    _Bool _messagesDeletedExternally;
    id _notificationTokenForWebDeleteObserver;
    UIViewController *_parentViewController;
}

+ (void)presentStickerCorruptedAlertFromViewController:(id)arg1;
+ (void)showForwardNonExistentFileErrorForMessageType:(int)arg1 fromViewController:(id)arg2 senderName:(id)arg3;
+ (void)showGenericDownloadErrorForMessageType:(int)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showGenericDownloadErrorForMessageType:(int)arg1 networkStatus:(id)arg2 fromViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)showGenericDownloadErrorWhenNotReachableForMessageType:(int)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showGenericDownloadErrorWhenReachabilityOtherForMessageType:(int)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showGenericDownloadErrorWhenReachableViaWiFiForMessageType:(int)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showUploadFailedFileTooLargeForMessageType:(int)arg1 itemCount:(long long)arg2 fromViewController:(id)arg3;
+ (id)unavailableMediaErrorForMessage:(id)arg1;
+ (id)unavailableMediaErrorForMessageType:(int)arg1 fromSender:(id)arg2;
- (void).cxx_destruct;
- (_Bool)allMessagesContainVisualMedia:(id)arg1;
- (_Bool)canForwardMessages:(id)arg1;
- (_Bool)canShareMessages:(id)arg1;
- (void)deleteMessages:(id)arg1 forceConfirmation:(_Bool)arg2 willDelete:(CDUnknownBlockType)arg3;
- (void)deleteStorageManagementFirstOptionMessages:(id)arg1 firstOptionSizeString:(id)arg2 firstOptionSize:(long long)arg3 secondOptionMessages:(id)arg4 secondOptionSizeString:(id)arg5 secondOptionSize:(long long)arg6 type:(long long)arg7 willDelete:(CDUnknownBlockType)arg8;
- (void)forwardMessages:(id)arg1 willForward:(CDUnknownBlockType)arg2;
- (void)handleMediaDownloadError:(id)arg1 inMessage:(id)arg2;
- (void)handleMediaUploadError:(id)arg1 inMessage:(id)arg2;
- (id)initWithParentViewController:(id)arg1;
- (void)observeForWebDeletesOnMessages:(id)arg1;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)presentStickerCorruptedAlert;
- (void)retryDownloadingMediaInMessage:(id)arg1;
- (void)saveMediaMessagesToPhotoLibrary:(id)arg1 willPresentAlertView:(CDUnknownBlockType)arg2 willDismissAlertView:(CDUnknownBlockType)arg3;
- (void)shareMessages:(id)arg1 fromBarButtonItem:(id)arg2 willShare:(CDUnknownBlockType)arg3;
- (void)showErrorMessageForUnavailableMediaInMessage:(id)arg1;
- (void)showGenericDownloadErrorForMessageType:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showGenericDownloadErrorForMessageType:(int)arg1 networkStatus:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showMessageIDDialogForMessages:(id)arg1;
- (void)showMessageSystemMessageDialogForMessages:(id)arg1;
- (void)showMessageUnicodeDialogForMessages:(id)arg1;
- (void)startNetworkTransferForMessage:(id)arg1;
- (void)stopNetworkTransferForMessage:(id)arg1;
- (void)stopObserveringForWebDeletes;

@end

