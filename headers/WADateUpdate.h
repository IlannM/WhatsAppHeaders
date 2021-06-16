//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol WAServerDate;

@interface WADateUpdate : NSObject
{
    NSDate<WAServerDate> *_date;
    unsigned long long _type;
}

+ (id)dateUpdateToEraseDate;
+ (id)dateUpdateWithNoChange;
+ (id)dateUpdateWithValidDate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate<WAServerDate> *date; // @synthesize date=_date;
- (id)description;
- (id)initWithDate:(id)arg1 type:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

@end
