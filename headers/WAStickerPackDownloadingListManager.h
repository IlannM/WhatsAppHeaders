//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "WAStickerPackListPresenting-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WAFetchedResultsController;
@protocol WAStickerPackDownloadingListManagerDelegate;

@interface WAStickerPackDownloadingListManager : NSObject <NSFetchedResultsControllerDelegate, WAStickerPackListPresenting>
{
    NSMutableArray *_downloadingStickerPacks;
    NSMutableSet *_downloadingStickerPackIds;
    WAFetchedResultsController *_fetchedResultsController;
    NSMutableDictionary *_stickerPacks;
    id <WAStickerPackDownloadingListManagerDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)canMoveItems;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <WAStickerPackDownloadingListManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadStateDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidateDelegate;
- (id)mainController;
- (long long)numberOfItems;
- (id)stickerPacks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

