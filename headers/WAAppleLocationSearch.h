//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WALocationSearchEngine-Protocol.h"

@class MKLocalSearch, NSString;

@interface WAAppleLocationSearch : NSObject <WALocationSearchEngine>
{
    MKLocalSearch *_appleMapsSearch;
}

+ (_Bool)canHandleSearchQuery:(id)arg1;
- (void).cxx_destruct;
- (void)fetchNextPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localSearchWithQuery:(id)arg1 location:(id)arg2 radius:(double)arg3 region:(CDStruct_d53ed6ef)arg4;
- (id)placeForMapItem:(id)arg1 location:(id)arg2;
- (void)searchWithQuery:(id)arg1 location:(id)arg2 radius:(double)arg3 region:(CDStruct_d53ed6ef)arg4 fieldStats:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)stop;
@property(readonly, nonatomic) long long wamId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

