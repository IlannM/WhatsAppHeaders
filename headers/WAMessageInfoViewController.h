//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAChatMessagesViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WADetailsTableSizeObserver-Protocol.h"
#import "WANavigationControllerPopFromAnimating-Protocol.h"

@class NSString, UIScrollView, UITableView, UIView, WAMessage, WAMessageInfoSecondaryTableViewDataSource;

@interface WAMessageInfoViewController : WAChatMessagesViewController <UIGestureRecognizerDelegate, WADetailsTableSizeObserver, WANavigationControllerPopFromAnimating>
{
    UIView *_bottomBorderView;
    UIScrollView *_containerScrollView;
    _Bool _needsSetInitialPosition;
    _Bool _secondaryTableViewUpdateScheduled;
    WAMessage *_message;
    UITableView *_secondaryTableView;
    WAMessageInfoSecondaryTableViewDataSource *_secondaryTableViewDataSource;
}

+ (_Bool)automaticallyAdjustsTableViewContentInsets;
+ (_Bool)isEditModeSupported;
+ (_Bool)isMessageActive:(id)arg1;
- (void).cxx_destruct;
- (void)chatStorageDidRevokeMessages:(id)arg1;
- (id)createSecondaryTableView;
- (id)createSecondaryTableViewDataSource;
- (void)dealloc;
- (void)didDeleteMessagesInChatSession:(id)arg1;
- (void)didUpdateMessage:(id)arg1;
- (void)fadeOutDateBubblesWithAnimation:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleMessageDeliveryStatusChangedNotification:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (void)layoutContainerView;
@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
- (id)popFromAnimationIdentifier;
- (void)popViewController;
- (id)preferredPopFromInteractionController;
- (unsigned long long)presentationContextForBubbleTableViewCell:(id)arg1;
- (void)reloadAfterFontSizeDidChange;
- (void)reloadMessagesControllerAtMessage:(id)arg1;
- (void)reloadTableViewAfterExpandingMessageBubble;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) UITableView *secondaryTableView; // @synthesize secondaryTableView=_secondaryTableView;
@property(readonly, nonatomic) WAMessageInfoSecondaryTableViewDataSource *secondaryTableViewDataSource; // @synthesize secondaryTableViewDataSource=_secondaryTableViewDataSource;
- (void)setNeedsUpdateSecondaryTableView;
- (void)stickerPackViewController:(id)arg1 didTapDownloadButtonForStickerPack:(id)arg2;
- (void)tableViewContentSizeDidChange;
- (void)tableViewContentSizeWillChange;
- (id)uniqueIdentifier;
- (void)updateSecondaryTableView;
- (void)updateViewPositions;
- (_Bool)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

