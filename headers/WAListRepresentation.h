//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WABroadcastJID;

@interface WAListRepresentation : NSObject
{
    WABroadcastJID *_listJID;
    NSString *_name;
    NSArray *_recipientJIDs;
}

- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) WABroadcastJID *listJID; // @synthesize listJID=_listJID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSArray *recipientJIDs; // @synthesize recipientJIDs=_recipientJIDs;

@end
