//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMMSMediaUploadOperationDelegate-Protocol.h"

@class NSData, NSError, WAMMSMediaTransferOperationAsset, WAMMSMediaUploadOperation, WAMMSMediaUploadOperationResultEncrypted, WAMediaKey, WamEventMediaUpload2;

@protocol WAMMSMediaUploadOperationEncryptedDelegate <WAMMSMediaUploadOperationDelegate>
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 didFinishWithResult:(WAMMSMediaUploadOperationResultEncrypted *)arg2 uploadEvent:(WamEventMediaUpload2 *)arg3 error:(NSError *)arg4 terminal:(_Bool)arg5;
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 needUploadReadyAssetFromAsset:(WAMMSMediaTransferOperationAsset *)arg2 completion:(void (^)(WAMMSMediaTransferOperationAsset *, WAMediaKey *, unsigned long long))arg3;
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 willBeginUploadWithMediaKey:(WAMediaKey *)arg2 asset:(WAMMSMediaTransferOperationAsset *)arg3 reuseReason:(unsigned long long)arg4 plaintextHash:(NSData *)arg5 ciphertextHash:(NSData *)arg6;
@end
