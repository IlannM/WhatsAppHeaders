//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WAMediaPickerAsset, WAMediaPickerVideoAssetOverlayView, WAPieProgressView;

@interface WAMediaPickerAssetView : UIView
{
    UIImageView *_checkmarkImageView;
    UIView *_dimmingView;
    _Bool _isHighlighted;
    WAMediaPickerVideoAssetOverlayView *_videoOverlayView;
    WAPieProgressView *_progressView;
    _Bool _showsCheckmarkWhenSelected;
    _Bool _selected;
    _Bool _imageDimmed;
    UIImageView *_imageView;
    WAMediaPickerAsset *_mediaPickerAsset;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)configureWithPHAsset:(id)arg1;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)installProgressViewIfNeeded;
@property(nonatomic, getter=isImageDimmed) _Bool imageDimmed; // @synthesize imageDimmed=_imageDimmed;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void)layoutSubviews;
@property(retain, nonatomic) WAMediaPickerAsset *mediaPickerAsset; // @synthesize mediaPickerAsset=_mediaPickerAsset;
- (void)mediaPickerAssetDidUpdateDownloadProgress:(id)arg1;
- (void)performSelectionRefusedAnimation;
@property(nonatomic) _Bool showsCheckmarkWhenSelected; // @synthesize showsCheckmarkWhenSelected=_showsCheckmarkWhenSelected;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

