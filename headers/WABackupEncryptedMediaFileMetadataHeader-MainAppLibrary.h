//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABackupEncryptedMediaFileMetadataHeader.h"

#import "WATarContentMetadata-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface WABackupEncryptedMediaFileMetadataHeader (MainAppLibrary) <WATarContentMetadata>
@property(nonatomic, readonly) NSNumber *extractedSize;
@property(nonatomic, readonly) NSString *filePath;
@property(nonatomic, readonly) NSString *linkPath;
@property(nonatomic, readonly) NSDate *mtime;
@end

