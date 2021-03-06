//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"

@class NSArray, NSString;
@protocol OS_dispatch_group;

@interface WAMediaPickerLibraryController : NSObject <PHPhotoLibraryChangeObserver>
{
    NSObject<OS_dispatch_group> *_loadingDispatchGroup;
    _Bool _assetsLibraryLoadingInProgress;
    NSArray *_albumControllers;
    _Bool _reloadLibraryAfterEnteringForeground;
    _Bool _containsAssets;
    unsigned long long _mediaType;
}

- (void).cxx_destruct;
- (id)albumControllerForAssetCollection:(id)arg1 fromAvailableAlbums:(id)arg2;
@property(readonly, nonatomic) NSArray *albumControllers; // @synthesize albumControllers=_albumControllers;
- (void)applicationWillEnterForeground:(id)arg1;
@property(readonly, nonatomic) _Bool containsAssets; // @synthesize containsAssets=_containsAssets;
- (void)dealloc;
- (id)initWithMediaType:(unsigned long long)arg1;
- (void)invalidateAndReload;
- (_Bool)isLibraryReady;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (void)photoLibraryDidChange:(id)arg1;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reloadAssetsLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

