//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACallTonePlayerDelegate-Protocol.h"
#import "WACallVoipBridgeDelegate-Protocol.h"
#import "WAVideoCaptureViewDelegate-Protocol.h"

@class CMMotionManager, NSMutableDictionary, NSMutableSet, NSNumber, NSString, WAAudioActivity, WABlocklistAlertManager, WACall, WACallInfo, WACallNotificationManager, WACallProviderDelegate, WACallRegistry, WACallTonePlayer, WACallVoipBridge, WAExactTimer, WAIncomingCallVibrator, WAReferenceCountToken, WATimer, WAUserJID, WAVideoCaptureView, WamEventCall;
@protocol OS_dispatch_queue, WACallManagerDelegate;

@interface WACallManager : NSObject <WACallTonePlayerDelegate, WACallVoipBridgeDelegate, WAVideoCaptureViewDelegate>
{
    _Bool _callBlocked;
    WACallProviderDelegate *_callProviderDelegate;
    _Bool _needsUninitializeCall;
    _Bool _callBusy;
    WATimer *_uninitializeCallTimer;
    WATimer *_rejectTimer;
    double _outgoingCallStartTime;
    int _callEndReason;
    long long _currentOrientation;
    CMMotionManager *_motionManager;
    WACallInfo *_callInfo;
    _Bool _isMonitoringOrientation;
    NSMutableDictionary *_participantVideoViews;
    NSObject<OS_dispatch_queue> *_voip_web_request_queue;
    _Bool _isPeerRequestingVideoUpgrade;
    _Bool _isSelfRequestingVideoUpgrade;
    _Bool _disableVideoScheduled;
    NSMutableDictionary *_offlineOfferStanzaForCallID;
    NSMutableDictionary *_offlineTerminateStanzaForCallID;
    NSMutableDictionary *_offlineOfferUIDelayTimerForCallID;
    NSMutableSet *_offlineCompletedCallIDs;
    NSMutableDictionary *_stanzasAwaitingAcks;
    WAExactTimer *_ongoingCallTimer;
    WATimer *_callUpgradeRequestTimer;
    WATimer *_fetchOfferTimer;
    WATimer *_sendOfferTimer;
    unsigned long long _ongoingCallTimerTask;
    NSMutableDictionary *_groupCallInviteTimerForParticipantJID;
    int _callWakeupSource;
    double _secondsSinceLastRating;
    WamEventCall *_savedFieldStatsEvent;
    int _callUISource;
    _Bool _isScreenDimmed;
    WAReferenceCountToken *_quietTimeToken;
    WAAudioActivity *_callActivity;
    _Bool _isCallInterrupted;
    _Bool _isCallBackground;
    WACallRegistry *_callRegistry;
    WABlocklistAlertManager *_blocklistAlertManager;
    _Bool _relayBindsFailed;
    _Bool _pendingBackgroundCall;
    _Bool _interimCallPresent;
    _Bool _endCallInProgress;
    _Bool _callConnected;
    _Bool _defaultPortraitMode;
    _Bool _shouldUploadLogs;
    _Bool _enableCallerMessageBuffer;
    _Bool _enableCalleeMessageBuffer;
    _Bool _earlyCaptureSessionDisabled;
    _Bool _enableGcallCodecNego;
    _Bool _enableVqm;
    _Bool _shouldShowVoipAppUpdatePrompt;
    _Bool _muteWorkaroundEnabled;
    _Bool _uploadFieldStatsAtCallEnd;
    _Bool _badASN;
    _Bool _showRatingScreenForCall;
    int _callState;
    int _callStartDelayInMilliseconds;
    int _portraitModeThreshold;
    int _landscapeModeThreshold;
    int _horizontalDegreeThreshold;
    id <WACallManagerDelegate> _delegate;
    WACallInfo *_lastCallInfo;
    long long _batteryLevelAtCallStart;
    WACallVoipBridge *_voipBridge;
    WAIncomingCallVibrator *_avSwitchVibrator;
    WACallTonePlayer *_callTonePlayer;
    long long _lonelyStateTimeout;
    WACallNotificationManager *_callNotificationManager;
    long long _videoMaximizedCount;
    NSObject<OS_dispatch_queue> *_voipQueue;
    WAVideoCaptureView *_selfVideoCaptureView;
    NSNumber *_secondsSinceCallOffer;
    NSString *_callIDFromOffer;
    WACall *_activeCall;
    double _dimScreenInVideoCallPercentage;
    long long _spamCallThresholdSeconds;
    long long _showRatingIntervalInSeconds;
}

