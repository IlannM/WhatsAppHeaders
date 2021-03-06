//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

@class UIImage, UIImageView;

@interface WAQRCodeViewController : WAViewController
{
    UIImage *_image;
    UIImageView *_imageView;
}

+ (id)controllerWithImage:(id)arg1;
+ (void)presentShareControllerForImage:(id)arg1 text:(id)arg2 caption:(id)arg3 fromBarButtonItem:(id)arg4 inViewController:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)shareCodeAction:(id)arg1;
- (void)viewDidLoad;

@end

