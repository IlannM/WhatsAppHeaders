//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACallSingleVideoViewLayout-Protocol.h"

@interface WACallSingleViewLayoutOneToOne : NSObject <WACallSingleVideoViewLayout>
{
    _Bool _fullscreen;
}

@property(readonly, nonatomic) long long gridColumn;
@property(readonly, nonatomic) long long gridRow;
@property(readonly, nonatomic) long long gridTotal;
- (id)initWithFullscreen:(_Bool)arg1;
@property(readonly, nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(readonly, nonatomic, getter=isGrid) _Bool grid;

@end

