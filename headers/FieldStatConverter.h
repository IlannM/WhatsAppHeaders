//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FieldStatConverter : NSObject
{
}

+ (void)convert:(const CDStruct_e89ebb9d *)arg1 to:(id)arg2;
+ (void)convertField:(id)arg1 withValue:(id)arg2 forKey:(id)arg3;
+ (void)convertJoinableCallFieldStats:(const CDStruct_bf2b3f8b *)arg1 to:(id)arg2;
+ (void)convertNumField:(id)arg1 withValue:(double)arg2 forKey:(id)arg3;
+ (void)convertStrField:(id)arg1 withValue:(const char *)arg2 forKey:(id)arg3;
+ (void)convertStruct:(const CDStruct_94670047 *)arg1 withData:(const void *)arg2 to:(id)arg3;
+ (void)convertTimerField:(id)arg1 withValue:(double)arg2 forKey:(id)arg3;

@end
