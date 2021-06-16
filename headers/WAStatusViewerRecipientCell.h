//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UILabel, WAProfilePictureDynamicThumbnailView, WAStatusViewerUser;

@interface WAStatusViewerRecipientCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_dateLabel;
    UILabel *_timeLabel;
    WAProfilePictureDynamicThumbnailView *_profileView;
    NSArray *_variableConstraints;
    _Bool _hideable;
    WAStatusViewerUser *_user;
}

+ (id)timestampFont;
- (void).cxx_destruct;
@property(nonatomic) _Bool hideable; // @synthesize hideable=_hideable;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)installPermanentConstraints;
- (id)receiptDateStringForDate:(id)arg1;
- (id)receiptTimeStringForDate:(id)arg1;
@property(retain, nonatomic) WAStatusViewerUser *user; // @synthesize user=_user;
- (double)timeLabelWidth;
- (void)updateConstraints;

@end