+ (int)callStartDelayInMilliseconds;
+ (_Bool)isCalleeMessageBufferEnabled;
+ (_Bool)isCallerMessageBufferEnabled;
+ (_Bool)isGcallCodecNegoFixEnabled;
+ (_Bool)isJoinableFullStackEnabled;
+ (_Bool)isMultiDeviceCallEnabled;
+ (_Bool)isVoIPPushFlowEnabled;
+ (_Bool)isVqmEnabled;
+ (int)joinableClientVersion;
+ (long long)maximumNumberOfActiveParticipants;
+ (long long)maximumNumberOfParticipants;
+ (_Bool)shouldUseCallKitForCallWithVideo:(_Bool)arg1 isGroupCall:(_Bool)arg2;
- (void).cxx_destruct;
- (void)abandonWebClientCall;
- (double)accelerationToDegree:(CDStruct_39925896)arg1;
- (void)accelerometerDidUpdateWithData:(id)arg1;
- (void)acceptCall:(int)arg1;
- (void)acceptPendingCallAndEndCurrentCall;
- (void)acceptUpgradeToVideoCall;
@property(retain, nonatomic) WACall *activeCall; // @synthesize activeCall=_activeCall;
- (void)addAudioSessionInterruptionObserver;
- (void)addCallEvent:(id)arg1;
- (void)addMissedCallWithCallID:(id)arg1 peerJID:(id)arg2 participantInfos:(id)arg3 isVideoCall:(_Bool)arg4 timestamp:(double)arg5 timeIntervalSinceCallOffer:(id)arg6 abTestBucket:(id)arg7 isGroupCall:(_Bool)arg8 groupJID:(id)arg9 isJoinableCall:(_Bool)arg10 suppressMissedCallCountUpdates:(_Bool)arg11;
- (void)addParticipantJID:(id)arg1;
- (void)addParticipantVideoView:(id)arg1 forParticipantJID:(id)arg2;
- (void)addXMPPConnectionObserver;
- (void)applicationWillSuspendOrTerminate:(id)arg1;
- (void)attachSelfVideoCaptureViewToParentView:(id)arg1;
- (void)attachUserRating:(int)arg1 problems:(unsigned long long)arg2 text:(id)arg3;
- (void)attemptOutgoingCellularVoiceCallWithPhoneURL:(id)arg1 fromViewController:(id)arg2;
- (void)attemptOutgoingVoiceCallWithJIDs:(id)arg1 callUISource:(int)arg2 withVideo:(_Bool)arg3;
- (void)attemptOutgoingVoiceCallWithJIDs:(id)arg1 callUISource:(int)arg2 withVideo:(_Bool)arg3 groupJID:(id)arg4;
@property(retain, nonatomic) WAIncomingCallVibrator *avSwitchVibrator; // @synthesize avSwitchVibrator=_avSwitchVibrator;
- (id)availableAudioRoutes;
@property _Bool badASN; // @synthesize badASN=_badASN;
@property(nonatomic) long long batteryLevelAtCallStart; // @synthesize batteryLevelAtCallStart=_batteryLevelAtCallStart;
- (void)blockCallerFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockedContactsListDidChange:(id)arg1;
@property(nonatomic) _Bool callConnected; // @synthesize callConnected=_callConnected;
@property(readonly, nonatomic) double callDuration;
@property(readonly, nonatomic) _Bool callEndedByUser;
- (void)callEnterBackground;
- (void)callEnterForeground;
- (_Bool)callFailed;
@property(readonly, nonatomic) _Bool callHasVideo;
@property(readonly, nonatomic) NSString *callID;
@property(copy, nonatomic) NSString *callIDFromOffer; // @synthesize callIDFromOffer=_callIDFromOffer;
@property(retain, nonatomic) WACallInfo *callInfo;
- (void)callInterruptionDidBegin:(id)arg1;
- (void)callInterruptionDidEnd:(id)arg1;
@property(readonly, nonatomic) WACallNotificationManager *callNotificationManager; // @synthesize callNotificationManager=_callNotificationManager;
@property(readonly, nonatomic) WACallProviderDelegate *callProviderDelegate; // @synthesize callProviderDelegate=_callProviderDelegate;
@property int callStartDelayInMilliseconds; // @synthesize callStartDelayInMilliseconds=_callStartDelayInMilliseconds;
@property int callState; // @synthesize callState=_callState;
@property(retain, nonatomic) WACallTonePlayer *callTonePlayer; // @synthesize callTonePlayer=_callTonePlayer;
- (void)callTonePlayer:(id)arg1 willPlaySystemSoundOfType:(unsigned long long)arg2;
- (void)cancelAllGroupCallInviteTimeouts;
- (void)cancelCallTimeout;
- (void)cancelCallUpgradeRequestTimeout;
- (void)cancelFetchOfferTimeout;
- (void)cancelGroupCallInviteTimeoutForParticipantJID:(id)arg1;
- (void)cancelInviteToParticipantJID:(id)arg1;
- (void)cancelSendOfferBlock;
- (void)cancelUpgradeToVideoCall:(_Bool)arg1;
- (void)captureSessionRuntimeError:(id)arg1;
- (void)cleanupZombieJoinableCallIfNeeded;
- (void)createAndSetupSelfVideo;
- (id)createEventFromFieldStats:(const CDStruct_e89ebb9d *)arg1;
- (id)currentActiveAudioRoute;
@property(readonly, nonatomic) _Bool currentCallWasPendingCall;
- (void)decryptRawe2eBytesAndReplaceFromStanza:(id)arg1 peerJID:(id)arg2 callID:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property _Bool defaultPortraitMode; // @synthesize defaultPortraitMode=_defaultPortraitMode;
@property(nonatomic) __weak id <WACallManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)descriptionOfAllPorts:(id)arg1;
- (void)destroyAllParticipantVideoViews;
- (void)destroyParticipantVideoViewForParticipantJID:(id)arg1;
- (void)destroyParticipantVideoViewIfEqualToVideoView:(id)arg1 forParticipantJID:(id)arg2;
- (void)destroySelfVideo;
- (void)destroyTerminatedParticipantViews;
- (void)deviceOrientationChanged:(long long)arg1;
- (void)didChangeToCallWaitingState:(unsigned long long)arg1;
- (void)didFailToAddParticipantJIDs:(id)arg1 error:(unsigned long long)arg2;
- (void)didFailToChangeToCallWaitingState:(unsigned long long)arg1;
- (void)didFailToEndCall;
- (void)dimScreenBrightnessForVideoCall;
@property double dimScreenInVideoCallPercentage; // @synthesize dimScreenInVideoCallPercentage=_dimScreenInVideoCallPercentage;
- (void)dismissCallView;
- (void)doVoIPInit;
- (void)e2eIdentityChanged:(id)arg1;
@property _Bool earlyCaptureSessionDisabled; // @synthesize earlyCaptureSessionDisabled=_earlyCaptureSessionDisabled;
@property _Bool enableCalleeMessageBuffer; // @synthesize enableCalleeMessageBuffer=_enableCalleeMessageBuffer;
@property _Bool enableCallerMessageBuffer; // @synthesize enableCallerMessageBuffer=_enableCallerMessageBuffer;
@property _Bool enableGcallCodecNego; // @synthesize enableGcallCodecNego=_enableGcallCodecNego;
@property _Bool enableVqm; // @synthesize enableVqm=_enableVqm;
- (void)encryptAndSendOffer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encryptAndSendRekey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encryptNode:(id)arg1 insertingInto:(id)arg2 toJID:(id)arg3 callID:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property _Bool endCallInProgress; // @synthesize endCallInProgress=_endCallInProgress;
- (void)endCallWithReason:(int)arg1;
- (void)endPendingCall;
- (void)endWACall:(id)arg1;
- (void)ensureVideoEnabledForVideoState:(unsigned long long)arg1 changedForPeer:(_Bool)arg2;
- (void)ensureVideoSubviewSet:(id)arg1 forParticipantJID:(id)arg2;
- (void)executeAfterPermissionsCheck:(CDUnknownBlockType)arg1;
- (void)executeCallTimeoutImmediately;
- (void)failCurrentCall;
- (void)failCurrentCallWithGenericError;
- (void)failCurrentCallWithGroupError:(unsigned long long)arg1;
- (void)failCurrentCallWithNackError:(unsigned long long)arg1;
- (void)flushSavedFieldStats;
- (void)forwardCallKeyToWebClientFromPeerJID:(const char *)arg1 callID:(const char *)arg2 e2eBytes:(const char *)arg3 e2eLength:(int)arg4;
- (void)forwardReKeyToWebClient:(id)arg1;
- (long long)getCallResultFromSavedFieldStats;
- (void)getEncryptionBytesFromEncryptionElement:(id)arg1 registrationElement:(id)arg2 peerJID:(id)arg3 callID:(id)arg4 deviceIdentity:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)getMessageIDFromPeerJID:(id)arg1 callID:(id)arg2;
- (id)getParticipantVideoViewForParticipantJID:(id)arg1;
- (long long)getRadioType;
- (_Bool)getVoipParamAsBool:(id)arg1;
- (int)getVoipParamAsInt:(id)arg1;
- (id)getVoipParamFromPath:(id)arg1;
- (void)groupInfoDidChange;
- (void)handleAudioSessionActivatedFromCallKitForIncomingCall:(id)arg1;
- (void)handleCallAcceptProcessed;
- (void)handleCallAcceptedFromCallKit:(id)arg1;
- (void)handleCallAck:(id)arg1;
- (void)handleCallInterruptionStateChanged:(int)arg1;
- (void)handleCallOfferProcessed;
- (void)handleCallOfferReceipt:(id)arg1;
- (void)handleCallRekeyReceipt:(id)arg1;
- (void)handleCallStanza:(id)arg1;
- (void)handleCallStateOnEnteringForeground;
- (void)handleCallTerminateProcessedForCallID:(id)arg1;
- (void)handleCallTerminatedByPeerInCallState:(int)arg1;
- (void)handleIncomingCallStanza:(id)arg1;
- (void)handlePeerRejectedCallWithReason:(unsigned long long)arg1 andJid:(id)arg2;
- (void)handlePeerVideoStateChanged:(unsigned long long)arg1;
- (void)handlePendingCallOnWebClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePendingCallTerminateProcessed:(id)arg1;
- (void)handleSelfVideoStateChanged:(unsigned long long)arg1;
- (void)handleSendCallStanzaTimeout:(id)arg1;
- (void)handleVideoCallUpgradeCompleted;
- (void)handleVideoStateError;
@property(readonly, nonatomic) _Bool hasPendingCall;
- (_Bool)hasVoipParam:(id)arg1;
@property int horizontalDegreeThreshold; // @synthesize horizontalDegreeThreshold=_horizontalDegreeThreshold;
- (id)incomingCallOfferForWebClientWithCallID:(id)arg1 hasBeenHandled:(_Bool *)arg2;
- (id)init;
- (void)initClientOptions;
- (void)initFieldStats;
- (void)initVideoState;
- (void)initVoipParams;
- (void)initializeCallStateWithVideo:(_Bool)arg1;
- (void)initializeTonePlayerIfNeccessary;
- (void)insertEncNodeInto:(id)arg1 toJID:(id)arg2 withDataToEncrypt:(id)arg3 retryCount:(unsigned int)arg4 callID:(id)arg5 completion:(CDUnknownBlockType)arg6;
@property _Bool interimCallPresent; // @synthesize interimCallPresent=_interimCallPresent;
- (void)internalAttemptOutgoingVoiceCallWithJIDs:(id)arg1 callUISource:(int)arg2 withVideo:(_Bool)arg3 groupJID:(id)arg4;
@property(readonly, nonatomic) _Bool isAlreadyInCall;
@property(readonly, nonatomic) _Bool isBadASN;
@property(readonly, nonatomic) _Bool isCallActive;
- (_Bool)isCallFull;
- (_Bool)isCallKitSupported;
@property(readonly, nonatomic) _Bool isCallStarted;
@property(readonly, nonatomic) _Bool isCellularCallActive;
@property(readonly, nonatomic) _Bool isChangingNumber;
@property(readonly, nonatomic) _Bool isGroupCallActive;
@property(readonly, nonatomic) _Bool isInitiatingCall;
- (_Bool)isInternetAvailable;
- (_Bool)isMuteWorkaroundEnabled;
- (_Bool)isOfferPreProcessed:(id)arg1;
- (_Bool)isSpam;
@property(readonly, nonatomic) _Bool isWebClientCallActive;
@property int landscapeModeThreshold; // @synthesize landscapeModeThreshold=_landscapeModeThreshold;
@property(retain, nonatomic) WACallInfo *lastCallInfo; // @synthesize lastCallInfo=_lastCallInfo;
- (void)logAudioRoutes;
- (void)logVoIP:(const char *)arg1 level:(int)arg2;
@property long long lonelyStateTimeout; // @synthesize lonelyStateTimeout=_lonelyStateTimeout;
- (void)markCachedIncomingCallOfferStanzaAsHandled:(id)arg1;
- (void)markCallAsTrusted;
- (void)modifyAndSendStanza:(id)arg1 toJID:(id)arg2 callID:(id)arg3;
- (void)modifyDestinationsStanza:(id)arg1 callID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mute:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property _Bool muteWorkaroundEnabled; // @synthesize muteWorkaroundEnabled=_muteWorkaroundEnabled;
@property(readonly, nonatomic) _Bool needsInterruption;
- (void)networkStatusDidChange:(id)arg1;
- (void)notifyBlockedNetwork;
- (void)notifyBlockedNetworkForPeerJID:(id)arg1;
- (void)notifyCallInProgressError;
- (void)notifyCallInProgressJoinableError;
- (void)notifyEndofOffline;
- (void)notifyFallbackToVoiceCall;
- (void)notifyIncompatibleNetwork;
- (void)notifyUncallableUserWithJID:(id)arg1 isVideoCall:(_Bool)arg2;
- (double)parseUserIdFromJID:(id)arg1;
@property(readonly, nonatomic) _Bool peerHasRequestedVideo;
@property(readonly, nonatomic) WAUserJID *peerJid;
- (id)peerParticipantsFromPushPayload:(id)arg1;
@property(nonatomic) _Bool pendingBackgroundCall; // @synthesize pendingBackgroundCall=_pendingBackgroundCall;
- (id)pendingCalls;
- (void)performSendOfferBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)playCallEndedSound;
- (void)playIncomingCallSound;
@property int portraitModeThreshold; // @synthesize portraitModeThreshold=_portraitModeThreshold;
- (void)preprocessAcceptStanza:(id)arg1;
- (void)preprocessOfferStanza:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preprocessRekeyStanza:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentAudioCallView;
- (void)presentAudioCallViewWithStateReset:(_Bool)arg1;
- (void)presentVideoCallView;
- (void)presentVideoCallViewWithStateReset:(_Bool)arg1;
- (void)processIncomingCallStanza:(id)arg1;
- (void)processOfflineOffer:(id)arg1 source:(unsigned long long)arg2;
- (void)processOfflineStanza:(id)arg1 source:(unsigned long long)arg2;
- (void)processOfflineTerminate:(id)arg1 source:(unsigned long long)arg2;
- (void)processPipModeChangeVideo:(_Bool)arg1;
- (_Bool)processRetryReceiptForPeerJID:(id)arg1 callID:(id)arg2 registrationID:(unsigned int)arg3 retryCount:(unsigned char)arg4;
- (void)reallyAcceptCall;
- (void)reallyAcceptUpgradeToVideoCall;
- (void)reallyRequestUpgradeToVideoCall;
- (void)receiptOrAckStanza:(id)arg1;
- (void)registerCallbacks;
- (void)rejectCallWithReason:(int)arg1 fromUIAction:(int)arg2;
- (void)rejectCallwithRejectMessage:(id)arg1 stanza:(id)arg2;
- (void)rejectUpgradeToVideoCall:(_Bool)arg1;
- (void)rejoinCallWithJoinableWithJoinableCallEvent:(id)arg1 entryPoint:(int)arg2;
@property(nonatomic) _Bool relayBindsFailed; // @synthesize relayBindsFailed=_relayBindsFailed;
- (void)removeAudioSessionInterrptionObserver;
- (void)removeNonPendingCalls;
- (void)reportCallAndBlockContact:(_Bool)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportEndedCallIDWithCachedReason:(id)arg1;
- (void)reportIncomingCallFromPushPayload:(id)arg1;
- (void)requestUpgradeToVideoCall;
- (void)requestUpgradeToVideoCallWithCameraPermission;
- (void)restorePreviousAudioCategory;
- (void)restoreScreenBrightness;
- (void)routeAudioToOutputRoute:(id)arg1;
- (void)saveApplicationSettings;
- (void)saveFieldStats:(const CDStruct_e89ebb9d *)arg1;
- (id)saveRandomIdIfNecssary:(id)arg1 joinableCallEvent:(id)arg2;
@property(copy, nonatomic) NSNumber *secondsSinceCallOffer; // @synthesize secondsSinceCallOffer=_secondsSinceCallOffer;
@property(retain, nonatomic) WAVideoCaptureView *selfVideoCaptureView; // @synthesize selfVideoCaptureView=_selfVideoCaptureView;
- (void)sendAckForTerminate:(id)arg1;
- (void)sendCallStanza:(id)arg1 verifyDuration:(_Bool)arg2;
- (void)sendReceiptForReKeyStanza:(id)arg1 decryptionFailed:(_Bool)arg2;
- (void)sendRekeyReceiptAfterDecryptionForStanza:(id)arg1;
- (void)sendStanza:(id)arg1 forCallID:(id)arg2 toJID:(id)arg3 afterDelay:(int)arg4;
- (void)sendStanza:(id)arg1 withEncryptMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setABTestForCrashLog:(id)arg1;
- (void)setCallCreatorWithJIDFormat:(id)arg1;
- (_Bool)setCallDurationForStanza:(id)arg1 withCallInfo:(id)arg2;
- (void)setCallIDForCrashLog:(id)arg1;
- (void)setCallMaximizedWithAnimation:(_Bool)arg1;
- (void)setCallStateConnectedIfNeeded;
- (void)setCallType:(unsigned long long)arg1 forCallID:(id)arg2;
- (void)setEncryptionElementForStanza:(id)arg1 encryptionBytes:(id)arg2 encryptionType:(id)arg3 retryCount:(int)arg4;
- (void)setMuteSelected:(_Bool)arg1;
- (void)setNeedsUninitializeCallState;
- (void)setSelfVideoPreviewOrientation:(long long)arg1;
@property _Bool shouldShowVoipAppUpdatePrompt; // @synthesize shouldShowVoipAppUpdatePrompt=_shouldShowVoipAppUpdatePrompt;
@property _Bool shouldUploadLogs; // @synthesize shouldUploadLogs=_shouldUploadLogs;
@property long long showRatingIntervalInSeconds; // @synthesize showRatingIntervalInSeconds=_showRatingIntervalInSeconds;
@property _Bool showRatingScreenForCall; // @synthesize showRatingScreenForCall=_showRatingScreenForCall;
@property long long spamCallThresholdSeconds; // @synthesize spamCallThresholdSeconds=_spamCallThresholdSeconds;
@property _Bool uploadFieldStatsAtCallEnd; // @synthesize uploadFieldStatsAtCallEnd=_uploadFieldStatsAtCallEnd;
@property(nonatomic) long long videoMaximizedCount; // @synthesize videoMaximizedCount=_videoMaximizedCount;
@property(retain, nonatomic) WACallVoipBridge *voipBridge; // @synthesize voipBridge=_voipBridge;
- (void)setupForRejoiningCall;
- (void)setupSelfVideo;
- (void)setupWatchdog;
- (_Bool)shouldGetRating;
- (_Bool)shouldProcessOffer:(id)arg1 withTerminatedCall:(id)arg2;
- (_Bool)shouldRejectOfferStanza:(id)arg1 decryptionFailed:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldShowAppUpdateScreenForCall;
- (_Bool)shouldShowRatingScreenForCall;
- (_Bool)shouldShowSpamReportView;
- (_Bool)shouldUpdateVoipParamsForCallAckStanza:(id)arg1;
- (void)showAlertView:(id)arg1;
- (void)showCallFailureErrorWithTitle:(id)arg1 message:(id)arg2;
- (void)showNetworkFailureAlerts;
- (void)showedAppUpdateDialogForCall;
- (void)showedRatingScreenForCall;
- (void)startCallTimeout:(double)arg1;
- (void)startCallTimeoutBlock:(double)arg1;
- (void)startCallTimeoutCappedAtRemainingBackgroundTime:(double)arg1;
- (void)startCallUpgradeRequestTimeout:(double)arg1;
- (void)startGroupCallInviteTimeout:(double)arg1 forParticipantJID:(id)arg2;
- (void)startOrientationMonitoring;
- (void)startOutgoingCallWith:(id)arg1 withVideo:(_Bool)arg2 groupJID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startVoipAudioSessionIfNecessaryForVideoCall:(_Bool)arg1 isGroupCall:(_Bool)arg2;
- (void)stopIncomingCallSound;
- (void)stopOrientationMonitoring;
- (void)submitFieldStats:(const CDStruct_e89ebb9d *)arg1 withRandomID:(id)arg2;
- (void)submitFieldStatsEvent:(id)arg1 withRandomID:(id)arg2;
- (void)submitFieldStatsForJoinableMissedCall:(_Bool)arg1 isRering:(_Bool)arg2 isGroupJoinableCall:(_Bool)arg3 numOfConnectedPeers:(unsigned long long)arg4 randomID:(id)arg5;
- (void)submitFieldStatsForMissedIncomingCall:(id)arg1 abTestBucket:(id)arg2 isVideoCall:(_Bool)arg3 isGroupCall:(_Bool)arg4 isJoinable:(_Bool)arg5 randomID:(id)arg6;
- (void)submitJoinableFieldStatsEvents:(id)arg1 withRandomID:(id)arg2;
- (void)submitJoinableStats:(const CDStruct_bf2b3f8b *)arg1 withRandomID:(id)arg2;
- (void)submitSavedFieldStatsWithUserRating:(int)arg1 problems:(unsigned long long)arg2 text:(id)arg3;
- (void)submitSavedFieldStatsWithoutUserRating;
- (void)switchCamera;
- (void)timeoutPendingCall;
- (unsigned long long)toneTypeForIncomingCall;
- (void)triggerCompletionBlock:(CDUnknownBlockType)arg1 withResultCode:(long long)arg2;
- (void)turnCameraOff;
- (void)turnCameraOn;
- (void)uninitializeCallStateIfNeeded;
- (void)updateCallKitParticipants;
- (void)updateCallWithCallOfferStanza:(id)arg1;
- (void)updateCallsForEndingCallEvent;
- (void)updateNetworkMedium;
- (void)updateVideoPausedState;
- (void)updateVoipParams;
- (struct CGSize)videoSizeForParticipant:(id)arg1;
- (void)videoStateDidChangeToVideoRequestOutgoing:(_Bool)arg1;
- (void)voipBridgeCallIsEndingWithCallEvent:(id)arg1 shouldAddEvent:(_Bool)arg2 showRatingInterval:(double)arg3 callID:(id)arg4;
- (void)voipBridgeDidAckCallOffer;
- (void)voipBridgeDidChangeGroupInfo;
- (void)voipBridgeDidChangeToCallState:(int)arg1 fromCallState:(int)arg2 processedElsewhere:(_Bool)arg3;
- (void)voipBridgeDidChangeToCallWaitingState:(unsigned long long)arg1;
- (void)voipBridgeDidCreateSoundPort;
- (void)voipBridgeDidCreateVideoRenderView:(id)arg1 forParticipantJID:(id)arg2;
- (void)voipBridgeDidFailRelayBindsWithBadASN:(_Bool)arg1;
- (void)voipBridgeDidFailToAcceptVideoUpgradeRequest;
- (void)voipBridgeDidFailToAddParticipantJID:(id)arg1 error:(unsigned long long)arg2;
- (void)voipBridgeDidFailToCancelVideoUpgradeRequest;
- (void)voipBridgeDidFailToChangeToCallWaitingState:(unsigned long long)arg1;
- (void)voipBridgeDidFailToCreateVideoRenderView;
- (void)voipBridgeDidFailToCreateVideoStream;
- (void)voipBridgeDidFailToDecryptWithPeerJID:(id)arg1 callID:(id)arg2 registrationID:(unsigned int)arg3 retryCount:(unsigned char)arg4;
- (void)voipBridgeDidFailToEndCall;
- (void)voipBridgeDidFailToProcessAcceptAckWithCode:(int)arg1 rawJid:(id)arg2;
- (void)voipBridgeDidFailToProcessOfferAck;
- (void)voipBridgeDidFailToProcessPreaccept;
- (void)voipBridgeDidFailToRejectVideoUpgradeRequest;
- (void)voipBridgeDidFailToRejoinCall;
- (void)voipBridgeDidFinishProcessOffer;
- (void)voipBridgeDidNackCallOfferWithGenericError;
- (void)voipBridgeDidNackCallOfferWithGroupCallError:(unsigned long long)arg1 withJIDs:(id)arg2;
- (void)voipBridgeDidNackCallOfferWithNackError:(unsigned long long)arg1 withJIDs:(id)arg2;
- (void)voipBridgeDidReceiveAutoRejectCallWithCallID:(id)arg1;
- (void)voipBridgeDidReceiveByeSignal;
- (void)voipBridgeDidReceiveGenericMediaFailure;
- (void)voipBridgeDidReceiveLowBatteryWarning;
- (void)voipBridgeDidReceiveLowBatteryWarningForPeerJID:(id)arg1;
- (void)voipBridgeDidReceiveMissedCallFromJID:(id)arg1 videoCall:(_Bool)arg2 timeIntervalSinceCallOffer:(double)arg3 participantInfos:(id)arg4 abTestBucket:(id)arg5 groupCall:(_Bool)arg6 callID:(id)arg7 isJoinableCall:(_Bool)arg8;
- (void)voipBridgeDidReceivePreaccept;
- (void)voipBridgeDidReceiveTerminateForCall:(id)arg1 fromCarrierBlock:(_Bool)arg2;
- (void)voipBridgeDidRequestDeviceSyncWithUsers:(id)arg1;
- (void)voipBridgeDidRequestGroupUpdateJoinableCallLogWithCallID:(id)arg1 participantJIDs:(id)arg2;
- (void)voipBridgeDidRequestTerminateJoinableCallLogWithCallID:(id)arg1;
- (void)voipBridgeDidRequestToPlaySoundOfType:(unsigned long long)arg1;
- (void)voipBridgeDidRequestVoipParamsProcessForStanza:(id)arg1;
- (void)voipBridgeDidSwitchFromWiFiToCellular;
- (void)voipBridgeDidTimeoutPacketStream;
- (void)voipBridgeDidUpdateToCallInfo:(id)arg1;
- (void)voipBridgeHandleCallFatal:(int)arg1;
- (void)voipBridgeParticipantJID:(id)arg1 didLeaveGroupCallWithReason:(unsigned long long)arg2;
- (void)voipBridgeParticipantJID:(id)arg1 didRejectWithReason:(unsigned long long)arg2;
- (void)voipBridgePeerDidChangeToVideoState:(unsigned long long)arg1;
- (void)voipBridgePreprocessStanza:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)voipBridgeSelfDidChangeToVideoState:(unsigned long long)arg1;
- (_Bool)voipBridgeShouldPreprocessStanza:(id)arg1;
- (void)voipBridgeVideoCodecMismatch;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *voipQueue; // @synthesize voipQueue=_voipQueue;
- (void)waitFetchOfferTimeout:(double)arg1 forCallID:(id)arg2;
- (id)webCallOfferFromOffer:(id)arg1;
- (void)webClientDidActivateOrRejectCall;
- (void)webClientDidEndCallWithCallID:(id)arg1 callEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)webClientDidRelayCallOffer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)webClientDidRelayCallStanza:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)webClientDidRelayRekey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)webClientDidRequestAction:(unsigned long long)arg1 onCall:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)xmppConnectionStateDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

