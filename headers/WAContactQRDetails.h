//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAUserJID;

@interface WAContactQRDetails : NSObject
{
    WAUserJID *_jid;
    unsigned long long _type;
    NSString *_pushName;
    NSString *_message;
    unsigned long long _verifiedLevel;
}

+ (unsigned long long)typeFromString:(id)arg1;
+ (unsigned long long)verifiedLevelFromString:(id)arg1;
- (void).cxx_destruct;
- (id)initWithJID:(id)arg1 type:(unsigned long long)arg2 pushName:(id)arg3 message:(id)arg4 verifiedLevel:(unsigned long long)arg5;
@property(readonly, nonatomic) WAUserJID *jid; // @synthesize jid=_jid;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *pushName; // @synthesize pushName=_pushName;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long verifiedLevel; // @synthesize verifiedLevel=_verifiedLevel;

@end
