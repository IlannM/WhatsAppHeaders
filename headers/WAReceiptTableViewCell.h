//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABaseReceiptTableViewCell.h"

@class NSLayoutConstraint, UILabel;

@interface WAReceiptTableViewCell : WABaseReceiptTableViewCell
{
    UILabel *_messageStatusLabel;
    UILabel *_messageStatusIcon;
    NSLayoutConstraint *_statusIconCenterX;
    NSLayoutConstraint *_statusTextLeading;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *messageStatusIcon; // @synthesize messageStatusIcon=_messageStatusIcon;
@property(readonly, nonatomic) UILabel *messageStatusLabel; // @synthesize messageStatusLabel=_messageStatusLabel;
- (void)setReceiptType:(long long)arg1 isMediaMessage:(_Bool)arg2;
@property(retain, nonatomic) NSLayoutConstraint *statusIconCenterX; // @synthesize statusIconCenterX=_statusIconCenterX;
@property(retain, nonatomic) NSLayoutConstraint *statusTextLeading; // @synthesize statusTextLeading=_statusTextLeading;

@end
