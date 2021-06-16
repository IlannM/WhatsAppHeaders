//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class WAUserJID;

@interface WACallEventParticipant : NSObject <NSSecureCoding>
{
    short _outcome;
    WAUserJID *_jid;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJID:(id)arg1 outcome:(short)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) WAUserJID *jid; // @synthesize jid=_jid;
@property(readonly, nonatomic) short outcome; // @synthesize outcome=_outcome;

@end

