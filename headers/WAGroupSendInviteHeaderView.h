//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WAGroupSendInviteHeaderView : UIView
{
    UILabel *_sendInviteLabel;
    UIButton *_closeButton;
    CDUnknownBlockType _closeHandler;
}

- (void).cxx_destruct;
- (void)close:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType closeHandler; // @synthesize closeHandler=_closeHandler;
- (id)initWithCloseHandler:(CDUnknownBlockType)arg1;
- (void)setupConstraints;

@end
