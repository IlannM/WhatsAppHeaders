//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAModalNavigationController.h>

@protocol WATOSViewControllerDelegate;

@interface WATOSViewController : WAModalNavigationController
{
    id <WATOSViewControllerDelegate> _tosDelegate;
}

+ (id)controller;
- (void).cxx_destruct;
- (void)acceptTOS;
- (void)dismissTOS;
@property(nonatomic) unsigned long long stage;
@property(nonatomic) __weak id <WATOSViewControllerDelegate> tosDelegate; // @synthesize tosDelegate=_tosDelegate;

@end
