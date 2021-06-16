//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WATarContentMetadata, WATarHeaderMetadata;

@interface WATarItemMetadata : NSObject
{
    id <WATarHeaderMetadata> _headerMetadata;
    id <WATarContentMetadata> _contentMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <WATarContentMetadata> contentMetadata; // @synthesize contentMetadata=_contentMetadata;
@property(readonly, nonatomic) id <WATarHeaderMetadata> headerMetadata; // @synthesize headerMetadata=_headerMetadata;
- (id)initWithHeaderMetadata:(id)arg1 contentMetadata:(id)arg2;

@end

