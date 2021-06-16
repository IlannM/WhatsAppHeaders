//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WACardTableViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WALiveLocationFriendsTableViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, WATapToShareLocationView;
@protocol WALiveLocationFriendsDataSource, WALiveLocationFriendsDelegate;

@interface WALiveLocationFriendsTableViewController : WACardTableViewController <UITableViewDelegate, WALiveLocationFriendsTableViewCellDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    _Bool _disableAutoGrow;
    NSMutableArray *_rows;
    _Bool _needsRebalance;
    WATapToShareLocationView *_tapToShareView;
    id <WALiveLocationFriendsDataSource> _dataSource;
    id <WALiveLocationFriendsDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)amSharing;
@property(readonly, nonatomic) NSString *cellNibName;
- (void)confirmStopSharing:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <WALiveLocationFriendsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WALiveLocationFriendsDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)liveLocationFriendsTableViewCellStopSharing;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setFriendLocations:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateFriendLocation:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)wa_autoExpandOnContentSizeChange;
- (id)wa_cardNavigationControllerAccessoryView;
- (_Bool)wa_cardNavigationControllerShouldHaveDragHandle;
- (_Bool)wa_cardNavigationControllerShouldHaveFlatTop;
- (id)wa_cardNavigationControllerTitleColor;
- (struct UIEdgeInsets)wa_cardNavigationControllerTitlePadding;
- (_Bool)wa_cardNavigationControllerTitleSeparator;
- (double)wa_minimumVisibleCardHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

