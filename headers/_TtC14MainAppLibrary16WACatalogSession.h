//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class MISSING_TYPE, NSString, WAUserJID;

@interface _TtC14MainAppLibrary16WACatalogSession : NSObject <NSSecureCoding>
{
    MISSING_TYPE *ownerJID;
    MISSING_TYPE *sessionID;
    MISSING_TYPE *catalogEntryPoint;
    MISSING_TYPE *ownerBizPlatform;
    MISSING_TYPE *bag;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, readonly) long long catalogEntryPoint; // @synthesize catalogEntryPoint;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwnerJID:(id)arg1 catalogEntryPoint:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) long long ownerBizPlatform; // @synthesize ownerBizPlatform;
@property(nonatomic, readonly) WAUserJID *ownerJID; // @synthesize ownerJID;
@property(nonatomic, readonly) NSString *sessionID;

@end
