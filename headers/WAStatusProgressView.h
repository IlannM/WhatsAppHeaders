//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface WAStatusProgressView : UIView
{
    unsigned long long _numberOfSegments;
    NSMutableArray *_segmentViews;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(retain, nonatomic) NSMutableArray *segmentViews; // @synthesize segmentViews=_segmentViews;
- (void)setProgress:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setProgress:(double)arg1 forSegmentsAtIndexes:(id)arg2;

@end
