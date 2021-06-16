//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WABackupIdentityHelper : NSObject
{
}

+ (unsigned long long)backupFileHeaderLengthForKeyType:(long long)arg1;
+ (unsigned long long)backupFileLengthForKeyType:(long long)arg1;
+ (unsigned char)backupFileVersionForKeyType:(long long)arg1;
+ (unsigned long long)backupIdentityLengthForKeyType:(long long)arg1;
+ (unsigned long long)backupKeyLengthForKeyType:(long long)arg1;
+ (long long)backupKeyType;
+ (id)generateAccountHashForSalt:(id)arg1;
+ (id)generateAccountSalt;
+ (id)generateBackupIdentityWithData:(id)arg1 keyType:(long long)arg2;

@end
