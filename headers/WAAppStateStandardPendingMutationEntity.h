//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAStorageManagedObject.h>

@class NSData, NSDate, NSString;

@interface WAAppStateStandardPendingMutationEntity : WAStorageManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic, copy) NSData *encryptionKeyID; // @dynamic encryptionKeyID;
@property(nonatomic, copy) NSData *index; // @dynamic index;
@property(nonatomic) short operation; // @dynamic operation;
@property(nonatomic) long long state; // @dynamic state;
@property(nonatomic, copy) NSString *targetID; // @dynamic targetID;
@property(nonatomic, copy) NSData *value; // @dynamic value;

@end

