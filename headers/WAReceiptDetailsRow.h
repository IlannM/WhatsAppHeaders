//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

@interface WAReceiptDetailsRow : UIView
{
    UILabel *_statusLabel;
    UILabel *_dateLabel;
    UILabel *_timeLabel;
    NSLayoutConstraint *_timeLabelMinimumWidthConstraint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)installLayoutConstraints;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) NSLayoutConstraint *timeLabelMinimumWidthConstraint; // @synthesize timeLabelMinimumWidthConstraint=_timeLabelMinimumWidthConstraint;

@end
