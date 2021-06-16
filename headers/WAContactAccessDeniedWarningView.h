//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WALinkLabelDelegate-Protocol.h"

@class NSString;
@protocol WAPresentAlertDelegate;

@interface WAContactAccessDeniedWarningView : UIView <WALinkLabelDelegate>
{
    NSString *_allowAccessString;
    NSString *_alertString;
    id <WAPresentAlertDelegate> _presentDelegate;
}

- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (id)initWithAllowAccessText:(id)arg1 alertText:(id)arg2;
@property(nonatomic) __weak id <WAPresentAlertDelegate> presentDelegate; // @synthesize presentDelegate=_presentDelegate;
- (void)showContactsAccessPrompt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
