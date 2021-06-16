//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAChatSessionPersistentNotificationContentView.h"

#import "WAExpandingTextViewControllerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, WAExpandingTextViewController;

@interface WAChatSessionPersistentNotificationExpandingTextContentView : WAChatSessionPersistentNotificationContentView <WAExpandingTextViewControllerDelegate>
{
    WAExpandingTextViewController *_descriptionController;
    NSLayoutConstraint *_descriptionHeightConstraint;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *expandPrompt;
- (void)expandingTextViewControllerExpandedStateDidChange:(id)arg1;
- (void)expandingTextViewControllerHeightDidChange:(id)arg1;
- (id)fontColor;
- (void)fontSizeDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)minimizeDescription;
- (void)parentViewControllerDidDisappear;
- (void)parentViewControllerWillBeginInteraction;
- (double)preferredDismissButtonHeight;
- (void)setEnableLinksInText:(_Bool)arg1;
- (void)setText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)text;
- (_Bool)viewWasTapped:(id)arg1;

@end

