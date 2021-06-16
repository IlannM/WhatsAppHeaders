//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString, UIImage;
@protocol NSFetchedResultsControllerDelegate><WAStickerPackDownloadingListManagerDelegate;

@protocol WAStickerListHelper
@property(readonly, nonatomic) _Bool canEdit;
- (void)didTapActionButton;
@property(readonly, nonatomic) UIImage *emptyScreenImage;
@property(readonly, nonatomic) UIImage *errorScreenImage;
@property(readonly, nonatomic) NSString *errorScreenMessage;
@property(readonly, nonatomic) _Bool shouldHideAccessoryViewIfPossible;
- (NSArray *)stickerPackManagersWithDelegate:(id <NSFetchedResultsControllerDelegate><WAStickerPackDownloadingListManagerDelegate>)arg1;
@end

