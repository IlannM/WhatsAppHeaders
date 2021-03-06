//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface WAListTableViewCell : UITableViewCell
{
    UIView *_containerView;
    UILabel *_nameLabel;
    UILabel *_participantsLabel;
}

+ (id)cellWithReuseIdentifier:(id)arg1;
+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)addAutolayoutConstraints;
- (void)configureWithList:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UILabel *participantsLabel; // @synthesize participantsLabel=_participantsLabel;

@end

