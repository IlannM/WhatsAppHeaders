//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC14MainAppLibrary31WABackupCryptorEncryptionResult : NSObject
{
    MISSING_TYPE *decryptionHash;
    MISSING_TYPE *plaintextHash;
    MISSING_TYPE *encryptedFileSize;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSData *decryptionHash;
@property(nonatomic, readonly) long long encryptedFileSize; // @synthesize encryptedFileSize;
- (id)init;
- (id)initWithDecryptionHash:(id)arg1 plaintextHash:(id)arg2 encryptedFileSize:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) NSData *plaintextHash;

@end

