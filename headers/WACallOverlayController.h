//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACallOverlayTouchControllerDelegate-Protocol.h"
#import "WALayoutBoundsManagerDelegate-Protocol.h"

@class NSString, WACallOverlayTouchController, WALayoutBoundsManager;

@interface WACallOverlayController : NSObject <WACallOverlayTouchControllerDelegate, WALayoutBoundsManagerDelegate>
{
    WALayoutBoundsManager *_layoutBoundsManager;
    WACallOverlayTouchController *_touchController;
    struct WACallOverlayAnchorsWithOffset _overlayAnchors;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 layoutBoundsManager:(id)arg2;
- (void)layoutBoundsManagerChangedBounds:(id)arg1;
@property(nonatomic) struct WACallOverlayAnchorsWithOffset overlayAnchors; // @synthesize overlayAnchors=_overlayAnchors;
- (void)overlayTouchController:(id)arg1 didEndDragAtPosition:(struct CGPoint)arg2 withOverlaySize:(struct CGSize)arg3 withinLayoutBounds:(struct CGRect)arg4;
- (struct CGPoint)overlayTouchController:(id)arg1 initialPositionForOverlaySize:(struct CGSize)arg2 withinLayoutBounds:(struct CGRect)arg3;
- (struct CGPoint)overlayTouchController:(id)arg1 positionWithSuggestedPosition:(struct CGPoint)arg2 withOverlaySize:(struct CGSize)arg3 withinLayoutBounds:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

