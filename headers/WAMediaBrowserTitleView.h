//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WANavigationBarTitleViewCenterAlignLandscape-Protocol.h"
#import "WANavigationBarTitleViewCenterAlignPortrait-Protocol.h"
#import "WANavigationBarTitleViewFillsAvailableSpace-Protocol.h"

@class NSArray, NSString, UILabel;

@interface WAMediaBrowserTitleView : UIView <WANavigationBarTitleViewFillsAvailableSpace, WANavigationBarTitleViewCenterAlignPortrait, WANavigationBarTitleViewCenterAlignLandscape>
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_combinedLabel;
    NSString *_accessibilityTitle;
    NSArray *_currentLayoutConstraints;
    NSArray *_portraitLayoutConstraints;
    NSArray *_landscapeLayoutConstraints;
    _Bool _shouldCenterAlignInLandscape;
    _Bool _portraitLayout;
}

- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
@property(nonatomic) _Bool portraitLayout; // @synthesize portraitLayout=_portraitLayout;
- (void)setPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2 combinedTitle:(id)arg3 accessibilityTitle:(id)arg4;
@property(nonatomic) _Bool shouldCenterAlignInLandscape; // @synthesize shouldCenterAlignInLandscape=_shouldCenterAlignInLandscape;
- (_Bool)shouldCenterAlignInPortrait;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

