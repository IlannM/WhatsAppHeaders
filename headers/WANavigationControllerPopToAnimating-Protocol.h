//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, WANavigationControllerPopFromAnimating;

@protocol WANavigationControllerPopToAnimating <NSObject>
- (id <UIViewControllerAnimatedTransitioning>)popAnimationControllerFromViewController:(UIViewController<WANavigationControllerPopFromAnimating> *)arg1;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(NSString *)arg1;
@end

