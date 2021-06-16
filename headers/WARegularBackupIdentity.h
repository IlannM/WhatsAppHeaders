//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WABackupIdentity-Protocol.h"

@class NSData, NSString;

@interface WARegularBackupIdentity : NSObject <WABackupIdentity>
{
    unsigned char _serverKeyVersion;
    NSData *_serverSalt;
    NSData *_accountSalt;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *accountSalt; // @synthesize accountSalt=_accountSalt;
@property(readonly, copy, nonatomic) NSString *compositeKey;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithKeyVersion:(unsigned char)arg1 serverSalt:(id)arg2 accountSalt:(id)arg3;
- (_Bool)isEqualToIdentity:(id)arg1;
@property(readonly, nonatomic) unsigned char serverKeyVersion; // @synthesize serverKeyVersion=_serverKeyVersion;
@property(readonly, copy, nonatomic) NSData *serverSalt; // @synthesize serverSalt=_serverSalt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
