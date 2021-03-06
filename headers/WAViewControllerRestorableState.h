//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface WAViewControllerRestorableState : NSObject <NSSecureCoding>
{
    NSString *_restorationIdentifier;
    NSMutableArray *_children;
    NSData *_data;
}

+ (id)restorableStateWithViewController:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void)didRestoreViewController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
- (id)subtreeWithRestorationIdentifier:(id)arg1;

@end

