//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UILabel;

@interface WAChatSessionCellLabelView : UIView
{
    UILabel *_labelText;
    long long _fontSizeAdjustment;
    _Bool _showingExtraLabelCount;
    UIColor *_stateColor;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 color:(id)arg2;
- (void)reloadFonts;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 withState:(id)arg2;
- (void)setupContraints;
- (void)updateWithExtraLabelCount:(long long)arg1;
- (void)updateWithState:(id)arg1;

@end
