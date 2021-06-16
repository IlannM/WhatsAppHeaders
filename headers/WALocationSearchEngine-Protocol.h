//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSString, WamEventLocationPicker;

@protocol WALocationSearchEngine <NSObject>
- (void)fetchNextPage:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *, NSArray *, NSString *))arg2;
- (void)searchWithQuery:(NSString *)arg1 location:(CLLocation *)arg2 radius:(double)arg3 region:(CDStruct_d53ed6ef)arg4 fieldStats:(WamEventLocationPicker *)arg5 completion:(void (^)(unsigned long long, NSError *, NSArray *, NSString *))arg6;
- (void)stop;
@property(readonly, nonatomic) long long wamId;
@end

