//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WAWebURLPreviewViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, WAStatusLinkPreviewContent, WAStatusLinkPreviewDisplayView, WAStatusLinkPreviewTextView, WAWebPageMetadata, WAWebURLPreviewView;
@protocol WAStatusLinkPreviewViewDelegate;

@interface WAStatusLinkPreviewView : UIView <UITextViewDelegate, WAWebURLPreviewViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_containerView;
    UIView *_separator;
    UIButton *_bottomButton;
    UIView *_suspiciousLinkContainerView;
    UILabel *_suspiciousLinkWarningLabel;
    WAStatusLinkPreviewTextView *_linkTextView;
    WAWebURLPreviewView *_webURLEditPreview;
    WAStatusLinkPreviewDisplayView *_webURLDisplayPreview;
    _Bool _suspiciousLink;
    id <WAStatusLinkPreviewViewDelegate> _delegate;
    unsigned long long _mode;
}

- (void).cxx_destruct;
- (_Bool)becomeFirstResponder;
- (void)bottomButtonAction:(id)arg1;
@property(retain, nonatomic) WAStatusLinkPreviewContent *content;
@property(nonatomic) __weak id <WAStatusLinkPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)hasLinkText;
- (void)hideDownloadMediaOption;
- (id)initWithMode:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)linkTextViewAction:(id)arg1;
@property(retain, nonatomic) WAWebPageMetadata *metadata;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)prepareToHide;
- (void)setButtonText:(id)arg1;
- (void)setDownloading:(_Bool)arg1;
@property(nonatomic) _Bool suspiciousLink; // @synthesize suspiciousLink=_suspiciousLink;
@property(copy, nonatomic) NSString *webURL;
- (void)showDownloadMediaOptionAfterLoadingWithMediaSize:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateMediaDownloadWithProgress:(float)arg1;
- (void)updateSizeIfNecessary;
- (double)webURLPreviewPreferredHeightForWidth:(double)arg1;
- (void)webURLPreviewViewDidCancelMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidDismiss:(id)arg1;
- (void)webURLPreviewViewDidEditMedia:(id)arg1;
- (void)webURLPreviewViewDidRequestMediaDownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
