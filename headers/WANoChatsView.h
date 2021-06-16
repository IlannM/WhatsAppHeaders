//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UILabel, UITableView, UITableViewCell;

@interface WANoChatsView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_contentView;
    UILabel *_textLabel;
    NSArray *_actions;
    NSArray *_buttons;
    UITableViewCell *_bannerCell;
    UITableView *_bannerTableView;
    NSLayoutConstraint *_bannerTableViewHeightConstraint;
    CDUnknownBlockType _onBannerCellTap;
}

+ (id)separatorView;
- (void).cxx_destruct;
- (id)actions;
@property(retain, nonatomic) UITableViewCell *bannerCell; // @synthesize bannerCell=_bannerCell;
- (void)createButtons;
- (void)fontSizeDidChange:(id)arg1;
- (void)handleButtonTap:(id)arg1;
- (id)helperTextWithFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)installConstraints;
- (void)layoutSubviews;
@property(copy, nonatomic) CDUnknownBlockType onBannerCellTap; // @synthesize onBannerCellTap=_onBannerCellTap;
- (void)stackView:(id)arg1 toView:(id)arg2 spacing:(double)arg3 leadingMargin:(_Bool)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBackgroundImageOfButton:(id)arg1;
- (void)updateColors;
- (void)updateFonts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

