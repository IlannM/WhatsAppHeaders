//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WACustomSeparatorView;

@interface WANotificationSoundPickerCell : UITableViewCell
{
    WACustomSeparatorView *_separator;
    _Bool _soundSelected;
    _Bool _doubleSeparator;
    double _textMargin;
}

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
@property(nonatomic) _Bool doubleSeparator; // @synthesize doubleSeparator=_doubleSeparator;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool soundSelected; // @synthesize soundSelected=_soundSelected;
@property(nonatomic) double textMargin; // @synthesize textMargin=_textMargin;

@end

