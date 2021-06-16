//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABloksViewController.h"

#import "WAShopsPrivacyNoticeDelegate-Protocol.h"

@class WAOverlayView, WAShopsTOSManager;

@interface WAShopsTOSViewController : WABloksViewController <WAShopsPrivacyNoticeDelegate>
{
    CDUnknownBlockType _onTOSCompletion;
    WAShopsTOSManager *_manager;
    WAOverlayView *_overlayView;
}

- (void).cxx_destruct;
- (id)createBloksContext;
- (void)hideOverlay;
- (id)initWithStorage:(id)arg1;
@property(retain, nonatomic) WAShopsTOSManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) CDUnknownBlockType onTOSCompletion; // @synthesize onTOSCompletion=_onTOSCompletion;
@property(retain, nonatomic) WAOverlayView *overlayView; // @synthesize overlayView=_overlayView;
- (void)showOverlay;
- (void)userDidAcceptPrivacyNoticeVersion:(id)arg1;

@end

