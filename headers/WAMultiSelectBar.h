//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class NSMutableSet, UIBarButtonItem, UIViewController;
@protocol WAMultiSelectBarDelegate;

@interface WAMultiSelectBar : UIToolbar
{
    UIBarButtonItem *_archiveButton;
    UIBarButtonItem *_delButton;
    UIBarButtonItem *_readButton;
    NSMutableSet *_selectedChats;
    UIViewController *_viewController;
    unsigned long long _multiSelectBarType;
}

- (void).cxx_destruct;
- (void)addChatSessionSelection:(id)arg1;
- (id)chatSessionsToMarkAsRead;
- (void)dismissBar;
- (void)handleArchivePress:(id)arg1;
- (void)handleDeletePress:(id)arg1;
- (void)handleReadPress:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 multiSelectBarType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)logViewStateIfNeeded:(id)arg1;
- (void)markArchivedSelectedChats:(_Bool)arg1;
- (void)refreshState;
- (void)removeChatSessionSelection:(id)arg1;
- (void)reset;
@property(readonly, nonatomic) unsigned long long selectedChatCount;
- (void)setup;
- (void)showDeleteChatsActionSheet;
- (void)updateAvailableActions;

// Remaining properties
@property(nonatomic) __weak id <WAMultiSelectBarDelegate> delegate; // @dynamic delegate;

@end

