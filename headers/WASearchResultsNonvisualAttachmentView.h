//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "WASearchResultsNonvisualAttachmentView-Protocol.h"

@class NSString, UIView;
@protocol WASearchResultsNonvisualAttachmentView;

@interface WASearchResultsNonvisualAttachmentView : UIButton <WASearchResultsNonvisualAttachmentView>
{
    _Bool _highlighted;
    UIView<WASearchResultsNonvisualAttachmentView> *_childView;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
@property(readonly, nonatomic) UIView<WASearchResultsNonvisualAttachmentView> *childView; // @synthesize childView=_childView;
- (void)configureWithMessage:(id)arg1 dataItem:(id)arg2 searchTokens:(id)arg3;
- (id)initWithChildView:(id)arg1;
- (_Bool)needsTwoPassLayout;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

