//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/XMPPRequest.h>

@interface XMPPRequestLocationSharing : XMPPRequest
{
    _Bool _includeMessageInParticipantInfo;
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithChatJID:(id)arg1 reportParticipants:(_Bool)arg2 includeMessageInParticipantInfo:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

