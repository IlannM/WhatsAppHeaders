//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAMediaUploadable <NSObject>
@property(readonly, copy, nonatomic) NSString *directPath;
@property(readonly, copy, nonatomic) NSString *fileHash;
@property(readonly, nonatomic) long long httpRetryCount;
@property(readonly, nonatomic) _Bool isMultiVCardMessage;
@property(readonly, nonatomic) _Bool isPTT;
@property(readonly, nonatomic) int listMessageType;
@property(readonly, copy, nonatomic) NSString *mediaFilePath;
@property(readonly, nonatomic) int mediaOrigin;
@property(readonly, nonatomic) int mediaType;
@property(readonly, copy, nonatomic) NSString *stanzaID;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, copy, nonatomic) NSString *wa_MIMEType;
@end

