//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, WAProfilePictureDynamicThumbnailView;

@interface WASettingsProfileTableViewCell : UITableViewCell
{
    WAProfilePictureDynamicThumbnailView *_profilePicture;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak WAProfilePictureDynamicThumbnailView *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;

@end

