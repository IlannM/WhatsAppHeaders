//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/XMPPRequest.h>

@interface XMPPSetQRCodeRequest : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithMessageCode:(id)arg1 updateMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithType:(unsigned long long)arg1 shouldInvalidateCode:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

