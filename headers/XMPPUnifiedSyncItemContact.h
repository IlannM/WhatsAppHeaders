//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "XMPPUnifiedSyncItemBase.h"

@class NSString;

@interface XMPPUnifiedSyncItemContact : XMPPUnifiedSyncItemBase
{
    _Bool _deleted;
    NSString *_phoneNumber;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
- (id)initWithPhoneNumber:(id)arg1 deleted:(_Bool)arg2;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)serialize;

@end

