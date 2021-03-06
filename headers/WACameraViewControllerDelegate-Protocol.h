//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIPanGestureRecognizer, WA2Tuple, WACameraViewController, WAMediaPickerAsset, WAMediaPickerItem;

@protocol WACameraViewControllerDelegate <NSObject>
- (void)cameraViewController:(WACameraViewController *)arg1 didCancelWithGestureRecognizer:(UIPanGestureRecognizer *)arg2;
- (void)cameraViewController:(WACameraViewController *)arg1 didFinishWithMediaItems:(NSArray *)arg2 gestureRecognizer:(UIPanGestureRecognizer *)arg3;
- (void)cameraViewController:(WACameraViewController *)arg1 didPresentAddContactWithDetails:(WA2Tuple *)arg2;
- (void)cameraViewController:(WACameraViewController *)arg1 didPresentStartChatWithDetails:(WA2Tuple *)arg2;
- (void)cameraViewController:(WACameraViewController *)arg1 didSelectMediaPickerAsset:(WAMediaPickerAsset *)arg2 completionHandler:(void (^)(long long))arg3;
- (void)cameraViewController:(WACameraViewController *)arg1 didSelectMediaPickerItem:(WAMediaPickerItem *)arg2 completionHandler:(void (^)(void))arg3;
- (void)cameraViewController:(WACameraViewController *)arg1 didUnSelectMediaPickerAsset:(WAMediaPickerAsset *)arg2;
- (void)cameraViewControllerDidRequestPresentPhotoLibrary:(WACameraViewController *)arg1;
@end

