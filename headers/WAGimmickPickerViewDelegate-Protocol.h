//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WAActionSheetPresenter, WACDSticker, WAGIFAssetCollection, WAGimmickPickerView, WAMultiSendMediaItem;

@protocol WAGimmickPickerViewDelegate <NSObject>
- (void)gimmickPickerView:(WAGimmickPickerView *)arg1 didRequestPresentActionSheet:(WAActionSheetPresenter *)arg2;
- (void)gimmickPickerView:(WAGimmickPickerView *)arg1 didSelectGIFMediaItem:(WAMultiSendMediaItem *)arg2 withGIFThumbnailImageView:(UIView *)arg3;
- (void)gimmickPickerView:(WAGimmickPickerView *)arg1 didSelectManagedSticker:(WACDSticker *)arg2 fromContextualSuggestions:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)gimmickPickerViewDidBeginGIFSearch:(WAGimmickPickerView *)arg1 preloadedGIFs:(WAGIFAssetCollection *)arg2;
- (void)gimmickPickerViewDidBeginStickerSearch:(WAGimmickPickerView *)arg1;
- (void)gimmickPickerViewDidRequestOpenStickerStore:(WAGimmickPickerView *)arg1;
@end
