//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC14MainAppLibrary33CatalogMediaSectionViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC14MainAppLibrary28CatalogSectionViewController : _TtC14MainAppLibrary33CatalogMediaSectionViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    MISSING_TYPE *catalog;
    MISSING_TYPE *delegate;
    MISSING_TYPE *acceptedProducts;
    MISSING_TYPE *retryCount;
    MISSING_TYPE *emptyLabel;
    MISSING_TYPE *bag;
    MISSING_TYPE *maximumNumberOfAcceptedProducts;
    MISSING_TYPE *excludeProductId;
    MISSING_TYPE *session;
    MISSING_TYPE *horizontalContentInset;
    MISSING_TYPE *$__lazy_storage_$_placeholdersView;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
