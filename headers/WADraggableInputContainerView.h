//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WADraggableInputContainerViewDelegate;

@interface WADraggableInputContainerView : UIView
{
    id <WADraggableInputContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WADraggableInputContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)preferredHeightForLayoutWidth:(double)arg1;
- (void)safeAreaInsetsDidChange;

@end

