//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WALinkLabelDelegate-Protocol.h"

@class NSArray, NSString, UIPanGestureRecognizer, UITableView, UITableViewCell, UIView, WAFailNotifyingTapGestureRecognizer, WALinkLabel, WATouchDownGestureRecognizer;
@protocol WAShareLocationTableViewDelegate;

@interface WAShareLocationTableViewController : UIViewController <UIGestureRecognizerDelegate, WALinkLabelDelegate, UITableViewDataSource, UITableViewDelegate>
{
    long long _numberOfNonEmptyCells;
    long long _searchingRowIndex;
    long long _loadingMoreRowIndex;
    long long _emptyRowIndex;
    UITableViewCell *_cellLoadingMore;
    UITableViewCell *_cellThisPlace;
    UIView *_attributionTextView;
    WALinkLabel *_attributionTextLabel;
    double _emptyCellHeight;
    _Bool _hasBeenDragged;
    NSArray *_places;
    WATouchDownGestureRecognizer *_touchRecognizer;
    WAFailNotifyingTapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _previousTranslation;
    UIView *_headerSeparator;
    _Bool _dragging;
    _Bool _expanded;
    _Bool _scrolled;
    long long _nearbyPlacesIndex;
    long long _thisPlaceIndex;
    long long _cellsBeforePlaces;
    _Bool _moreResultsAvailable;
    _Bool _thisPlaceIsUserLocation;
    _Bool _trackingUserLocation;
    _Bool _removeLiveLocationCell;
    _Bool _haveCurrentLocation;
    id <WAShareLocationTableViewDelegate> _delegate;
    UITableView *_tableView;
    NSString *_attribution;
    double _rowHeight;
    NSString *_thisPlaceDetailText;
    double _preferredHeight;
    UITableViewCell *_cellSendMyLocation;
    unsigned long long _context;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) UITableViewCell *cellSendMyLocation; // @synthesize cellSendMyLocation=_cellSendMyLocation;
- (double)computedEmptyHeight;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
- (double)currentOffset;
- (void)dealloc;
@property(nonatomic) __weak id <WAShareLocationTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)didEmptyHeightChange;
- (void)didUpdatePlacesWithPreviousCount:(unsigned long long)arg1 add:(_Bool)arg2 moreAvailable:(_Bool)arg3;
- (void)fontSizeDidChange;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
@property(nonatomic) _Bool haveCurrentLocation; // @synthesize haveCurrentLocation=_haveCurrentLocation;
- (void)iconCacheDidDownloadImage:(id)arg1 forURL:(id)arg2;
- (id)imageForThisPlaceCell;
- (id)initWithContext:(unsigned long long)arg1;
- (id)liveLocationCell;
- (void)loadView;
@property(nonatomic) _Bool moreResultsAvailable; // @synthesize moreResultsAvailable=_moreResultsAvailable;
- (id)nearbyPlacesCell;
- (double)nearbyPlacesRowHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)panGestureAction:(id)arg1;
- (id)placeCellAtIndex:(long long)arg1;
- (struct CGSize)preferredContentSize;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(nonatomic) _Bool removeLiveLocationCell; // @synthesize removeLiveLocationCell=_removeLiveLocationCell;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)searchStatusCell;
- (void)setStandardFontInCell:(id)arg1 plus:(double)arg2;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *thisPlaceDetailText; // @synthesize thisPlaceDetailText=_thisPlaceDetailText;
@property(nonatomic) _Bool thisPlaceIsUserLocation; // @synthesize thisPlaceIsUserLocation=_thisPlaceIsUserLocation;
@property(nonatomic) _Bool trackingUserLocation; // @synthesize trackingUserLocation=_trackingUserLocation;
- (_Bool)shouldSnapToTopWithVelocity:(double)arg1;
- (void)snapWithPanGestureRecognizer:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tapGestureAction:(id)arg1;
- (id)thisPlaceCell;
- (void)tintColorDidChange;
- (void)touchGestureAction:(id)arg1;
- (void)updateExpanded;
- (void)updateIndices;
- (void)updateThisPlaceCellText;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)wa_autoExpandOnContentSizeChange;
- (void)wa_cardDidDisappear;
- (id)wa_cardNavigationControllerAccessoryView;
- (_Bool)wa_cardNavigationControllerShouldHaveDragHandle;
- (double)wa_minimumVisibleCardHeight;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
