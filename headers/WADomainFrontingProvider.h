//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WADomainFrontingProvider : NSObject
{
    NSString *_name;
    NSString *_urlStringTemplate;
    NSString *_host;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)initWithName:(id)arg1 urlStringTemplate:(id)arg2 host:(id)arg3;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *urlStringTemplate; // @synthesize urlStringTemplate=_urlStringTemplate;
- (id)urlStringWithPath:(id)arg1 query:(id)arg2;

@end

