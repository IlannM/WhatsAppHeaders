//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView;

@interface WAMessageBubbleQuickActionButton : UIButton
{
    UIView *_background;
    unsigned long long _actionType;
}

+ (id)makeButton;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
- (void)changeButtonActionType:(unsigned long long)arg1 forTarget:(id)arg2 withSelector:(SEL)arg3;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setImageForAction:(unsigned long long)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;

@end

