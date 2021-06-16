//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADraggableInputView.h"

@class UIButton, UITextView;

@interface WAExampleInputView : WADraggableInputView
{
    UITextView *_textView;
    UIButton *_redButton;
    UIButton *_greenButton;
    long long _lineCount;
}

- (void).cxx_destruct;
- (void)addLine:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)inputViewResponders;
- (void)layoutSubviews;
- (double)preferredHeightForLayoutWidth:(double)arg1;
- (void)removeLine:(id)arg1;

@end
