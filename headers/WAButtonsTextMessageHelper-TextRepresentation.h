//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAButtonsTextMessageHelper.h>

@interface WAButtonsTextMessageHelper (TextRepresentation)
+ (_Bool)canCopyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
+ (void)copyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
+ (id)footerAttributedTextWithFont:(id)arg1 forMessage:(id)arg2;
+ (id)stringComponentsForExportForMessage:(id)arg1 withSenderName:(_Bool)arg2 context:(unsigned long long)arg3;
+ (id)stringRepresentationForChatForMessage:(id)arg1;
+ (id)stringRepresentationForReplyForMessage:(id)arg1;
+ (id)titleAttributedTextForMessage:(id)arg1;
+ (id)voiceOverAttributedTextForMessage:(id)arg1;
@end

