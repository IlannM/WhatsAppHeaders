//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIPanGestureRecognizer, WAStatusViewerSeenByView, WAUserJID;

@protocol WAStatusViewerSeenByViewDelegate <NSObject>
- (_Bool)canHideUserJID:(WAUserJID *)arg1 fromStatusViewSeenByView:(WAStatusViewerSeenByView *)arg2;
- (void)statusViewSeenByView:(WAStatusViewerSeenByView *)arg1 didReceivePanGesture:(UIPanGestureRecognizer *)arg2;
- (void)statusViewSeenByView:(WAStatusViewerSeenByView *)arg1 didRequestActionsForUserJID:(WAUserJID *)arg2 onHideCompletion:(void (^)(void))arg3;
- (void)statusViewSeenByView:(WAStatusViewerSeenByView *)arg1 didRequestHideForUserJID:(WAUserJID *)arg2 onHideCompletion:(void (^)(void))arg3;
- (void)statusViewSeenByView:(WAStatusViewerSeenByView *)arg1 didRequestMoreOptionsFromOrigin:(struct CGPoint)arg2;
- (void)statusViewSeenByViewDidRequestDismiss:(WAStatusViewerSeenByView *)arg1;
- (void)statusViewSeenByViewDidResize:(WAStatusViewerSeenByView *)arg1;
@end

