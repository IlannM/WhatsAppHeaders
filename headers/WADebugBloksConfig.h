//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSString;

@interface WADebugBloksConfig : NSObject
{
    NSString *_appID;
    NSOrderedSet *_parameters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithAppID:(id)arg1 parameters:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDebugBloksConfig:(id)arg1;
@property(readonly, copy, nonatomic) NSOrderedSet *parameters; // @synthesize parameters=_parameters;

@end
