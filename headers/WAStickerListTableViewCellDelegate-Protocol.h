//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAStickerListTableViewCell;
@protocol WAStickerPackInfoProviding;

@protocol WAStickerListTableViewCellDelegate <NSObject>
- (void)stickerListTableViewCell:(WAStickerListTableViewCell *)arg1 didTapDownloadForStickerPack:(id <WAStickerPackInfoProviding>)arg2;
- (void)stickerListTableViewCell:(WAStickerListTableViewCell *)arg1 didTapUpdateForStickerPack:(id <WAStickerPackInfoProviding>)arg2;
@end
