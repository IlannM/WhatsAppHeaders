//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSURLResponse, WAGIFBatchToken;

@protocol WAGIFSearchResponse <NSObject>
@property(readonly, nonatomic) WAGIFBatchToken *batchToken;
@property(readonly, nonatomic) NSArray *gifs;
- (id)initWithJSON:(NSData *)arg1 response:(NSURLResponse *)arg2 batchSize:(unsigned long long)arg3 batchToken:(WAGIFBatchToken *)arg4;
@property(readonly, nonatomic) WAGIFBatchToken *nextBatchToken;
@property(readonly, nonatomic) NSURLResponse *urlResponse;
@end
