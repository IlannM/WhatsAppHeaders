//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WADeviceListSeparatorCell.h"

@class UIImageView, UILabel;

@interface WADeviceListMultiDeviceOptInCell : WADeviceListSeparatorCell
{
    UIImageView *_iconImageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
}

- (void).cxx_destruct;
- (void)configureWithRow:(long long)arg1 count:(long long)arg2 isOptedIn:(_Bool)arg3;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;

@end
