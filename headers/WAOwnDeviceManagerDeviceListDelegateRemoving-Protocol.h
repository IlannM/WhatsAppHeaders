//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol WAOwnDeviceManagerDeviceListDelegateRemoving <NSObject>
- (void)removeAllOwnDevicesWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)removeOwnDevicesWithJIDKeyIndexPairs:(NSDictionary *)arg1 completionHandler:(void (^)(_Bool))arg2;
@end

