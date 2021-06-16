//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WACustomSwipeActionTableViewCell.h"

@class NSLayoutConstraint, UILabel, UIView, WABadgedLabel, WAChatSession, WAStatusThumbnailView;

@interface WAStatusChatSessionCell : WACustomSwipeActionTableViewCell
{
    UIView *_textContainerView;
    WAStatusThumbnailView *_thumbnail;
    WABadgedLabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_subtitleInsetConstraint;
    double _currentFontSize;
    WAChatSession *_chatSession;
}

+ (id)cellWithReuseIdentifier:(id)arg1;
+ (double)preferredHeight;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
@property(retain, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (id)currentSubtitleFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)isAccessibilityElement;
- (_Bool)isMuted;
- (void)layoutUntransformedSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)textForSubtitle;
@property(readonly, nonatomic) WAStatusThumbnailView *thumbnail;
- (void)update;
- (void)updateSeparatorInset;
- (void)updateSubtitleLabel;
- (void)updateTitleLabel;

@end

