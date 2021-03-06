//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/XMPPRequest.h>

@interface XMPPRequestGetProfilePicture2 : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithJID:(id)arg1 groupAddRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithJID:(id)arg1 groupInviteCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithJID:(id)arg1 pictureType:(unsigned long long)arg2 currentIdentifier:(id)arg3 groupInviteCode:(id)arg4 groupAddRequest:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithJID:(id)arg1 pictureType:(unsigned long long)arg2 currentIdentifier:(id)arg3 retryCount:(long long)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

