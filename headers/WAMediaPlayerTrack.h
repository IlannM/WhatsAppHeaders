//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexSet;

@interface WAMediaPlayerTrack : UIView
{
    NSIndexSet *_values;
    unsigned long long _maximumValue;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) unsigned long long maximumValue; // @synthesize maximumValue=_maximumValue;
- (void)setValues:(id)arg1 maximumValue:(unsigned long long)arg2;
@property(readonly, nonatomic) NSIndexSet *values; // @synthesize values=_values;

@end

