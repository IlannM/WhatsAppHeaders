//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/GPBMessage.h>

@class GPBEnumArray, NSMutableArray;

@interface WAPBHistorySyncCompanionPersistentState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *finishedSyncTypesArray; // @dynamic finishedSyncTypesArray;
@property(readonly, nonatomic) unsigned long long finishedSyncTypesArray_Count; // @dynamic finishedSyncTypesArray_Count;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @dynamic messagesArray;
@property(readonly, nonatomic) unsigned long long messagesArray_Count; // @dynamic messagesArray_Count;
@property(nonatomic) unsigned int nextChunkNumber; // @dynamic nextChunkNumber;

@end

