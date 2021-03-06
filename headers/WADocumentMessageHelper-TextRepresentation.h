//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WADocumentMessageHelper.h>

@interface WADocumentMessageHelper (TextRepresentation)
+ (id)footerAttributedTextWithFont:(id)arg1 forMessage:(id)arg2;
+ (id)formattedStringWithVoiceOverContentOnlyForMessageProtocol:(id)arg1;
+ (id)formattedStringWithVoiceOverSummaryForMessage:(id)arg1 groupParticipantOnly:(_Bool)arg2;
+ (id)fullImageFromURL:(id)arg1 ofType:(id)arg2;
+ (void)loadDocumentThumbnailForMessage:(id)arg1 placeholderHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)needsImageLoader;
+ (double)preferredThumbnailWidthInPixelsForChat;
+ (_Bool)presentDocumentViewControllerIfPossibleForMessage:(id)arg1 fromViewController:(id)arg2;
+ (id)stringComponentsForExportForMessage:(id)arg1 withSenderName:(_Bool)arg2 context:(unsigned long long)arg3;
+ (id)stringRepresentationForChatForMessage:(id)arg1;
+ (id)stringRepresentationForReplyForMessage:(id)arg1;
- (id)activityItemSubjectText;
- (double)blurredImageMaximumWidth;
- (CDUnknownBlockType)exportMediaActivityItemDeferredAction;
- (id)highResSmallImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)mediaActivityItemPlaceholderWithInternalReference:(_Bool *)arg1;
- (id)newImageLoaderInfo;
- (_Bool)requiresNetworkFetchForLargeImageWithInfo:(id)arg1;
- (_Bool)shouldCacheLargeTransformedImage:(id)arg1 fromOriginalImage:(id)arg2 info:(id)arg3;
- (id)smallImageForMessageImageLoaderWithInfo:(id)arg1;
@end

