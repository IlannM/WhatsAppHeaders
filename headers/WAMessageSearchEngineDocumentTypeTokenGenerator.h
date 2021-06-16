//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WASearchEngineTokenGenerator-Protocol.h"

@class NSArray, NSString;

@interface WAMessageSearchEngineDocumentTypeTokenGenerator : NSObject <WASearchEngineTokenGenerator>
{
}

+ (id)orderedDocumentTypesForTokens:(id)arg1 documentTypes:(id)arg2;
+ (id)tokensForDocumentType:(long long)arg1;
@property(readonly, nonatomic) NSArray *additionalSearchTokenGenerators;
@property(readonly, nonatomic) NSString *columnName;
- (Class)contextClass;
- (void)restrictResultsForSearchQuery:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchTokensForSearchQueryWord:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tokensForObject:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

