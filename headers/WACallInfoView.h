//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UIColor, UILabel, WAAutoscrollingLabel;
@protocol WACallInfoViewDelegate;

@interface WACallInfoView : UIView
{
    WAAutoscrollingLabel *_callerNameLabel;
    UILabel *_subtitleLabel;
    UIButton *_infoButton;
    NSLayoutConstraint *_infoButtonTrailingConstraint;
    NSLayoutConstraint *_noInfoButtonTrailingConstraint;
    UIColor *_callStatusTextColor;
    NSString *_callInfoText;
    id <WACallInfoViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *callInfoText; // @synthesize callInfoText=_callInfoText;
@property(copy, nonatomic) NSString *callStatusAccessibilityLabel;
@property(copy, nonatomic) NSString *callStatusText;
@property(copy, nonatomic) UIColor *callStatusTextColor; // @synthesize callStatusTextColor=_callStatusTextColor;
@property(copy, nonatomic) NSString *callerName;
@property(copy, nonatomic) NSString *callerNameAccessibilityLabel;
@property(nonatomic) __weak id <WACallInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)infoButtonPressed:(id)arg1;
@property(nonatomic) _Bool infoButtonShown;
- (id)init;
@property(readonly, nonatomic) double preferredHeight;

@end

