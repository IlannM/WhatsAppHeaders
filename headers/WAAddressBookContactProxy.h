//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface WAAddressBookContactProxy : NSObject
{
    id _identifier;
    NSString *_fullName;
    NSString *_givenName;
    NSString *_highlightedName;
    NSString *_sectionTitle;
    NSString *_searchTokenList;
    NSArray *_phones;
    NSDate *_modificationDate;
}

+ (id)devanagariDigits;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *highlightedName; // @synthesize highlightedName=_highlightedName;
@property(readonly, nonatomic) id identifier; // @synthesize identifier=_identifier;
- (id)initWithCNContact:(id)arg1;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(copy, nonatomic) NSString *searchTokenList; // @synthesize searchTokenList=_searchTokenList;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;

@end
