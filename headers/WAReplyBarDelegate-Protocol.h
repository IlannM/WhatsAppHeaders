//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAReplyBar;

@protocol WAReplyBarDelegate <NSObject>
- (void)replyBar:(WAReplyBar *)arg1 userDidSubmitText:(NSString *)arg2;
- (void)replyBarDidBeginEditing:(WAReplyBar *)arg1;
- (void)replyBarDidChangeHeight:(WAReplyBar *)arg1;
- (void)replyBarDidEndEditing:(WAReplyBar *)arg1;
- (double)replyBarMaximumHeight:(WAReplyBar *)arg1;
- (_Bool)replyBarShouldBeginEditing:(WAReplyBar *)arg1;
- (void)replyBarWillChangeHeight:(WAReplyBar *)arg1;
- (void)replyBarWillEndEditing:(WAReplyBar *)arg1;
@end
