//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WATriggeredOperation.h"

@class NSData, NSFileHandle, NSString, WABackupFile;
@protocol WABackupKey;

@interface WACryptFileOperation : WATriggeredOperation
{
    NSData *_dataHeader;
    WABackupFile *_header;
    long long _backupKeyType;
    unsigned int _operation;
    CDUnknownBlockType _keyLoader;
    NSFileHandle *_inputFile;
    NSFileHandle *_outputFile;
    int _inputfd;
    int _outputfd;
    struct _CCCryptor *_cryptor;
    CDStruct_43cfb2c2 _hmac;
    CDStruct_43cfb2c2 *_hmacPtr;
    long long _bytesToCrypt;
    void *_readBuffer;
    unsigned long long _readBufferLength;
    void *_outputBuffer;
    unsigned long long _outputBufferLength;
    NSString *_bestName;
    _Bool _hasEncryptionKeyError;
    _Bool _hasNoConnectionError;
    _Bool _failed;
    NSString *_sourcePath;
    NSString *_destinationPath;
    id <WABackupKey> _backupKey;
}

- (void).cxx_destruct;
@property(retain) id <WABackupKey> backupKey; // @synthesize backupKey=_backupKey;
- (void)closeInputFile;
- (void)closeOutputFile;
@property(readonly, copy) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property _Bool failed; // @synthesize failed=_failed;
- (void)finish;
- (void)getHMACBytes:(void *)arg1 ofLength:(unsigned long long)arg2;
@property _Bool hasEncryptionKeyError; // @synthesize hasEncryptionKeyError=_hasEncryptionKeyError;
@property _Bool hasNoConnectionError; // @synthesize hasNoConnectionError=_hasNoConnectionError;
- (id)initWithDependenciesRequired:(_Bool)arg1;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 backupKey:(id)arg3;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 backupKey:(id)arg3 initializationVector:(id)arg4;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 keyType:(long long)arg3 decryptionKeyLoader:(CDUnknownBlockType)arg4;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 operation:(unsigned int)arg3;
- (void)loadKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)performTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)prepareForCrypt;
- (long long)readBytes:(void *)arg1 ofLength:(unsigned long long)arg2;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)readFileHeader;
- (void)runOperation;
- (void)runOperationWithInputURL:(id)arg1;
@property(readonly, copy) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
- (_Bool)succeeded;
- (_Bool)tryToCryptWithBackupHMAC:(CDStruct_43cfb2c2 *)arg1;
- (_Bool)tryToOpenInputFileAtURL:(id)arg1;
- (_Bool)tryToOpenOutputFile;
- (_Bool)tryToRunOperationWithInputURL:(id)arg1;
- (_Bool)verifyFileHeader;
- (_Bool)writeBytes:(const void *)arg1 ofLength:(unsigned long long)arg2;

@end

