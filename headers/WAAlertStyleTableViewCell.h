//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface WAAlertStyleTableViewCell : UITableViewCell
{
    _Bool _disabled;
    unsigned long long _selectedAlertStyle;
    CDUnknownBlockType _handler;
    UIView *_containerView1;
    UIImageView *_imageView1;
    UIView *_outline1;
    UILabel *_label1;
    UIView *_containerView2;
    UIView *_outline2;
    UIImageView *_imageView2;
    UILabel *_label2;
    UIView *_containerView3;
    UIImageView *_imageView3;
    UIView *_outline3;
    UILabel *_label3;
}

+ (id)cell;
- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UIView *containerView1; // @synthesize containerView1=_containerView1;
@property(nonatomic) __weak UIView *containerView2; // @synthesize containerView2=_containerView2;
@property(nonatomic) __weak UIView *containerView3; // @synthesize containerView3=_containerView3;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak UIImageView *imageView1; // @synthesize imageView1=_imageView1;
@property(nonatomic) __weak UIImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(nonatomic) __weak UIImageView *imageView3; // @synthesize imageView3=_imageView3;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak UILabel *label1; // @synthesize label1=_label1;
@property(nonatomic) __weak UILabel *label2; // @synthesize label2=_label2;
@property(nonatomic) __weak UILabel *label3; // @synthesize label3=_label3;
- (void)layoutSubviews;
- (void)optionViewTapped:(id)arg1;
@property(nonatomic) __weak UIView *outline1; // @synthesize outline1=_outline1;
@property(nonatomic) __weak UIView *outline2; // @synthesize outline2=_outline2;
@property(nonatomic) __weak UIView *outline3; // @synthesize outline3=_outline3;
@property(nonatomic) unsigned long long selectedAlertStyle; // @synthesize selectedAlertStyle=_selectedAlertStyle;
- (void)setupAccessibilityForContainerView:(id)arg1 isSelected:(_Bool)arg2;
- (void)styleLabel:(id)arg1 forAlertStyle:(unsigned long long)arg2;
- (void)tintColorDidChange;
- (void)updateSelectionState;

@end

