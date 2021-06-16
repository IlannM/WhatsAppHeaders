//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAActionSheetPresenter, WACDSticker, WAStickerSearchViewController;

@protocol WAStickerSearchViewControllerDelegate <NSObject>
- (void)stickerSearchViewController:(WAStickerSearchViewController *)arg1 didRequestPresentActionSheet:(WAActionSheetPresenter *)arg2;
- (void)stickerSearchViewController:(WAStickerSearchViewController *)arg1 didSelectManagedSticker:(WACDSticker *)arg2 completion:(void (^)(_Bool))arg3;
- (void)stickerSearchViewControllerDidRequestOpenStickerStore:(WAStickerSearchViewController *)arg1;
@end

