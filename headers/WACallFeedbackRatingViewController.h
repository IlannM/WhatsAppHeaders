//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WADialogViewController.h>

@class WACallFeedbackRatingHeaderView;
@protocol WACallFeedbackRatingViewControllerDelegate;

@interface WACallFeedbackRatingViewController : WADialogViewController
{
    _Bool _keyboardShown;
    WACallFeedbackRatingHeaderView *_headerView;
    id <WACallFeedbackRatingViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id <WACallFeedbackRatingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 isVideoCall:(_Bool)arg2;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)moveContentViewOnKeyboardNotification:(id)arg1;

@end

