//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WAKeychainWrapper;

@interface WABloksATStorageManager : NSObject
{
    WAKeychainWrapper *_keychainWrapper;
}

- (void).cxx_destruct;
- (id)accessTokenData;
- (void)deleteAccessTokenData;
- (_Bool)hasAccessTokenExpired;
- (id)init;
- (id)modificationDate;
- (void)setAccessTokenData:(id)arg1;

@end

