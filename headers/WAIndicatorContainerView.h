//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface WAIndicatorContainerView : UIView
{
    MISSING_TYPE *contentView;
    MISSING_TYPE *unreadBadgeView;
    MISSING_TYPE *mentionsBadgeView;
    MISSING_TYPE *muteBadgeView;
    MISSING_TYPE *pinnedBadgeView;
    MISSING_TYPE *contentViewWidthConstraint;
    MISSING_TYPE *pinnedToMentionedConstraint;
    MISSING_TYPE *pinnedToUnreadConstraint;
    MISSING_TYPE *pinnedToEdgeConstraint;
    MISSING_TYPE *mentionedToUnreadConstraint;
    MISSING_TYPE *mentionedToEdgeConstraint;
    MISSING_TYPE *muteToPinnedConstraint;
    MISSING_TYPE *muteToMentionedConstraint;
    MISSING_TYPE *muteToUnreadConstraint;
    MISSING_TYPE *muteToEdgeConstraint;
    MISSING_TYPE *isPinned;
    MISSING_TYPE *isMuted;
    MISSING_TYPE *isMentioned;
    MISSING_TYPE *unreadCount;
    MISSING_TYPE *iconColor;
    MISSING_TYPE *highlighted;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)reloadFonts;
- (void)setStateWithPinned:(_Bool)arg1 muted:(_Bool)arg2 mentioned:(_Bool)arg3 unreadCount:(long long)arg4 animated:(_Bool)arg5;

@end

