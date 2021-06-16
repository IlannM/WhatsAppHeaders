//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WASearchEngineDelegate-Protocol.h"

@class NSArray, NSString, WAMessageSearchEngineChatTokenGenerator, WAMessageSearchEngineContactTokenGenerator, WAMessageSearchEngineDocumentTypeTokenGenerator, WAMessageSearchEngineTextTokenGenerator, WASearchEngine, WASearchEngineFullTextSearchContentGenerator;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WAMessageSearchEngine : NSObject <WASearchEngineDelegate>
{
    NSObject<OS_dispatch_group> *_indexingQueryingGroup;
    WASearchEngine *_searchEngine;
    NSString *_sanityCheckVersion;
    NSObject<OS_dispatch_queue> *_sanityCheckQueue;
    WASearchEngineFullTextSearchContentGenerator *_contentGenerator;
    NSArray *_tokenGenerators;
    WAMessageSearchEngineTextTokenGenerator *_textTokenGenerator;
    WAMessageSearchEngineContactTokenGenerator *_contactTokenGenerator;
    WAMessageSearchEngineChatTokenGenerator *_chatTokenGenerator;
    WAMessageSearchEngineDocumentTypeTokenGenerator *_documentTokenGenerator;
}

- (void).cxx_destruct;
- (id)authorsMatchingSearchTerm:(id)arg1 type:(long long)arg2 contactsSearchController:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;
- (void)closeDatabase;
- (void)createTaskToIndexMessagesWithStorage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createTaskToRetryMessagesWithStorage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteDatabase;
- (void)didCompleteSanityCheckWithSuccess:(_Bool)arg1;
- (id)docIDsMatchingSearchTerm:(id)arg1 chatSessionJIDs:(id)arg2 authorJID:(id)arg3 minimumScore:(float)arg4 type:(long long)arg5 offset:(unsigned long long)arg6 limit:(unsigned long long)arg7 contentOnly:(_Bool)arg8 contactsSearchController:(id)arg9 invalidationBlock:(CDUnknownBlockType)arg10;
- (id)documentTypesMatchingSearchTerm:(id)arg1 documentTypes:(id)arg2 authorJID:(id)arg3 contactsSearchController:(id)arg4 invalidationBlock:(CDUnknownBlockType)arg5;
- (id)fetchRequestWithPredicate:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)fileURL;
- (void)finishIndexingForChatStorage:(id)arg1 objectIndexer:(id)arg2;
- (id)init;
- (void)internalSanityCheckMessageSearchIndexWithChatStorage:(id)arg1 objectIndexer:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool isIndexReady;
- (void)loadMessageCountsWithStorage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadObjectIndexer:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfIndexedObjects;
- (void)openDatabaseWithStorage:(id)arg1;
- (void)registerDailyStatsCallback:(id)arg1 chatStorage:(id)arg2;
- (void)removeDocIDs:(id)arg1;
- (void)resultsMatchingSearchTerm:(id)arg1 chatSessionJIDs:(id)arg2 authorJID:(id)arg3 minimumScore:(float)arg4 type:(long long)arg5 contentOnly:(_Bool)arg6 contactsSearchController:(id)arg7 restrictedToAuthorTokens:(id)arg8 searchBlock:(CDUnknownBlockType)arg9;
- (void)sanityCheckMessageSearchIndexWithChatStorage:(id)arg1 objectIndexer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchEngine:(id)arg1 didFailToIndexObject:(id)arg2 externalDocID:(id)arg3;
- (void)searchEngine:(id)arg1 didIndexObject:(id)arg2 externalDocID:(id)arg3;
- (id)searchEngine:(id)arg1 executeInsertTo:(id)arg2 object:(id)arg3 contents:(id)arg4;
- (_Bool)searchEngine:(id)arg1 executeMetadataInsertTo:(id)arg2 internalDocID:(long long)arg3 userInfo:(id)arg4;
- (long long)searchEngine:(id)arg1 externalDocIDForObject:(id)arg2;
- (long long)searchEngine:(id)arg1 indexLevelForObject:(id)arg2;
- (void)searchEngine:(id)arg1 indexableContentForObject:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)searchEngine:(id)arg1 internalQueryForMaximumDocID:(id *)arg2 storage:(id)arg3;
- (id)searchEngineColumnsForFullTextSearch:(id)arg1;
- (void)searchEngineDidDeleteDatabase:(id)arg1;
- (void)searchEngineDidPerformQuery:(id)arg1;
- (_Bool)searchEngineExcludesMatchInfo:(id)arg1;
- (id)searchEngineExtraMetadataColumns:(id)arg1;
- (id)searchEngineMetadataFieldsToSelect:(id)arg1;
- (id)searchEngineNewlyAddedMetadataColumns:(id)arg1;
- (id)searchEngineSearchResultOrderColumn:(id)arg1;
- (void)searchEngineWillDeleteDatabase:(id)arg1;
- (id)searchTermToQueryDocsFor:(id)arg1 contentOnly:(_Bool)arg2 context:(id)arg3;
- (unsigned long long)sizeOfDatabase;
- (id)taskWithDescription:(id)arg1 chatStorage:(id)arg2 indexer:(id)arg3 fetchRequest:(id)arg4 batchCompletion:(CDUnknownBlockType)arg5;
- (id)tokenGeneratorsForContentOnly:(_Bool)arg1;
- (id)totalCountOfMessagesMatchingSearchTerm:(id)arg1 chatSessionJIDs:(id)arg2 authorJID:(id)arg3 type:(long long)arg4 contentOnly:(_Bool)arg5 contactsSearchController:(id)arg6 invalidationBlock:(CDUnknownBlockType)arg7;
- (void)updateSearchScoreForMessage:(id)arg1;
- (void)waitForCompletion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
