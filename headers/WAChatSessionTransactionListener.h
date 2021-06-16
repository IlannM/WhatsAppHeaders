//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAChatSessionTransactionListener : NSObject
{
    CDUnknownBlockType _markedArchived;
    CDUnknownBlockType _markedTrusted;
    CDUnknownBlockType _changedSubject;
    CDUnknownBlockType _changedParticipant;
    CDUnknownBlockType _handleMessages;
    CDUnknownBlockType _handleLifecycle;
    CDUnknownBlockType _willSaveDatabase;
    CDUnknownBlockType _didSaveDatabase;
    CDUnknownBlockType _didResetTransactions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType changedParticipant; // @synthesize changedParticipant=_changedParticipant;
@property(copy, nonatomic) CDUnknownBlockType changedSubject; // @synthesize changedSubject=_changedSubject;
@property(copy, nonatomic) CDUnknownBlockType didResetTransactions; // @synthesize didResetTransactions=_didResetTransactions;
@property(copy, nonatomic) CDUnknownBlockType didSaveDatabase; // @synthesize didSaveDatabase=_didSaveDatabase;
@property(copy, nonatomic) CDUnknownBlockType handleLifecycle; // @synthesize handleLifecycle=_handleLifecycle;
@property(copy, nonatomic) CDUnknownBlockType handleMessages; // @synthesize handleMessages=_handleMessages;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType markedArchived; // @synthesize markedArchived=_markedArchived;
@property(copy, nonatomic) CDUnknownBlockType markedTrusted; // @synthesize markedTrusted=_markedTrusted;
@property(copy, nonatomic) CDUnknownBlockType willSaveDatabase; // @synthesize willSaveDatabase=_willSaveDatabase;

@end
