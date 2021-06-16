//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageButtonsSlice.h"

@class NSArray;

@interface WAMessageContactButtonsSlice : WAMessageButtonsSlice
{
    NSArray *_contacts;
    unsigned long long _actionMode;
}

+ (_Bool)canShowButtonsForContacts:(id)arg1;
+ (unsigned long long)modeForContacts:(id)arg1;
+ (Class)viewClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long actionMode; // @synthesize actionMode=_actionMode;
@property(readonly, copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)initWithMessages:(id)arg1 metrics:(id)arg2 contacts:(id)arg3;

@end
