//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray, WAStatusItem;
@protocol WAStatusItemViewDelegate;

@interface WAStatusItemView : UIView
{
    CADisplayLink *_displayLink;
    double _pauseStartTime;
    double _focusStartTime;
    double _totalFocusTime;
    double _totalPauseTime;
    double _itemViewStartTime;
    _Bool _needsUpdateAccessibilityElements;
    NSArray *_accessibilityElements;
    _Bool _paused;
    _Bool _inFocus;
    _Bool _audioMuted;
    _Bool _shownFrom3DTouch;
    float _progress;
    WAStatusItem *_statusItem;
    id <WAStatusItemViewDelegate> _delegate;
}

+ (Class)viewClassForStatusItem:(id)arg1;
- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElements;
- (void)cancelTimerIfNeeded;
@property(nonatomic) __weak id <WAStatusItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSetItem;
- (void)didUpdateItem;
- (void)finishPresentingIfPossible;
- (double)focusedTime;
- (void)handleDisplayLinkUpdate:(id)arg1;
- (void)handleItemUpdated:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isAudioMuted) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
- (_Bool)isFinishedPresenting;
@property(readonly, nonatomic, getter=isHandlingPanGesture) _Bool handlingPanGesture;
@property(nonatomic, getter=isInFocus) _Bool inFocus; // @synthesize inFocus=_inFocus;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isShownFrom3DTouch) _Bool shownFrom3DTouch; // @synthesize shownFrom3DTouch=_shownFrom3DTouch;
- (id)itemAccessibilityLabel;
- (double)loadTime;
- (_Bool)managingOwnTiming;
- (id)newInteractiveAnnotationViewWithContainerView:(id)arg1;
- (void)openAnnotation:(id)arg1 atPoint:(struct CGPoint)arg2 inAnnotationView:(id)arg3;
- (double)pausedTime;
- (double)playTime;
- (double)position;
- (void)prepareForReuse;
- (double)presentationTime;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)rewind;
- (void)setNeedsUpdateAccessibilityElements;
@property(retain, nonatomic) WAStatusItem *statusItem; // @synthesize statusItem=_statusItem;
- (void)startTimerIfNeeded;
- (double)timeSpent;
- (void)updateAccessibilityElementsIfNeeded;

@end
