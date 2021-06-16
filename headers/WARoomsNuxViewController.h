//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WASheetSizeProviding-Protocol.h"

@class NSLayoutConstraint, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, WANUXButton, WANUXScrollView;

@interface WARoomsNuxViewController : WAViewController <UIGestureRecognizerDelegate, WASheetSizeProviding>
{
    _Bool _hasContinued;
    CDUnknownBlockType _continueHandler;
    CDUnknownBlockType _cancelHandler;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UIView *_backgroundView;
    WANUXScrollView *_scrollView;
    WANUXButton *_button;
    NSLayoutConstraint *_separatorHeightConstraint;
}

- (void).cxx_destruct;
- (_Bool)accessibilityPerformEscape;
- (void)continueButtonTapped:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fontSizeDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithContinueHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2;
- (void)panGesture:(id)arg1;
- (void)presentFromViewController:(id)arg1;
- (double)sheetHeight;
- (void)tapGesture:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
