//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WAChatSession, WAExactTimer, WAGroupAddRequest, WAGroupInviteDeepLink, WAGroupInviteDeepLinkSession, WAGroupInviteJoinViewController, WAGroupJID, WAUserJID, XMPPGroup;
@protocol WAGroupInviteJoinControllerDelegate;

@interface WAGroupInviteJoinController : NSObject
{
    WAExactTimer *_chatStorageNotificationTimeoutTimer;
    _Bool _displayInOtherAppButton;
    WAGroupInviteDeepLinkSession *_inviteLinkSession;
    WAGroupJID *_groupJID;
    WAUserJID *_inviteeJID;
    WAGroupAddRequest *_groupAddRequest;
    UIViewController *_presentingViewController;
    _Bool _cancelled;
    id <WAGroupInviteJoinControllerDelegate> _delegate;
    WAGroupInviteDeepLink *_deepLink;
    NSString *_inviteCode;
    CDUnknownBlockType _dismissCompletion;
    WAGroupInviteJoinViewController *_groupInviteJoinViewController;
    XMPPGroup *_group;
    WAChatSession *_chatSession;
}

- (void).cxx_destruct;
- (void)askForConfirmationToJoinGroup:(id)arg1;
- (void)cancelConfirmation;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (void)chatStorageDidUpdateChatSessions:(id)arg1;
- (void)connectionTimedOut;
@property(retain, nonatomic) WAGroupInviteDeepLink *deepLink; // @synthesize deepLink=_deepLink;
@property(nonatomic) __weak id <WAGroupInviteJoinControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveNotification;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletion; // @synthesize dismissCompletion=_dismissCompletion;
- (void)dismissUIControllerWithAnimation:(_Bool)arg1;
- (void)dismissWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) XMPPGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) WAGroupInviteJoinViewController *groupInviteJoinViewController; // @synthesize groupInviteJoinViewController=_groupInviteJoinViewController;
- (void)handleAcceptInviteError:(id)arg1;
- (void)handleGroupInfoError:(id)arg1;
- (void)handleGroupInviteLinksError:(id)arg1;
- (void)handleRevokeInviteError:(id)arg1;
- (void)hideActivityIndicatorAfterSuccessfulRevoke;
- (void)hideActivityIndicatorAndReportSuccessfulGroupJoin;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
- (_Bool)inviteLinkMode;
- (void)joinGroup;
- (void)openInviteURLInOtherApp;
- (void)presentFromViewController:(id)arg1;
- (void)presentWithGroupJID:(id)arg1 inviteeJID:(id)arg2 addRequest:(id)arg3 fromViewController:(id)arg4;
- (void)presentWithOptionToOpenInOtherApp:(_Bool)arg1 fromViewController:(id)arg2 forSession:(id)arg3;
- (void)revokeInvite;
- (void)showGroupInviteExpiredErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)startCheckingInviteRequest;
- (void)startFetchingGroupInfo;
- (void)startMonitoringChatStorageNotifications;
- (void)stopMonitoringChatStorageNotifications;
- (void)submitFieldStatsForQRCodeScanWithErrorReason:(long long)arg1 withCameraSource:(long long)arg2;
- (void)submitFieldStatsForSuccessfulQRCodeScanWithCameraSource:(long long)arg1;
- (void)transactionDidInsertChatSession:(id)arg1;

@end

