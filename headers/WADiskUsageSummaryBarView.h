//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface WADiskUsageSummaryBarView : UIView
{
    UIView *_waUsageView;
    UIView *_waUsageBorderView;
    UIView *_otherUsageView;
    UIView *_otherUsageBorderView;
    double _waUsageValue;
    double _freeSpaceValue;
    double _freeSpaceThresholdValue;
    _Bool _initialState;
}

- (void).cxx_destruct;
- (id)initWithThresholdValue:(double)arg1;
- (void)layoutSubviews;
- (void)setWaUsageValue:(double)arg1 freeSpaceValue:(double)arg2;
- (void)updateBars;

@end

