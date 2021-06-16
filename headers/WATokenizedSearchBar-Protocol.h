//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WASearchBarToken;
@protocol WATokenizedSearchBarDelegate;

@protocol WATokenizedSearchBar <NSObject>
- (void)addToken:(WASearchBarToken *)arg1;
- (void)searchControllerWillDismiss;
- (void)searchDidBegin;
- (void)searchWillBegin;
@property(nonatomic) __weak id <WATokenizedSearchBarDelegate> tokenizedSearchBarDelegate;
@end

