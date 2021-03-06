//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WALinkLabelDelegate-Protocol.h"

@class NSString, UIView, WAChatButton, WALinkLabel;

@interface WAVCardMatchCell : UITableViewCell <WALinkLabelDelegate>
{
    UIView *_backgroundView;
    WAChatButton *_proceedButton;
    WAChatButton *_declineButton;
    unsigned long long _numberOfContacts;
    WALinkLabel *_label;
    CDUnknownBlockType _openCardAction;
}

+ (id)buttonTitleFont;
+ (double)preferredHeightForWidth:(double)arg1;
+ (_Bool)selectable;
+ (id)warningTextFont;
+ (id)warningTextForNumberOfContacts:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType declineAction;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(copy, nonatomic) CDUnknownBlockType openCardAction; // @synthesize openCardAction=_openCardAction;
@property(copy, nonatomic) CDUnknownBlockType proceedAction;
- (void)reloadFonts;
- (void)setNumberOfContacts:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

