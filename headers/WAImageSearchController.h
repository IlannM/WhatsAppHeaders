//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UISearchBar, WAActivityIndicatorView, WAImageListScrollView;
@protocol WAImageSearchControllerDelegate;

@interface WAImageSearchController : WAViewController <UIScrollViewDelegate, UISearchBarDelegate>
{
    _Bool _dismissOnApplicationDidEnterBackground;
    UISearchBar *_searchBar;
    WAImageListScrollView *_scrollView;
    WAActivityIndicatorView *_activityIndicator;
    UILabel *_labelNoResults;
    UIButton *_buttonLoadMore;
    UIImageView *_bingAttribution;
    NSMutableArray *_imageURLs;
    NSMutableArray *_sourceURLs;
    NSMutableArray *_thumbnailViews;
    UIImageView *_highlightedImageView;
    long long _searchOffset;
    long long _resultsCount;
    NSString *_preloadedSearchText;
    id <WAImageSearchControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addSearchResults:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)clearAction:(id)arg1;
@property(nonatomic) __weak id <WAImageSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doSearch:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)layoutScrollviewSubviews;
- (void)loadMoreAction:(id)arg1;
@property(copy, nonatomic) NSString *preloadedSearchText; // @synthesize preloadedSearchText=_preloadedSearchText;
- (void)processImageSearchResponseData:(id)arg1 error:(id)arg2;
- (void)resetSearchResults;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)selectMediaAtIndex:(unsigned long long)arg1;
- (void)showActivity:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)wa_applicationDidEnterBackground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
