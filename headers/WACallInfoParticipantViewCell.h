//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIColor, UIView, UIVisualEffectView, WAProfilePictureDynamicThumbnailView, WAUserJID;
@protocol WACallInfoParticipantViewCellDelegate, WACallViewFloatingViewDelegate;

@interface WACallInfoParticipantViewCell : UITableViewCell
{
    WAProfilePictureDynamicThumbnailView *_profilePictureView;
    UIView *_iconView;
    _Bool _grayOut;
    _Bool _showCheckmark;
    UIColor *_textColor;
    unsigned long long _cellIcon;
    UIVisualEffectView *_blurEffectView;
    _Bool _isAnimating;
    NSMutableArray *_iconAndTrailingTextConstraints;
    _Bool _detached;
    WAUserJID *_participantJID;
    unsigned long long _participantState;
    int _callState;
    id <WACallViewFloatingViewDelegate> _detachedDelegate;
    id <WACallInfoParticipantViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)animateBackground;
- (void)animateIfNeeded;
- (void)animateInAddedParticipant;
- (void)animateOutAddedParticipantWithDelay:(double)arg1;
@property(readonly, nonatomic) int callState; // @synthesize callState=_callState;
@property(nonatomic) __weak id <WACallInfoParticipantViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WACallViewFloatingViewDelegate> detachedDelegate; // @synthesize detachedDelegate=_detachedDelegate;
- (void)didTapDetachedView:(id)arg1;
- (void)didTapRing:(id)arg1;
- (id)initWithAddedParticpant:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
@property(readonly, nonatomic) WAUserJID *participantJID;
@property(readonly, nonatomic) unsigned long long participantState; // @synthesize participantState=_participantState;
- (void)prepareForReuse;
- (void)restartAnimatingForInvite;
- (void)setBaseTextColor:(id)arg1;
- (void)setCellIcon:(unsigned long long)arg1;
- (void)setGrayOut:(_Bool)arg1;
- (void)setParticipantJID:(id)arg1;
- (void)setupConstraints;
- (void)startAnimatingForInvite;
- (void)startAnimatingIcon;
- (void)stopAnimatingForInvite;
- (void)updateSeparatorInset;
- (void)updateWithCallState:(int)arg1 participantJID:(id)arg2 participantState:(unsigned long long)arg3;

@end

