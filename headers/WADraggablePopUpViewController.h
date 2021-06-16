//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIButton, UIScrollView, UIView;
@protocol WADraggablePopUpViewControllerDelegate;

@interface WADraggablePopUpViewController : WAViewController <UIScrollViewDelegate>
{
    UIButton *_closeButton;
    UIView *_containerView;
    _Bool _layoutInProgress;
    id <WADraggablePopUpViewControllerDelegate> _draggableDelegate;
    UIScrollView *_draggingScrollView;
    UIView *_contentView;
}

- (void).cxx_destruct;
- (void)actionButton;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dismiss;
- (void)dismissIfNeeded;
@property(nonatomic) __weak id <WADraggablePopUpViewControllerDelegate> draggableDelegate; // @synthesize draggableDelegate=_draggableDelegate;
@property(readonly, nonatomic) UIScrollView *draggingScrollView; // @synthesize draggingScrollView=_draggingScrollView;
- (void)resignAllFirstResponders;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCloseButtonAccessibilityLabel:(id)arg1;
- (void)updateScrollViewLayout;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

