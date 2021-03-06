//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAParticipantReceipts, WAUserJID;

@interface WAGroupReceiptRow : NSObject
{
    _Bool _knownContact;
    WAUserJID *_userJID;
    NSString *_fullNameOrFormattedPhoneNumber;
    NSString *_formattedPushName;
    WAParticipantReceipts *_participantReceipts;
    unsigned long long _groupReceiptSectionType;
}

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
@property(readonly, copy, nonatomic) NSString *formattedPushName; // @synthesize formattedPushName=_formattedPushName;
@property(readonly, copy, nonatomic) NSString *fullNameOrFormattedPhoneNumber; // @synthesize fullNameOrFormattedPhoneNumber=_fullNameOrFormattedPhoneNumber;
@property(readonly, nonatomic) unsigned long long groupReceiptSectionType; // @synthesize groupReceiptSectionType=_groupReceiptSectionType;
- (id)initWithUserJID:(id)arg1 participantReceipts:(id)arg2 chatStorage:(id)arg3;
@property(readonly, copy, nonatomic) WAParticipantReceipts *participantReceipts; // @synthesize participantReceipts=_participantReceipts;
- (_Bool)updateParticipantReceipts:(id)arg1;
@property(readonly, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;

@end

