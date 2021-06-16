//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAProfilePictureManager;

@interface WASpotlightPictureManager : NSObject
{
    NSMutableDictionary *_thumbnailURLCache;
    WAProfilePictureManager *_profilePictureManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithManager:(id)arg1;
@property(readonly, nonatomic) WAProfilePictureManager *profilePictureManager; // @synthesize profilePictureManager=_profilePictureManager;
- (void)profilePictureManagerPictureDidChange:(id)arg1;
- (id)thumbnailURLForJID:(id)arg1;

@end

