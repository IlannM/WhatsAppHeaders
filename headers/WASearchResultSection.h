//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString, WASearchResultsSectionEnum;

@interface WASearchResultSection : NSObject <NSCopying>
{
    NSArray *_objects;
    _Bool _allObjectsLoaded;
    _Bool _loadingObjects;
    NSString *_localizedTitle;
    unsigned long long _sectionType;
    double _searchTime;
    NSNumber *_countOfResults;
}

- (void).cxx_destruct;
- (void)addObjects:(id)arg1;
@property(nonatomic) _Bool allObjectsLoaded; // @synthesize allObjectsLoaded=_allObjectsLoaded;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSNumber *countOfResults; // @synthesize countOfResults=_countOfResults;
- (id)initWithObjectType:(unsigned long long)arg1;
@property(nonatomic, getter=isLoadingObjects) _Bool loadingObjects; // @synthesize loadingObjects=_loadingObjects;
- (_Bool)isObjectValid:(id)arg1;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long objectCount;
@property(readonly, nonatomic) WASearchResultsSectionEnum *objectEnum;
- (id)objects;
- (id)removeInvalidRows;
- (unsigned long long)replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
@property(nonatomic) double searchTime; // @synthesize searchTime=_searchTime;
@property(readonly, nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;

@end
