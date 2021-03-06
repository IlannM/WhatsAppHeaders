//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WADeviceJID, WAKeychainItemDescriptor;

@protocol WATwoFactorManagerDependencyProvider <NSObject>
- (WAKeychainItemDescriptor *)deprecatedKeychainDescriptorForDeviceJID:(WADeviceJID *)arg1;
@property(readonly, nonatomic) _Bool isMigrationToKeychainEnabled;
- (WAKeychainItemDescriptor *)keychainDescriptorForExplicitIdentifier:(NSString *)arg1;
@property(readonly, copy, nonatomic) NSString *plistPath;
@end

