//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAChatSessionTransaction.h"

@interface WAChatSessionNormalTransaction : WAChatSessionTransaction
{
}

- (void)didInsertChatSession;
- (_Bool)markArchived:(_Bool)arg1;
- (_Bool)markHidden:(_Bool)arg1;
- (void)markRemoved;
- (_Bool)performActionAffectingChatBarUnreadCount:(CDUnknownBlockType)arg1;
- (_Bool)setUnreadCount:(int)arg1;
- (void)updateChatSessionWithMessage:(id)arg1;

@end

