//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAPttPlayer;

@protocol WAPttPlayerDelegate <NSObject>
- (void)pttPlayer:(WAPttPlayer *)arg1 dismissLowVolumeHint:(_Bool)arg2;
- (void)pttPlayerDidRequestNextTrack:(WAPttPlayer *)arg1;
- (void)pttPlayerDidRequestPreviousTrack:(WAPttPlayer *)arg1;
- (void)pttPlayerShowLowVolumeHint:(WAPttPlayer *)arg1;
@end
