//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WAPersistentKeyValueStore;

@interface WALowStorageBannerManager : NSObject
{
    _Bool _dismissed;
    WAPersistentKeyValueStore *_kvStore;
}

- (void).cxx_destruct;
- (id)dataFromBoolValue:(_Bool)arg1;
- (id)initWithKeyValueStore:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowBanner;
- (void)updateBannerToDismissedStatus;

@end

