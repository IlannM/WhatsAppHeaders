//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSMutableArray;

@interface WAPBHistorySyncPersistentState_Progress : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *chunkProgressArray; // @dynamic chunkProgressArray;
@property(readonly, nonatomic) unsigned long long chunkProgressArray_Count; // @dynamic chunkProgressArray_Count;
@property(nonatomic) unsigned long long fullSyncUploadedBytes; // @dynamic fullSyncUploadedBytes;
@property(nonatomic) _Bool hasFullSyncUploadedBytes; // @dynamic hasFullSyncUploadedBytes;

@end

