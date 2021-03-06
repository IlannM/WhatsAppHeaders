//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIToolbarDelegate-Protocol.h"

@class NSIndexPath, WAGenericMediaBrowserToolbar;

@protocol WAGenericMediaBrowserToolbarDelegate <UIToolbarDelegate>
- (void)toolbar:(WAGenericMediaBrowserToolbar *)arg1 didScrollToIndexPath:(NSIndexPath *)arg2;
- (void)toolbar:(WAGenericMediaBrowserToolbar *)arg1 willDisplayCellForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)toolbarDidActivatePauseButton:(WAGenericMediaBrowserToolbar *)arg1;
- (void)toolbarDidActivatePlayButton:(WAGenericMediaBrowserToolbar *)arg1;
- (void)toolbarDidBeginScrubbing:(WAGenericMediaBrowserToolbar *)arg1;
- (void)toolbarDidEndScrubbing:(WAGenericMediaBrowserToolbar *)arg1;
@end

