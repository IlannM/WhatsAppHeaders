//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageMediaManager.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WADiskUsageChatRow, WAPersistentKeyValueStore, WAStorageManagementSessionManager, WAStoredMediaManagerFetchResult;

@interface WAStoredMediaManager : WAMessageMediaManager <NSFetchedResultsControllerDelegate>
{
    unsigned long long _largeMessagesSize;
    unsigned long long _forwardedMessagesSize;
    NSMutableDictionary *_noMediaFileMessages;
    NSArray *_allGalleryMessages;
    NSArray *_gallerySectionedMessages;
    _Bool _fetchPending;
    unsigned long long _sort;
    unsigned long long _fetchType;
    WADiskUsageChatRow *_chatRow;
    _Bool _refreshingCache;
    long long _cacheRefreshIndex;
    unsigned long long _totalMediaSize;
    NSMutableArray *_largeMessages;
    long long _largeMessagesCount;
    NSMutableArray *_forwardedMessages;
    long long _forwardedMessagesCount;
    unsigned long long _totalSizeForDisplay;
    NSMutableArray *_allLargeMessageObjectIDs;
    NSMutableArray *_allForwardedMessageObjectIDs;
    NSMutableDictionary *_perChatResults;
    NSArray *_zeroSizeChatSessions;
    NSMutableArray *_messagesToDelete;
    NSMutableDictionary *_hashCountsForDeletedMessages;
    NSMutableDictionary *_starredMessageObjectIDs;
    WAPersistentKeyValueStore *_keyValueStore;
    WAStorageManagementSessionManager *_sessionManager;
}

+ (int)bytesThresholdForLargeFiles;
+ (id)forwardedManyTimesTitle;
+ (id)largeFilesTitle;
+ (long long)summaryViewMaxMessagesCount;
- (void).cxx_destruct;
- (id)accessibilityLabelForHeaderInSection:(long long)arg1;
- (id)actionTitleForSort:(unsigned long long)arg1;
- (id)appendedEphemeralMessagesPredicateFromArray:(id)arg1;
- (id)cachedSummaryDataAndTriggerRefetch;
- (void)chatStorageDidRevokeMessages:(id)arg1;
- (void)checkForMessageUpdatesWithUpdatedObjectIDs:(id)arg1;
- (id)checkMarkDeletedAmountString:(struct WADisplayFileSize)arg1;
- (void)clearCache;
- (void)contextDidSaveNotification:(id)arg1;
- (id)datedTitleForMediaSectionID:(id)arg1;
- (void)deleteMessages;
@property(readonly, nonatomic) _Bool fetchPending;
- (id)fetchRequest;
@property(readonly, nonatomic) WAStoredMediaManagerFetchResult *fetchResult;
- (id)fileSizeForMessage:(id)arg1;
- (id)filterNoMediaMessages:(id)arg1;
- (id)indexPathOfMessage:(id)arg1;
- (id)initWithKeyValueStore:(id)arg1 taskManager:(id)arg2;
- (void)loadGalleryMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadIfNeeded;
- (void)mediateDeleteWithPresentationHelper:(id)arg1 messagesToDelete:(id)arg2 willDeleteBlock:(CDUnknownBlockType)arg3;
- (id)messageAtIndexPath:(id)arg1;
- (long long)numberOfItems;
- (unsigned long long)numberOfMessagesOfType:(int)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)postSumamryInfoNotification;
- (id)predicateForAllLocalMessages;
- (id)predicateForForwardedMessages;
- (id)predicateForLargeFilesMessages;
- (id)predicateForMessagesInChatSessionID:(id)arg1;
- (void)prepareToLoadChatMessagesWithChatRow:(id)arg1;
- (void)prepareToLoadForwardedMessages;
- (void)prepareToLoadLargeMessages;
- (void)refilterOutNoMediaMessages;
- (void)refreshCache;
- (void)refreshLargeAndForwardedMessages;
- (void)removeObjectsIDs:(id)arg1;
- (void)saveCacheToDisk;
- (void)scheduleCacheUpdateTaskWithManager:(id)arg1 taskKeyValueStore:(id)arg2;
@property(retain, nonatomic) WAStorageManagementSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, nonatomic) _Bool shouldHideEmptyState;
- (void)sortByLargest;
- (void)sortByNewest;
- (void)sortByOldest;
- (void)sortBySortType:(unsigned long long)arg1;
- (id)sortNavigationTitle;
@property(readonly, nonatomic) NSArray *sortedChats;
- (id)subPredicateForForwardedMessage;
- (id)subPredicateForLargeFiles;
- (id)subPredicateForLocalPath;
- (id)subPredicateForMediaAndDocumentsSectionID;
- (id)subPredicateForNotStatus;
- (id)titleForHeaderInSection:(long long)arg1;
@property(readonly, nonatomic) NSString *totalSizeToDisplay;
- (id)uniqueIdentifier;
- (void)updateWithDeletedMessages:(id)arg1 hashCounts:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

