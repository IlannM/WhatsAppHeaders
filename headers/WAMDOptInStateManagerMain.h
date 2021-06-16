//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAMDOptInStateManager.h>

@class WAUserSessionPreferences;
@protocol WAAppStateSyncDeletionHandling, WAOldWebClientSessionManaging, WAOwnCompanionStateManaging;

@interface WAMDOptInStateManagerMain : WAMDOptInStateManager
{
    WAUserSessionPreferences *_userPreferences;
    id <WAOwnCompanionStateManaging> _mdCompanionManager;
    id <WAOldWebClientSessionManaging> _oldWebClientSessionManager;
    id <WAAppStateSyncDeletionHandling> _appStateDeletionHandler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAAppStateSyncDeletionHandling> appStateDeletionHandler; // @synthesize appStateDeletionHandler=_appStateDeletionHandler;
- (void)forceCompanionRegEnabledIfNecessary;
- (id)initWithUserPreferences:(id)arg1;
@property(readonly) _Bool isCompanionRegAvailable;
@property(nonatomic) __weak id <WAOwnCompanionStateManaging> mdCompanionManager; // @synthesize mdCompanionManager=_mdCompanionManager;
@property(nonatomic) __weak id <WAOldWebClientSessionManaging> oldWebClientSessionManager; // @synthesize oldWebClientSessionManager=_oldWebClientSessionManager;
- (void)optInWithCompletion:(CDUnknownBlockType)arg1;
- (void)optOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCompanionRegEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
