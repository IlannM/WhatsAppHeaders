//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAAddressBookPropertyPicker;

@protocol WAAddressBookPropertyPickerDelegate <NSObject>
- (void)addressBookPropertyPicker:(WAAddressBookPropertyPicker *)arg1 didFinishWithProperty:(NSString *)arg2;
- (void)addressBookPropertyPickerDidCancel:(WAAddressBookPropertyPicker *)arg1;
@end

