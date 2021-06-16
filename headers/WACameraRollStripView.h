//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WACameraRollStripScrollViewDelegate-Protocol.h"

@class NSString, UIColor, WAAssetCollection, WACameraRollStripScrollView;
@protocol WACameraRollStripViewDelegate;

@interface WACameraRollStripView : UIView <WACameraRollStripScrollViewDelegate, UIGestureRecognizerDelegate>
{
    WACameraRollStripScrollView *_scrollView;
    _Bool _userInteractionReported;
    WAAssetCollection *_assetCollection;
    id <WACameraRollStripViewDelegate> _delegate;
    double _imageRotationAngle;
}

+ (double)preferredHeight;
+ (double)preferredThumbnailWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) WAAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (id)assetForForceTouchLocation:(struct CGPoint)arg1;
- (id)assetForLocation:(struct CGPoint)arg1;
@property(retain, nonatomic) UIColor *baseColor;
- (void)cameraRollStripScrollView:(id)arg1 didDeselectItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollView:(id)arg1 didHighlightItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollView:(id)arg1 didLongPressItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollView:(id)arg1 didUnhighlightItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollView:(id)arg1 willDisplayCell:(id)arg2 atIndex:(long long)arg3;
- (void)cameraRollStripScrollViewDidReceiveTouch:(id)arg1;
- (void)contractIfPossible;
- (void)dealloc;
@property(nonatomic) __weak id <WACameraRollStripViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)expandIfPossible;
@property(nonatomic) double imageRotationAngle; // @synthesize imageRotationAngle=_imageRotationAngle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)numberOfItemsInCameraRollStripScrollView:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) unsigned long long presentationState;
- (id)previewingSourceView;
- (void)reloadData;
- (void)reportUserInteractionIfNeeded;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setPresentationState:(unsigned long long)arg1;
- (void)setPresentationState:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) double thumbnailAlpha;
- (id)viewForMediaPickerAsset:(id)arg1;
- (id)viewForVisibleMediaPickerAssetWithIdentifier:(id)arg1;
@property(readonly, nonatomic) struct CGRect visibleBounds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
