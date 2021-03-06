//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UIView, WAActionSheetPresenter, WAGIFAsset, WAGIFPickerManager;

@protocol WAGIFPickerManagerDelegate <NSObject>
- (void)gifPickerManager:(WAGIFPickerManager *)arg1 didChangeCategory:(NSIndexPath *)arg2 wantsHapticFeedback:(_Bool)arg3;
- (void)gifPickerManager:(WAGIFPickerManager *)arg1 didRequestPresentActionSheet:(WAActionSheetPresenter *)arg2;
- (void)gifPickerManager:(WAGIFPickerManager *)arg1 didRequestSetContentOffset:(struct CGPoint)arg2 forCategory:(NSIndexPath *)arg3;
- (void)gifPickerManager:(WAGIFPickerManager *)arg1 didSelectGIF:(WAGIFAsset *)arg2 withGIFThumbnailImageView:(UIView *)arg3;
@end

