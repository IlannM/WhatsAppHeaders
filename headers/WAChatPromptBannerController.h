//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface WAChatPromptBannerController : NSObject
{
    MISSING_TYPE *bannerView;
    MISSING_TYPE *bottomConstraint;
    MISSING_TYPE *lastValidViewData;
    MISSING_TYPE *lastHandledBannerHeight;
    MISSING_TYPE *tableView;
    MISSING_TYPE *bannerHeightChangeHandler;
}

- (void).cxx_destruct;
@property(nonatomic, copy) CDUnknownBlockType bannerHeightChangeHandler;
- (void)chatBarInsetChanged:(id)arg1;
- (id)init;
@property(nonatomic, readonly) _Bool isFloatingBannerAvailable;
- (void)updateBannerForNonSuspiciousChat;
- (void)updateBannerForSuspiciousChatWithChatViewController:(id)arg1 promptText:(id)arg2 privacyText:(id)arg3 privacyHandler:(CDUnknownBlockType)arg4 buttons:(id)arg5;
- (void)updateOnDidScrollWithChatBar:(id)arg1;

@end

