//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAGIFSearchResponse-Protocol.h"

@class NSArray, NSString, NSURLResponse, WAGIFBatchToken;

@interface WATenorSearchResponse : NSObject <WAGIFSearchResponse>
{
    WAGIFBatchToken *_batchToken;
    NSArray *_gifs;
    WAGIFBatchToken *_nextBatchToken;
    NSURLResponse *_urlResponse;
}

+ (id)gifsInJSON:(id)arg1;
+ (id)nextToken:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WAGIFBatchToken *batchToken; // @synthesize batchToken=_batchToken;
@property(readonly, nonatomic) NSArray *gifs; // @synthesize gifs=_gifs;
- (id)initWithJSON:(id)arg1 response:(id)arg2 batchSize:(unsigned long long)arg3 batchToken:(id)arg4;
@property(readonly, nonatomic) WAGIFBatchToken *nextBatchToken; // @synthesize nextBatchToken=_nextBatchToken;
@property(readonly, nonatomic) NSURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

