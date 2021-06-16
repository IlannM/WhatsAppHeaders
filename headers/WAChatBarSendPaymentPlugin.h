//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAChatBarMenuPlugin-Protocol.h"

@class NSString, UIViewController;
@protocol WAMultiSendMediaPickerControllerDelegate><WAChatBarMenuPluginDelegate;

@interface WAChatBarSendPaymentPlugin : NSObject <WAChatBarMenuPlugin>
{
    UIViewController<WAMultiSendMediaPickerControllerDelegate><WAChatBarMenuPluginDelegate> *_viewController;
}

+ (_Bool)shouldShowInMenuForChatSession:(id)arg1;
- (void).cxx_destruct;
- (void)addMenuItemToActionSheet:(id)arg1 withChatSession:(id)arg2;
- (id)alertForDisabledPayments:(id)arg1;
- (id)initWithHostViewController:(id)arg1;
- (_Bool)isPaymentMenuItemEnabled:(id)arg1;
@property(readonly, nonatomic) __weak UIViewController<WAMultiSendMediaPickerControllerDelegate><WAChatBarMenuPluginDelegate> *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

