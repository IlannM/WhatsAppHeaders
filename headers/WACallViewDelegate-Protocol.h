//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WACallButtonsView, WACallView, WAUserJID;

@protocol WACallViewDelegate <NSObject>
- (void)callButtonsViewDidRequestAcceptOrEndCall:(WACallButtonsView *)arg1;
- (void)callView:(WACallView *)arg1 didCancelCallToParticipantJID:(WAUserJID *)arg2;
- (_Bool)callViewDidGetSelectedByVoiceOver:(WACallView *)arg1;
- (void)callViewDidRequestAcceptOrEndCall:(WACallView *)arg1;
- (void)callViewDidShowContentView:(WACallView *)arg1;
- (_Bool)callViewShouldAllowMinimization:(WACallView *)arg1;
- (void)callViewWillHideContentView:(WACallView *)arg1;
@end

