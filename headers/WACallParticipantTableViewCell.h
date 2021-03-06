//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WACallParticipant, WACallParticipantCancelButton, WAProfilePictureDynamicThumbnailView;
@protocol WACallParticipantTableViewCellDelegate;

@interface WACallParticipantTableViewCell : UITableViewCell
{
    WACallParticipantCancelButton *_cancelButton;
    WAProfilePictureDynamicThumbnailView *_profilePictureView;
    _Bool _showCancel;
    WACallParticipant *_participant;
    id <WACallParticipantTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)cancelPressed:(id)arg1;
@property(nonatomic) __weak id <WACallParticipantTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) __weak WACallParticipant *participant; // @synthesize participant=_participant;
- (void)setParticipantJID:(id)arg1;
- (void)setProfileImageAlpha:(double)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showCancel; // @synthesize showCancel=_showCancel;

@end

