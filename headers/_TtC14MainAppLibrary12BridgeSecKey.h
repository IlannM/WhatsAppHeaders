//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14MainAppLibrary12BridgeSecKey : NSObject
{
    MISSING_TYPE *secKey;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithKey:(struct __SecKey *)arg1;
- (_Bool)verifySignatureWithData:(id)arg1 signature:(id)arg2 algorithm:(const struct __CFString *)arg3;

@end

