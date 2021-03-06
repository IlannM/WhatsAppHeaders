//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "WAImageSearchControllerDelegate-Protocol.h"

@class NSString, WAHTTPFetcher;
@protocol WAWebImagePickerDelegate;

@interface WAWebImagePicker : UINavigationController <WAImageSearchControllerDelegate>
{
    WAHTTPFetcher *_httpFetcher;
    id <WAWebImagePickerDelegate> _pickerDelegate;
}

- (void).cxx_destruct;
- (void)didFinishMovingAndScalingImage:(id)arg1;
- (void)downloadImageAtURL:(id)arg1;
- (id)imageSearchController;
- (void)imageSearchController:(id)arg1 didSelectImageWithURL:(id)arg2 sourceURL:(id)arg3;
- (void)imageSearchControllerDidCancel:(id)arg1;
- (id)initWithPickerDelegate:(id)arg1;
- (id)moveAndScaleViewController;
@property(nonatomic) __weak id <WAWebImagePickerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (id)popViewControllerAnimated:(_Bool)arg1;
@property(copy, nonatomic) NSString *preloadedSearchText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

