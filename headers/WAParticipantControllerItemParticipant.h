//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAParticipantControllerItem.h"

@class WAGroupMember;

@interface WAParticipantControllerItemParticipant : WAParticipantControllerItem
{
}

- (id)description;
- (unsigned long long)hash;
- (id)initWithGroupParticipant:(id)arg1;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WAGroupMember *participant; // @dynamic participant;

@end

