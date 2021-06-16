//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

@interface WACallWindow : UIWindow <UIGestureRecognizerDelegate>
{
    _Bool _minimized;
    _Bool _minimizedAsOverlay;
}

- (_Bool)accessibilityViewIsModal;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isMinimized) _Bool minimized; // @synthesize minimized=_minimized;
@property(nonatomic, getter=isMinimizedAsOverlay) _Bool minimizedAsOverlay; // @synthesize minimizedAsOverlay=_minimizedAsOverlay;
- (void)maximize;
- (void)minimizeAsOverlay:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)statusBarTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
