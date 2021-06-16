//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIImage, UITableViewCell, WAChatComposer, WAContact;

@protocol WAChatComposerDelegate <NSObject>
- (void)chatComposer:(WAChatComposer *)arg1 didFinishWithContact:(WAContact *)arg2;
- (void)chatComposer:(WAChatComposer *)arg1 didFinishWithContacts:(NSArray *)arg2 subject:(NSString *)arg3 picture:(UIImage *)arg4 isDogfooding:(_Bool)arg5;
- (void)chatComposerDidCancel:(WAChatComposer *)arg1;

@optional
- (void)chatComposer:(WAChatComposer *)arg1 didAskToInviteFriendsFromTableViewCell:(UITableViewCell *)arg2;
@end

