//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIViewController;
@protocol WAWindowController;

@interface WAWindow : UIWindow
{
}

- (void)didAddSubview:(id)arg1;
@property(readonly, nonatomic, getter=isCallStatusBarHidden) _Bool callStatusBarHidden;
@property(retain, nonatomic) UIViewController<WAWindowController> *rootViewController; // @dynamic rootViewController;
- (void)tintColorDidChange;
- (void)willRemoveSubview:(id)arg1;

@end
