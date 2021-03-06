//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIContextMenuConfiguration, WAMessageDataItem, WAWebLinkTableViewCell;
@protocol UIContextMenuInteractionCommitAnimating;

@protocol WAWebLinkTableViewCellDelegate <NSObject>
- (UIContextMenuConfiguration *)webLinkTableViewCell:(WAWebLinkTableViewCell *)arg1 didRequestConfigurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)webLinkTableViewCell:(WAWebLinkTableViewCell *)arg1 didRequestShowChatForItem:(WAMessageDataItem *)arg2;
- (void)webLinkTableViewCell:(WAWebLinkTableViewCell *)arg1 didRequestShowWebPageForItem:(WAMessageDataItem *)arg2;
- (void)webLinkTableViewCell:(WAWebLinkTableViewCell *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
@end

