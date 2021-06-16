//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WABubbleTextViewDelegate-Protocol.h"
#import "WACallGridManagerDelegate-Protocol.h"
#import "WACallSingleVideoViewDelegate-Protocol.h"

@class CAMediaTimingFunction, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, UIDynamicAnimator, UIDynamicItemBehavior, UIPanGestureRecognizer, UISnapBehavior, UITapGestureRecognizer, UIVisualEffectView, WAAutoscrollingLabel, WACallGridManager, WACallParticipant, WACallSingleVideoView, WACallVideoBubbleView, WAFloatingContentStickyCornersBehavior, WAUserJID, WAWeakTimer;
@protocol WACallVideoViewDelegate;

@interface WACallVideoView : UIView <WABubbleTextViewDelegate, WACallSingleVideoViewDelegate, WACallGridManagerDelegate>
{
    WACallSingleVideoView *_minimizedView;
    WACallSingleVideoView *_fullScreenView;
    UIView *_overlayView;
    NSMutableDictionary *_participantVideoViewsForJID;
    long long _participantsCountAtLastLayoutUpdate;
    WACallVideoBubbleView *_alertBubble;
    _Bool _alertBubbleVisible;
    _Bool _showSelfMutedString;
    _Bool _shouldMoveOverlayContainers;
    WAWeakTimer *_selfMutedAlertTimer;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    struct CGPoint _initialPanLocation;
    struct CGPoint _initialMinimizedViewLocation;
    UIDynamicAnimator *_animator;
    UISnapBehavior *_snapBehavior;
    UIDynamicItemBehavior *_dynamicItemBehavior;
    WAFloatingContentStickyCornersBehavior *_stickyBehavior;
    WACallGridManager *_gridManager;
    _Bool _isAnimating;
    int _lastSetVideoLayout;
    NSNumber *_lastSetPeerViewHidden;
    UIVisualEffectView *_backgroundMaximizedView;
    WAAutoscrollingLabel *_topParticipantNameLabel;
    WAAutoscrollingLabel *_topPushNameLabel;
    CAMediaTimingFunction *_defaultTimingFunction;
    CAMediaTimingFunction *_videoPeekTimingFunction;
    double _videoFrameHeight;
    WAUserJID *_selfJid;
    _Bool _peerVideoHidden;
    _Bool _hideAllOverlays;
    _Bool _maximized;
    _Bool _resizing;
    int _minimizedViewAnchorLocation;
    int _videoLayout;
    id <WACallVideoViewDelegate> _delegate;
    double _minimizedViewBottomOffset;
    double _minimizedViewTopOffset;
    double _minimizedViewPadding;
    WACallSingleVideoView *_maximizedVideoView;
    NSArray *_peerParticipants;
    WACallParticipant *_selfParticipant;
}

- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (void)addGestureRecognizers;
- (void)addStickyBehaviorWithActiveCorner:(long long)arg1 Velocity:(struct CGPoint)arg2;
- (void)addVideoViewForParticipantJID:(id)arg1;
- (void)animateWithTimingFunction:(id)arg1 duration:(double)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)bubbleTextViewDidRequestAction:(id)arg1;
- (void)callGridManager:(id)arg1 hasFinalLeftColumnGridObjects:(id)arg2 finalRightColumnGridObjects:(id)arg3 deletedGridObject:(id)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)callGridManager:(id)arg1 hasInitialLeftColumnGridObjects:(id)arg2 initialRightColumnGridObjects:(id)arg3;
- (void)callGridManager:(id)arg1 willAddView:(id)arg2;
- (void)callGridManager:(id)arg1 willMoveView:(id)arg2;
- (void)callGridManager:(id)arg1 willRemoveView:(id)arg2;
- (void)callGridManagerDidFinish:(id)arg1;
- (void)callGridManagerDidStart:(id)arg1;
- (_Bool)canAcceptVideoViewTaps;
- (void)cancelAllAnimations;
- (void)cancelAnimations;
- (int)closestAnchorToPoint:(struct CGPoint)arg1;
@property(nonatomic) __weak id <WACallVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissMaximizedViewIfNeededWithFinalFrame:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)frameFromNormalizedFrame:(struct CGRect)arg1;
- (struct WAFrameAnchors)generateAnchors;
@property(nonatomic) _Bool hideAllOverlays; // @synthesize hideAllOverlays=_hideAllOverlays;
- (id)initWithFrame:(struct CGRect)arg1 selfJID:(id)arg2;
@property(readonly, nonatomic) _Bool isSelfVideoFullScreen;
- (void)layoutSubviews;
- (void)maximize;
@property(nonatomic) _Bool maximized; // @synthesize maximized=_maximized;
@property(readonly, nonatomic) WACallSingleVideoView *maximizedVideoView; // @synthesize maximizedVideoView=_maximizedVideoView;
- (void)minimize;
- (struct CGSize)minimizedFrameSize;
@property(nonatomic) int minimizedViewAnchorLocation; // @synthesize minimizedViewAnchorLocation=_minimizedViewAnchorLocation;
@property(nonatomic) double minimizedViewBottomOffset; // @synthesize minimizedViewBottomOffset=_minimizedViewBottomOffset;
- (void)minimizedViewOffetsUpdated;
@property(nonatomic) double minimizedViewPadding; // @synthesize minimizedViewPadding=_minimizedViewPadding;
@property(nonatomic) double minimizedViewTopOffset; // @synthesize minimizedViewTopOffset=_minimizedViewTopOffset;
- (void)moveBottomVideoOverlayContainersIfNeeded:(_Bool)arg1;
- (void)moveMaximizedViewWithInitialTouchPoint:(struct CGPoint)arg1 currentPoint:(struct CGPoint)arg2;
- (void)moveMinimizedWindow:(id)arg1;
@property(nonatomic) double overlayAlpha;
@property(readonly, nonatomic) NSDictionary *participantVideoViewsForJID;
@property(copy, nonatomic) NSArray *peerParticipants; // @synthesize peerParticipants=_peerParticipants;
@property(nonatomic) _Bool peerVideoHidden; // @synthesize peerVideoHidden=_peerVideoHidden;
@property(readonly, nonatomic) WACallSingleVideoView *peerVideoView;
- (struct CGPoint)positionOfAnchor:(int)arg1;
- (void)releaseMaximizedViewWithInitialTouchPoint:(struct CGPoint)arg1 currentPoint:(struct CGPoint)arg2 verticalVelocity:(double)arg3;
- (void)removeDynamicBehaviors;
- (void)removeGestureRecognizers;
- (void)removeVideoViewForParticipantJID:(id)arg1;
- (void)removeVideoViews;
- (void)resizeVideoViewsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool resizing; // @synthesize resizing=_resizing;
- (void)rotateViews:(double)arg1;
@property(retain, nonatomic) WACallParticipant *selfParticipant; // @synthesize selfParticipant=_selfParticipant;
@property(readonly, nonatomic) WACallSingleVideoView *selfVideoView;
- (void)setCornerRadiusForSingleVideoView:(id)arg1;
- (void)setProfilePictureOverlayAlpha:(double)arg1;
- (void)setSelfVideoFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) int videoLayout; // @synthesize videoLayout=_videoLayout;
- (void)setVideoLayout:(int)arg1 animated:(_Bool)arg2;
- (_Bool)shouldSupressAnimations;
- (void)singleVideoViewDidBeginLongPress:(id)arg1;
- (void)singleVideoViewDidBeginTap:(id)arg1;
- (void)singleVideoViewDidEndTap:(id)arg1;
- (void)singleVideoViewDidRequestCancelGroupCallInvite:(id)arg1;
- (long long)stickyBehaviourActiveCornerForAnchor:(int)arg1;
- (void)switchMinimizedView;
- (void)switchMinimizedView:(id)arg1;
- (void)tappedWithTouchPoint:(struct CGPoint)arg1;
- (void)updateAlertBubble;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

