//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, WAActivityIndicatorBadgeView;

@interface WAArchivedEntryTableViewCell : UITableViewCell
{
    UIImageView *_imageView;
    UILabel *_label;
    _Bool _usesLargerTextSizeConstraints;
    WAActivityIndicatorBadgeView *_activityIndicator;
    UIImageView *_mentionsBadgeView;
    NSLayoutConstraint *_imageViewLeadingConstraint;
    NSLayoutConstraint *_labelLeadingConstraint;
    NSLayoutConstraint *_labelLargerTextSizeLeadingConstraint;
}

+ (id)archivedCellImageView;
+ (id)archivedCellLabel;
- (void).cxx_destruct;
- (id)init;
- (void)loadSpecificConstraintsBasedOnFonts;
- (void)setupViews;
- (void)showArchivedActivityIndicatorWithUnreadCount:(long long)arg1 hasImportantMessages:(_Bool)arg2;
- (void)updateEditModeUI:(_Bool)arg1;
- (void)updateFonts;
- (void)updateSeparatorInset;

@end

