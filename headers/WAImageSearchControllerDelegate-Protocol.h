//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, WAImageSearchController;

@protocol WAImageSearchControllerDelegate <NSObject>
- (void)imageSearchController:(WAImageSearchController *)arg1 didSelectImageWithURL:(NSURL *)arg2 sourceURL:(NSURL *)arg3;
- (void)imageSearchControllerDidCancel:(WAImageSearchController *)arg1;
@end

