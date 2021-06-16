//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, UIImage, UIView, WAMessageContainerMetrics, WAReplyButtonsCellViewModel;

@interface WAReplyButtonsCell : UITableViewCell
{
    NSArray *_replyButtons;
    NSArray *_backgroundImageViews;
    WAMessageContainerMetrics *_metrics;
    UIView *_buttonsContainer;
    UIImage *_bubbleImage;
    struct UIEdgeInsets _bubbleInsets;
    _Bool _isRTL;
    NSLayoutConstraint *_buttonsContainerLeadingEdgeConstraint;
    NSLayoutConstraint *_buttonsContainerWidthConstraint;
    WAReplyButtonsCellViewModel *_viewModel;
}

+ (double)buttonsMargin;
+ (double)buttonsMinHeight;
+ (double)minimumWidth;
+ (double)sharedMargin;
- (void).cxx_destruct;
- (void)addConstraintsForImageView:(id)arg1 toButton:(id)arg2;
- (void)configureReplyButtonsWithViewModel:(id)arg1 isEditingMode:(_Bool)arg2;
- (void)didEndDisplay;
- (void)didTapReplyButton:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)tableViewDidFinishEditModeNotification;
- (void)tableViewDidStartEditModeNotification;
- (void)updateLeadingMargin:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) WAReplyButtonsCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)willBeginDisplayWithDelegate:(id)arg1;

@end
