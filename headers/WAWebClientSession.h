//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, WAWebClientSessionData;

@interface WAWebClientSession : NSObject
{
    WAWebClientSessionData *_sessionData;
    _Bool _syncInProgress;
    _Bool _preemptiveChatResponseSent;
    _Bool _preemptiveContactsResponseSent;
    NSData *_sharedSecret;
}

+ (void)clearCurrent;
+ (id)currentBrowserID;
+ (id)currentSession;
+ (id)existingSessionWithBrowserID:(id)arg1;
+ (void)fixExpirationTimeOfOldTemporarySessions;
+ (id)mostRecentlyActiveSession;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *browserID;
@property(copy, nonatomic) NSString *browserName;
@property(nonatomic) long long browserType;
@property(copy, nonatomic) NSString *clientToken;
- (id)copyOfSessionData;
- (void)createAndSave;
- (id)decryptData:(id)arg1;
- (id)description;
- (id)deserialize:(id)arg1;
@property(copy, nonatomic) NSDate *deviceLoginTime;
- (id)encrypt:(id)arg1;
- (id)encryptData:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *firstPushTime;
- (id)hashWithSharedSecret:(id)arg1;
- (id)initWithNewBrowserID:(id)arg1 deviceLoginTime:(id)arg2;
- (id)initWithSessionData:(id)arg1 sharedSecret:(id)arg2;
@property(readonly, nonatomic, getter=isPortal) _Bool portal;
@property(readonly, nonatomic, getter=isTablet) _Bool tablet;
@property(copy, nonatomic) NSDate *lastActiveTime;
@property(readonly, copy, nonatomic) NSDate *lastPushTime;
@property(copy, nonatomic) NSString *locationCity;
@property(copy, nonatomic) NSString *locationRegion;
- (void)makeCurrent;
- (void)makeInactive;
- (void)makeTemporary;
@property(copy, nonatomic) NSString *operatingSystemName;
@property(nonatomic) _Bool preemptiveChatResponseSent; // @synthesize preemptiveChatResponseSent=_preemptiveChatResponseSent;
@property(nonatomic) _Bool preemptiveContactsResponseSent; // @synthesize preemptiveContactsResponseSent=_preemptiveContactsResponseSent;
- (void)remove;
- (void)resetState;
- (void)resetTimeoutIfNeeded;
- (void)save;
- (id)serialize:(id)arg1;
- (void)setOrExtendTimeoutIfNeeded;
- (void)setPushTime:(id)arg1;
@property(copy, nonatomic) NSData *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(nonatomic) _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
@property(copy, nonatomic) NSString *webRef;

@end

