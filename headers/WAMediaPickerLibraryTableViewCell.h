//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIColor, UIImageView, UILabel, UIView;

@interface WAMediaPickerLibraryTableViewCell : UITableViewCell
{
    UILabel *_albumNameLabel;
    UILabel *_albumSizeLabel;
    UIImageView *_mainImageView;
    UIImageView *_imageView2;
    UIImageView *_imageView3;
    UIView *_bottomBorder;
    _Bool _hasPosterImage;
    UIColor *_imageViewBackgroundColor;
    NSArray *_hConstraints;
    NSArray *_vConstraints;
}

- (void).cxx_destruct;
- (void)configureWithAssetCollection:(id)arg1;
- (void)configureWithAssetCollection:(id)arg1 title:(id)arg2 insets:(struct UIEdgeInsets)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)installLayoutConstraints;
@property(nonatomic, getter=isBottomBorderHidden) _Bool bottomBorderHidden;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)reapplyBackgroundColors;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setImageViewBackgroundColor:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithAssetCount:(unsigned long long)arg1;

@end
