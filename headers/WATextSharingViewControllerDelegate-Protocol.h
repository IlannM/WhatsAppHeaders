//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAPBMessageMetadata, WATextSharingViewController;

@protocol WATextSharingViewControllerDelegate <NSObject>
- (void)textSharingViewController:(WATextSharingViewController *)arg1 didFinishWithText:(NSString *)arg2 metadata:(WAPBMessageMetadata *)arg3 hasTextFromURL:(_Bool)arg4;
- (void)textSharingViewControllerDidCancel:(WATextSharingViewController *)arg1;
@end

