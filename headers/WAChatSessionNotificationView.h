//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WAChatSessionNotificationViewDelegate;

@interface WAChatSessionNotificationView : UIView
{
    id <WAChatSessionNotificationViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAChatSessionNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)parentViewControllerDidDisappear;
- (void)parentViewControllerWillBeginInteraction;

@end
