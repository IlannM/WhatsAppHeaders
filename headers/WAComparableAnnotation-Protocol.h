//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAUserJID;
@protocol WAComparableAnnotation;

@protocol WAComparableAnnotation <NSObject>
@property(readonly, nonatomic) WAUserJID *comparableAnnotationUserJID;
- (long long)compareToComparableAnnotation:(id <WAComparableAnnotation>)arg1;
@end

