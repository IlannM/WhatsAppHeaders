//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, UIView, WAActionSheetPresenter, WAChatBarHelper, WAUserJID;

@protocol WAChatBarHelperDelegate
- (void)chatBarHelper:(WAChatBarHelper *)arg1 dismissActionSheetCancelled:(_Bool)arg2;
- (void)chatBarHelper:(WAChatBarHelper *)arg1 showActionSheet:(WAActionSheetPresenter *)arg2 sourceView:(UIView *)arg3;
- (void)chatBarHelper:(WAChatBarHelper *)arg1 showBlockedContactWarning:(NSString *)arg2 forUserJID:(WAUserJID *)arg3;
@end

