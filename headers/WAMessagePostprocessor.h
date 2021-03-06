//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, WADecryptedMessagePayloadProcessorDependencies;

@interface WAMessagePostprocessor : NSObject
{
    NSArray *_decryptedMessagePayloads;
    WADecryptedMessagePayloadProcessorDependencies *_dependencies;
    NSMutableDictionary *_revokedMessageSignals;
    NSSet *_messageKeysToUnregister;
    CDUnknownBlockType _dataSource;
    NSMutableDictionary *_dupMessages;
    NSMutableArray *_newlyCreatedMessages;
    NSMutableArray *_updatedMessages;
    NSMutableSet *_messagesToDelete;
    NSMutableArray *_messageStanzasToSendDeliveryReceiptFor;
    NSMutableArray *_messageIdsToSendDeliveryReceiptFor;
    NSArray *_journalIDs;
    NSMutableArray *_completionBlocks;
    NSArray *_messageKeysForExistingReceipts;
}

+ (id)classesForProcessorsAfterMessageCreation;
+ (id)classesForProcessorsBeforeMessageCreation;
+ (void)recordMessageReceivedEventForWAMessage:(id)arg1 messageStanza:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSMutableDictionary *dupMessages; // @synthesize dupMessages=_dupMessages;
- (void)handleOutputs:(id)arg1 payload:(id)arg2;
- (id)initWithDecryptedMessagePayloads:(id)arg1 revokedMessageSignals:(id)arg2 xmppConnection:(id)arg3 bizManager:(id)arg4 chatStorage:(id)arg5 triggeredBlockHelper:(id)arg6 persistentRequestManager:(id)arg7 dataSource:(CDUnknownBlockType)arg8;
- (id)initializeWithDecryptedMessages:(id)arg1;
@property(readonly, nonatomic) NSArray *journalIDs; // @synthesize journalIDs=_journalIDs;
@property(readonly, nonatomic) NSMutableArray *messageIdsToSendDeliveryReceiptFor; // @synthesize messageIdsToSendDeliveryReceiptFor=_messageIdsToSendDeliveryReceiptFor;
@property(readonly, nonatomic) NSArray *messageKeysForExistingReceipts; // @synthesize messageKeysForExistingReceipts=_messageKeysForExistingReceipts;
@property(readonly, nonatomic) NSSet *messageKeysToUnregister; // @synthesize messageKeysToUnregister=_messageKeysToUnregister;
@property(readonly, nonatomic) NSMutableArray *messageStanzasToSendDeliveryReceiptFor; // @synthesize messageStanzasToSendDeliveryReceiptFor=_messageStanzasToSendDeliveryReceiptFor;
@property(readonly, nonatomic) NSMutableSet *messagesToDelete; // @synthesize messagesToDelete=_messagesToDelete;
- (id)newMessageWithPayload:(id)arg1 existingMessages:(id)arg2;
- (id)newPayloadProcessorInputsForPayloads:(id)arg1 existingMessages:(id)arg2 existingStatusChangeRequests:(id)arg3;
@property(readonly, nonatomic) NSMutableArray *newlyCreatedMessages; // @synthesize newlyCreatedMessages=_newlyCreatedMessages;
- (void)processDecryptedMessages:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *revokedMessageSignals; // @synthesize revokedMessageSignals=_revokedMessageSignals;
- (_Bool)runPostMessageProcessor:(Class)arg1 withInputs:(id)arg2 payload:(id)arg3 message:(id)arg4;
- (_Bool)runPreMessageProcessor:(Class)arg1 withInputs:(id)arg2 payload:(id)arg3;
@property(readonly, nonatomic) NSMutableArray *updatedMessages; // @synthesize updatedMessages=_updatedMessages;

@end

