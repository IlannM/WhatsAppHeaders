//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CLGeocoder, CLLocation, NSArray, NSMutableArray, NSMutableSet, NSString, WAPlace;
@protocol WALocationSearchDelegate, WALocationSearchEngine;

@interface WALocationSearch : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_nextResultsPageURLString;
    unsigned long long _defaultSource;
    NSMutableSet *_cachesCreatedThisSession;
    _Bool _moreResultsAvailable;
    NSMutableArray *_searchHistory;
    id <WALocationSearchEngine> _searchEngine;
    WAPlace *_boostedPlace;
    CLGeocoder *_geocoder;
    _Bool _requestInProgress;
    _Bool _desireTransparentIconBackgrounds;
    _Bool _boostCity;
    id <WALocationSearchDelegate> _delegate;
    CLLocation *_searchLocation;
    double _searchRadius;
    NSArray *_places;
    NSString *_placeSearchCriteria;
}

- (void).cxx_destruct;
- (void)abandonSearch;
- (void)addSearchHistoryItem:(id)arg1;
@property(nonatomic) _Bool boostCity; // @synthesize boostCity=_boostCity;
@property(nonatomic) __weak id <WALocationSearchDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool desireTransparentIconBackgrounds; // @synthesize desireTransparentIconBackgrounds=_desireTransparentIconBackgrounds;
- (id)dispatchGroupForNewReverseGeocodeSearchOnLocation:(id)arg1;
- (void)fetchNextPage;
- (id)fullPathToSearchHistoryFile;
- (id)init;
- (void)invalidateResults;
- (void)loadDefaultSource;
- (void)loadMoreResults;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)placeForPlacemark:(id)arg1 location:(id)arg2;
@property(copy, nonatomic) NSString *placeSearchCriteria; // @synthesize placeSearchCriteria=_placeSearchCriteria;
@property(copy, nonatomic) NSArray *places; // @synthesize places=_places;
- (void)processSearchResultsWithAttribution:(unsigned long long)arg1 error:(id)arg2 places:(id)arg3 fieldStats:(id)arg4 source:(long long)arg5 nextResultsPageURLString:(id)arg6;
- (void)produceResults:(id)arg1 add:(_Bool)arg2 cache:(_Bool)arg3 moreAvailable:(_Bool)arg4 source:(long long)arg5;
- (void)reallyProduceResults:(id)arg1 add:(_Bool)arg2 moreAvailable:(_Bool)arg3;
- (void)removeAllResults;
- (void)removeSearchHistoryItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) _Bool requestInProgress; // @synthesize requestInProgress=_requestInProgress;
- (_Bool)searchCache:(id)arg1;
- (void)searchForPlaces;
@property(retain, nonatomic) CLLocation *searchLocation; // @synthesize searchLocation=_searchLocation;
@property(nonatomic) double searchRadius; // @synthesize searchRadius=_searchRadius;
- (void)searchWithApple:(id)arg1 fieldStats:(id)arg2;
- (void)searchWithCriteria:(id)arg1;
- (void)searchWithEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchWithEngine:(id)arg1 group:(id)arg2 fieldStats:(id)arg3;
- (void)searchWithFoursquare:(id)arg1 fieldStats:(id)arg2;
- (void)searchWithLocation:(id)arg1;
- (void)stopPlaceSearch;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)useFallbackForSource:(unsigned long long)arg1 submitFailure:(_Bool)arg2 fieldStats:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

