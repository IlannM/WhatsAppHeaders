//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIImageView, WAContact, WAMessage, WAMessageAttributedTextSliceLink, WAMessageContainerSliceView, WANativeFlowButtonDescriptor, WAProductDescriptor;

@protocol WAMessageContainerSliceViewDelegate <NSObject>
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestDeleteMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestEmbeddedPlayerForAdReplyInfoInMessage:(WAMessage *)arg2 fromThumbView:(UIImageView *)arg3;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestEmbeddedPlayerForMessage:(WAMessage *)arg2 fromThumbView:(UIImageView *)arg3;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestForwardMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestHandleCatalogURL:(NSURL *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestHandleLink:(WAMessageAttributedTextSliceLink *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestHandlePhoneURL:(NSURL *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestHandleStickerPackURL:(NSURL *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestHandleWebsiteURL:(NSURL *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestInfoForMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestInviteContact:(WAContact *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestLabelMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestMessageContact:(WAContact *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestNativeFlowForMessage:(WAMessage *)arg2 buttonDescriptor:(WANativeFlowButtonDescriptor *)arg3;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestOpenURLForExternalAdReplyInfoInMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestReplyToMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestSaveContact:(WAContact *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestShowAllContacts:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestShowOptionsForLink:(WAMessageAttributedTextSliceLink *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestStarMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestUnstarMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestViewBusinessContact:(WAContact *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestViewIDForMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestViewInviteWithMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestViewListForListMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestViewOrderForMessage:(WAMessage *)arg2;
- (void)messageContainerSliceView:(WAMessageContainerSliceView *)arg1 didRequestViewProduct:(WAProductDescriptor *)arg2;
- (void)messageContainerSliceViewDidAcceptCollectRequest:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidAcceptPayment:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidChangePlaybackRate:(WAMessageContainerSliceView *)arg1 rate:(double)arg2;
- (void)messageContainerSliceViewDidDeclineCollectRequest:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidInvalidateLayout:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidRequestAccessibilityUpdate:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidRequestStartNetworkTransfer:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidRequestStartPlayback:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidRequestStopLocationSharing:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidRequestStopNetworkTransfer:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidRequestStopPlayback:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidRequestViewLiveLocation:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidSendAgainPayment:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidSendPayment:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewDidSetUpPaymentAccount:(WAMessageContainerSliceView *)arg1;
- (void)messageContainerSliceViewNeedsVoiceOverUpdate:(WAMessageContainerSliceView *)arg1;
- (unsigned long long)presentationContextForMessageContainerSliceView:(WAMessageContainerSliceView *)arg1;
- (_Bool)shouldAllowReplyToMessageFromMessageContainerSliceView:(WAMessageContainerSliceView *)arg1;
- (_Bool)shouldAllowShowMessageInfoFromMessageContainerSliceView:(WAMessageContainerSliceView *)arg1;
@end

