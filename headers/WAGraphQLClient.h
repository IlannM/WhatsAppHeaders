//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface WAGraphQLClient : NSObject
{
    MISSING_TYPE *config;
    MISSING_TYPE *userAgentKey;
    MISSING_TYPE *httpScheme;
    MISSING_TYPE *graphQLDomainPrefix;
    MISSING_TYPE *waHostName;
    MISSING_TYPE *graphQLPath;
}

- (void).cxx_destruct;
- (void)fetchWithDocID:(id)arg1 params:(id)arg2 accessTokenData:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initWithConfig:(id)arg1;

@end

