//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel, UISearchBar, WAJoinableEducationBannerView;
@protocol WACallPickerBottomSheetHeaderViewDelegate><WAJoinableEducationBannerViewDelegate;

@interface WACallPickerBottomSheetHeaderView : UIView
{
    NSLayoutConstraint *_bottomContactsGridConstraint;
    NSLayoutConstraint *_bottomSearchBarToViewConstraint;
    NSLayoutConstraint *_contactGridHeightConstraint;
    UIView *_bottomLine;
    _Bool _gridMode;
    _Bool _showBottomLine;
    id <WACallPickerBottomSheetHeaderViewDelegate><WAJoinableEducationBannerViewDelegate> _delegate;
    UILabel *_titleLabel;
    UISearchBar *_searchBar;
    UIView *_contactGridView;
    WAJoinableEducationBannerView *_bannerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAJoinableEducationBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *contactGridView; // @synthesize contactGridView=_contactGridView;
@property(nonatomic) __weak id <WACallPickerBottomSheetHeaderViewDelegate><WAJoinableEducationBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool gridMode; // @synthesize gridMode=_gridMode;
- (id)initWithContactGridView:(id)arg1 educationBannerView:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupConstraints;

@end
