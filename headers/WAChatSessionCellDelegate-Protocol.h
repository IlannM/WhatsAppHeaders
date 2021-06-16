//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAChatSessionCell;

@protocol WAChatSessionCellDelegate <NSObject>
- (_Bool)archiveActionRemovesCell:(WAChatSessionCell *)arg1;
- (void)chatSessionCellMarkAsPinOrUnpin:(WAChatSessionCell *)arg1;
- (void)chatSessionCellMarkAsReadOrUnread:(WAChatSessionCell *)arg1;
- (void)chatSessionCellPerformArchiveAction:(WAChatSessionCell *)arg1;
- (void)chatSessionCellShowMoreOptions:(WAChatSessionCell *)arg1 completion:(void (^)(_Bool))arg2;
@end
