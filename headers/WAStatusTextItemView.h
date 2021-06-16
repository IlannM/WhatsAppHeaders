//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAStatusMessageItemView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAStatusLinkPreviewViewDelegate-Protocol.h"

@class NSString, UIGestureRecognizer, UIView, WAStatusLinkPreviewView, WAStatusTextView;

@interface WAStatusTextItemView : WAStatusMessageItemView <UIGestureRecognizerDelegate, WAStatusLinkPreviewViewDelegate>
{
    WAStatusTextView *_statusTextView;
    WAStatusLinkPreviewView *_linkPreviewView;
    UIView *_dimmingView;
    unsigned long long _selectedURLIndex;
    _Bool _linkPreviewShown;
    UIGestureRecognizer *_textTapGestureRecognizer;
    UIGestureRecognizer *_dimmingTapGestureRecognizer;
}

- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)checkAndOpenURL:(id)arg1 forMessage:(id)arg2;
- (void)didSetItem;
- (void)didUpdateItem;
- (void)dimmingTapped:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideLinkPreview;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isHandlingPanGesture;
- (id)itemAccessibilityLabel;
- (void)layoutSubviews;
- (struct CGRect)linkTextRect;
- (struct CGSize)maxLinkPreviewSize;
- (void)prepareForReuse;
- (double)presentationTime;
- (void)showLinkPreviewForMatchedURL:(id)arg1 matchedString:(id)arg2;
- (void)statusLinkPreviewDidCancelMediaDownload:(id)arg1;
- (void)statusLinkPreviewDidEditMedia:(id)arg1;
- (void)statusLinkPreviewDidRequestMediaDownload:(id)arg1;
- (void)statusLinkPreviewDidTapClose:(id)arg1;
- (void)statusLinkPreviewDidTapOpenLink:(id)arg1;
- (void)statusLinkPreviewDidTapRemoveLink:(id)arg1;
- (void)statusLinkPreviewDidTapRemovePreview:(id)arg1;
- (void)statusLinkPreviewDidUpdateLink:(id)arg1;
- (void)textTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
