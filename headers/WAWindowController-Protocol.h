//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WAWindow;

@protocol WAWindowController <NSObject>
- (_Bool)isCallStatusBarHiddenForWindow:(WAWindow *)arg1;
@property(nonatomic) __weak WAWindow *parentWindow;
- (void)window:(WAWindow *)arg1 didAddSubview:(UIView *)arg2;
- (void)window:(WAWindow *)arg1 willRemoveSubview:(UIView *)arg2;
@end

