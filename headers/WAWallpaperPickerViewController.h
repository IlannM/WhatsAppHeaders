//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "WAWallpaperImageViewDelegate-Protocol.h"

@class NSArray, NSString, UIImageView, UIScrollView, UITableView, UIView;

@interface WAWallpaperPickerViewController : WAViewController <WAWallpaperImageViewDelegate>
{
    UIScrollView *_scrollView;
    NSArray *_imageViews;
    UITableView *_tableView;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    struct CGPoint _contentOffsetAtStartOfRotation;
    _Bool _darkmode;
    NSString *_galleryType;
    _Bool _isCustom;
    long long _pickerMode;
}

- (void).cxx_destruct;
- (void)addLegacyWallpapers;
@property(copy, nonatomic) NSString *galleryType; // @synthesize galleryType=_galleryType;
@property(readonly, copy, nonatomic) NSArray *imageViews;
- (id)initWithGalleryType:(id)arg1 isCustom:(_Bool)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) _Bool isCustom; // @synthesize isCustom=_isCustom;
- (void)layoutAllPreviews;
- (void)loadAllColors;
- (void)loadAllImagesForGallery:(id)arg1;
- (void)loadView;
@property(nonatomic) long long pickerMode; // @synthesize pickerMode=_pickerMode;
- (id)previewControllerDelegate;
- (void)selectImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)userDidSelectWallpaperImageView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
