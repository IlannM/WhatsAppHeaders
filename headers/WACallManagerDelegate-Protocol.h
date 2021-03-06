//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WAAlertViewPresenter, WACallManager, WACallSingleVideoView, WAUserJID;

@protocol WACallManagerDelegate <NSObject>
- (void)callManager:(WACallManager *)arg1 didAddNewParticipantJID:(WAUserJID *)arg2;
- (void)callManager:(WACallManager *)arg1 didChangeState:(int)arg2;
- (void)callManager:(WACallManager *)arg1 didEndCallWithParticipantJIDs:(NSArray *)arg2 forReason:(unsigned long long)arg3 clearParticipants:(_Bool)arg4;
- (void)callManager:(WACallManager *)arg1 didRequestMaximizeWithAnimation:(_Bool)arg2;
- (void)callManager:(WACallManager *)arg1 didSetMuteSelected:(_Bool)arg2;
- (void)callManager:(WACallManager *)arg1 endedCallWithReason:(int)arg2;
- (WACallSingleVideoView *)callManager:(WACallManager *)arg1 needsMaximizedViewForJID:(WAUserJID *)arg2;
- (void)callManager:(WACallManager *)arg1 needsToShowCallFailureErrorWithTitle:(NSString *)arg2 message:(NSString *)arg3;
- (void)callManager:(WACallManager *)arg1 peerWithJid:(WAUserJID *)arg2 rejectedCallWithReason:(unsigned long long)arg3;
- (_Bool)callManager:(WACallManager *)arg1 willTryToShowAlertView:(WAAlertViewPresenter *)arg2;
- (void)callManagerDidChangeGroupInfo:(WACallManager *)arg1;
- (void)callManagerDidChangePeerVideoState:(WACallManager *)arg1;
- (void)callManagerDidChangeSelfVideoState:(WACallManager *)arg1;
- (void)callManagerDidRequestDisableButtons:(WACallManager *)arg1;
- (void)callManagerDidRequestEnableButtons:(WACallManager *)arg1;
- (void)callManagerDidRequestVideoCallInterface:(WACallManager *)arg1 shouldResetVideoState:(_Bool)arg2;
- (void)callManagerDidRequestVoiceCallInterface:(WACallManager *)arg1 shouldResetVideoState:(_Bool)arg2;
- (void)callManagerDidSwitchCall:(WACallManager *)arg1 outgoing:(_Bool)arg2;
- (void)callManagerDidSwitchWeakWiFiToCellular:(WACallManager *)arg1;
- (void)callManagerDidUpdateVideoSubview:(WACallManager *)arg1;
@end

