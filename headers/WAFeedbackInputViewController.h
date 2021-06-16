//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel, UITextView;
@protocol WAFeedbackInputControllerDelegate;

@interface WAFeedbackInputViewController : WAViewController <UITextViewDelegate>
{
    _Bool _animateKeyboardSizeChanges;
    id <WAFeedbackInputControllerDelegate> _delegate;
    UITextView *_textView;
    UILabel *_titleText;
    UILabel *_placeholderText;
    UILabel *_footerText;
    UIImageView *_sadSmileyFace;
    NSArray *_separators;
    NSArray *_separatorHeights;
    NSLayoutConstraint *_footerViewBottomMargin;
}

+ (id)controllerWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)cancelAction:(id)arg1;
@property(nonatomic) __weak id <WAFeedbackInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UILabel *footerText; // @synthesize footerText=_footerText;
@property(nonatomic) __weak NSLayoutConstraint *footerViewBottomMargin; // @synthesize footerViewBottomMargin=_footerViewBottomMargin;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)nextAction:(id)arg1;
@property(nonatomic) __weak UILabel *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) __weak UIImageView *sadSmileyFace; // @synthesize sadSmileyFace=_sadSmileyFace;
@property(copy, nonatomic) NSArray *separatorHeights; // @synthesize separatorHeights=_separatorHeights;
@property(copy, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UILabel *titleText; // @synthesize titleText=_titleText;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateLayoutWithKeyboardHeight:(double)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

