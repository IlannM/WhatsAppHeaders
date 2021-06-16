//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WANotificationSnippet.h"

@class UIImageView, UILabel, WAPaymentNotificationInfo;

@interface WAPaymentNotificationSnippet : WANotificationSnippet
{
    WAPaymentNotificationInfo *_paymentNotificationInfo;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 message:(id)arg2 enableCardStyle:(_Bool)arg3;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (id)initWithPaymentNotificationInfo:(id)arg1 enableCardStyle:(_Bool)arg2;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) WAPaymentNotificationInfo *paymentNotificationInfo; // @synthesize paymentNotificationInfo=_paymentNotificationInfo;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

