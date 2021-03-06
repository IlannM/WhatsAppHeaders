//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABackupInformation.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber;

@interface WAMutableBackupInformation : WABackupInformation
{
    NSMutableDictionary *_mutableData;
}

- (void).cxx_destruct;
- (id)data;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)saveToPath:(id)arg1 error:(out id *)arg2;
@property(retain, nonatomic) NSNumber *backupKeyType; // @dynamic backupKeyType;
- (void)setData:(id)arg1;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSDictionary *fileSizes; // @dynamic fileSizes;
@property(retain, nonatomic) NSNumber *includeVideos; // @dynamic includeVideos;
@property(retain, nonatomic) NSNumber *size; // @dynamic size;
@property(retain, nonatomic) NSNumber *sizeOfMedia; // @dynamic sizeOfMedia;
@property(retain, nonatomic) NSNumber *version; // @dynamic version;

@end

