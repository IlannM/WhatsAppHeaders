//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, WAMutableDictionary;
@protocol WAMapBatchUpdaterDelegate;

@interface WAMapBatchUpdater : NSObject
{
    NSMutableSet *_remove;
    NSMutableSet *_add;
    WAMutableDictionary *_move;
    WAMutableDictionary *_updateDates;
    WAMutableDictionary *_annotations;
    NSMutableSet *_showAccuracyCircle;
    NSMutableSet *_hideAccuracyCircle;
    _Bool _performingUpdates;
    id <WAMapBatchUpdaterDelegate> _delegate;
    NSSet *_departures;
}

- (void).cxx_destruct;
- (void)addAnnotationForJID:(id)arg1 location:(id)arg2 lastUpdateDate:(id)arg3;
- (id)allUserJIDs;
- (id)annotationForJID:(id)arg1;
@property(nonatomic) __weak id <WAMapBatchUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSSet *departures; // @synthesize departures=_departures;
- (void)hideAccuracyCircleForJID:(id)arg1;
- (id)init;
- (void)moveJID:(id)arg1 to:(id)arg2 lastUpdateDate:(id)arg3;
- (id)newAnnotationForJID:(id)arg1 location:(id)arg2 lastUpdateDate:(id)arg3 map:(id)arg4;
- (void)performUpdatesOnMap:(id)arg1;
@property(readonly, nonatomic) _Bool performingUpdates; // @synthesize performingUpdates=_performingUpdates;
- (void)removeAnnotationForJID:(id)arg1;
- (void)showAccuracyCircleForJID:(id)arg1;
@property(readonly, nonatomic) _Bool willAddOrRemove;

@end

