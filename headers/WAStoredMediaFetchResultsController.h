//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAFetchedResultsController.h>

@class NSManagedObjectContext, NSString;

@interface WAStoredMediaFetchResultsController : WAFetchedResultsController
{
    NSManagedObjectContext *_mainThreadContext;
    NSString *_prefetchedKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *mainThreadContext; // @synthesize mainThreadContext=_mainThreadContext;
- (id)objectAtIndexPath:(id)arg1;
@property(copy, nonatomic) NSString *prefetchedKey; // @synthesize prefetchedKey=_prefetchedKey;

@end

