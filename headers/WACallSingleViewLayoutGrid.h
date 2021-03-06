//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACallSingleVideoViewLayout-Protocol.h"

@interface WACallSingleViewLayoutGrid : NSObject <WACallSingleVideoViewLayout>
{
    long long _row;
    long long _column;
    long long _total;
}

@property(readonly, nonatomic) long long gridColumn; // @synthesize gridColumn=_column;
@property(readonly, nonatomic) long long gridRow; // @synthesize gridRow=_row;
@property(readonly, nonatomic) long long gridTotal; // @synthesize gridTotal=_total;
- (id)initWithRow:(long long)arg1 column:(long long)arg2 total:(long long)arg3;
@property(readonly, nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(readonly, nonatomic, getter=isGrid) _Bool grid;

@end

