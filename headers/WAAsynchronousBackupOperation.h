//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAAsynchronousOperation.h>

#import "WABackupOperation-Protocol.h"

@class NSString;

@interface WAAsynchronousBackupOperation : WAAsynchronousOperation <WABackupOperation>
{
    _Bool _requireDependencies;
    _Bool _dependencyResult;
}

@property(readonly) unsigned long long completedSteps;
- (id)init;
- (id)initWithDependenciesRequired:(_Bool)arg1;
- (void)start;
@property(readonly) _Bool succeeded;
@property(readonly) unsigned long long totalSteps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

