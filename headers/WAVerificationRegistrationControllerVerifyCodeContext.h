//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WARegistrationSession;

@interface WAVerificationRegistrationControllerVerifyCodeContext : NSObject
{
    _Bool _fromUserAction;
    NSString *_code;
    WARegistrationSession *_session;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(readonly, nonatomic) _Bool fromUserAction; // @synthesize fromUserAction=_fromUserAction;
- (id)initWithCode:(id)arg1 fromUserAction:(_Bool)arg2 session:(id)arg3;
@property(readonly, nonatomic) WARegistrationSession *session; // @synthesize session=_session;

@end
