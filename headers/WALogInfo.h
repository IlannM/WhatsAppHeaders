//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WALogInfo : NSObject
{
    NSURL *_attachmentURL;
    NSArray *_secondaryLogFiles;
    _Bool _shouldForce;
    _Bool _supportExceptionOnlyLoad;
    _Bool _isAppleDiagnostic;
    _Bool _skipAddingFileBoundariesToPostData;
    NSURL *_logFileURL;
    NSString *_type;
    NSArray *_tags;
    NSString *_appVersion;
    NSString *_inAppSupportTicketID;
}

+ (id)compressedDataFromUncompressedObjects:(id)arg1 forLogName:(id)arg2 paramName:(id)arg3;
+ (id)compressedPostDataForFileURL:(id)arg1 logName:(id)arg2 logParam:(id)arg3 stackTraceOnly:(_Bool)arg4 addingBoundaries:(_Bool)arg5;
+ (id)prefixDataForFilename:(id)arg1 paramName:(id)arg2;
+ (id)stackTraceDataWithPath:(id)arg1 filename:(id)arg2;
+ (id)suffixData;
+ (id)uncompressedDataForFileURL:(id)arg1 stackTraceOnly:(_Bool)arg2 addingBoundaries:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (id)attachmentDirectory;
- (id)compressedPostData;
- (id)compressedStackTraceData;
- (_Bool)hasAttachment;
@property(copy, nonatomic) NSString *inAppSupportTicketID; // @synthesize inAppSupportTicketID=_inAppSupportTicketID;
- (id)initWithAppleDiagnosticFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithSymbolicLinkURL:(id)arg1;
@property(readonly, nonatomic) _Bool isAppleDiagnostic; // @synthesize isAppleDiagnostic=_isAppleDiagnostic;
- (void)loadAttachmentURL;
- (void)loadSecondaryLogFiles;
@property(readonly, nonatomic) NSURL *logFileURL; // @synthesize logFileURL=_logFileURL;
- (void)remove;
- (void)removeAttachment;
@property(nonatomic) _Bool skipAddingFileBoundariesToPostData; // @synthesize skipAddingFileBoundariesToPostData=_skipAddingFileBoundariesToPostData;
@property(readonly, nonatomic) _Bool shouldForce; // @synthesize shouldForce=_shouldForce;
- (unsigned long long)size;
@property(readonly, nonatomic) _Bool supportExceptionOnlyLoad; // @synthesize supportExceptionOnlyLoad=_supportExceptionOnlyLoad;
@property(readonly, copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;

@end

