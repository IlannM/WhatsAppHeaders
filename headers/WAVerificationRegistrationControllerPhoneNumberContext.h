//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WAUserJID;

@interface WAVerificationRegistrationControllerPhoneNumberContext : NSObject
{
    _Bool _hidesBackButton;
    WAUserJID *_disallowedJID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WAUserJID *disallowedJID; // @synthesize disallowedJID=_disallowedJID;
@property(readonly, nonatomic) _Bool hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
- (id)initWithHidesBackButton:(_Bool)arg1 disallowedJID:(id)arg2;

@end

