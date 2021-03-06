//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel, UIView;

@interface WAMessageDetailsTableHeaderView : UITableViewHeaderFooterView
{
    UILabel *_titleLabel;
    UIView *_topBorder;
    UIView *_bottomBorder;
    struct UIEdgeInsets _inset;
}

+ (double)headerHeightForHeaderTitle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
- (id)initWithReuseIdentifier:(id)arg1;
@property(nonatomic) struct UIEdgeInsets inset; // @synthesize inset=_inset;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;

@end

