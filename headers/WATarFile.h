//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface WATarFile : NSObject
{
    void *_bytes;
    _Bool _ignoreMissingFiles;
    unsigned long long _mode;
    CDUnknownBlockType _fileCompletionHandler;
    NSString *_prefix;
    NSFileHandle *_handle;
}

+ (_Bool)doesHeaderFitAtOffset:(unsigned long long)arg1 forFileSize:(unsigned long long)arg2;
+ (_Bool)file:(id)arg1 matchesHeader:(id)arg2;
+ (_Bool)fileWithSize:(unsigned long long)arg1 fitsInTar:(unsigned long long)arg2 withOffset:(unsigned long long)arg3;
+ (id)handleToPath:(id)arg1 forMode:(unsigned long long)arg2;
+ (_Bool)isOffset:(unsigned long long)arg1 validForSize:(unsigned long long)arg2;
+ (void)preparePath:(id)arg1 forMode:(unsigned long long)arg2;
- (void).cxx_destruct;
- (unsigned long long)addBytesFromHandle:(id)arg1 ofLength:(unsigned long long)arg2 withCancellationCheck:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)addEndOfFileMarker:(id *)arg1;
- (unsigned long long)addFileWithHeader:(id)arg1 fromHandle:(id)arg2 withCancellationCheck:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)addFilesAtURLs:(id)arg1 error:(id *)arg2;
- (unsigned long long)addFilesAtURLs:(id)arg1 toTarDirectoryPath:(id)arg2 withCancellationCheck:(CDUnknownBlockType)arg3 failedIndices:(id *)arg4 criticalError:(id *)arg5;
- (void)closeFile;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType fileCompletionHandler; // @synthesize fileCompletionHandler=_fileCompletionHandler;
@property(readonly, nonatomic) NSFileHandle *handle; // @synthesize handle=_handle;
- (id)headerForPath:(id)arg1 inTarDirectoryPath:(id)arg2;
@property(nonatomic) _Bool ignoreMissingFiles; // @synthesize ignoreMissingFiles=_ignoreMissingFiles;
- (id)init;
- (id)initWithHandle:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithHandle:(id)arg1 mode:(unsigned long long)arg2 appendToEOF:(_Bool)arg3;
- (id)initWithPath:(id)arg1 mode:(unsigned long long)arg2;
- (unsigned long long)internalAddFileAtPath:(id)arg1 atTarDirectoryPath:(id)arg2 withCancellationCheck:(CDUnknownBlockType)arg3 error:(id *)arg4;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)nameForFilePath:(id)arg1 inTarDirectoryPath:(id)arg2;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;

@end
