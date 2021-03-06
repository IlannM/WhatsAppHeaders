//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WATableViewController.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WACircleMovePresentationControllerDelegate-Protocol.h"
#import "WACustomSwipeActionsProvider-Protocol.h"
#import "WAStatusDetailCellDelegate-Protocol.h"
#import "WAStatusMessageCalloutDelegate-Protocol.h"
#import "WAStatusViewerViewControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSIndexPath, NSString, UIBarButtonItem, WACustomSwipeActionController, WAWeakTimer;

@interface WAStatusDetailViewController : WATableViewController <NSFetchedResultsControllerDelegate, UIViewControllerPreviewingDelegate, WACircleMovePresentationControllerDelegate, WACustomSwipeActionsProvider, WAStatusDetailCellDelegate, WAStatusViewerViewControllerDelegate, WAStatusMessageCalloutDelegate>
{
    _Bool _isUpdatingTable;
    _Bool _didReceiveMoveChangeEvent;
    _Bool _needsReloadData;
    _Bool _editingSingleRow;
    NSFetchedResultsController *_resultsController;
    WAWeakTimer *_timeLabelTimer;
    UIBarButtonItem *_barButtonDelete;
    UIBarButtonItem *_barButtonForward;
    NSIndexPath *_lastIndexPathPreviewedFrom3DTouch;
    WACustomSwipeActionController *_actionsController;
}

- (void).cxx_destruct;
- (id)actionsFromMessage:(id)arg1 sourceCell:(id)arg2;
- (void)calloutDidSelectDelete:(id)arg1 fromView:(id)arg2 message:(id)arg3;
- (void)calloutDidSelectForward:(id)arg1 fromView:(id)arg2 message:(id)arg3;
- (void)calloutDidSelectShareToFB:(id)arg1 fromView:(id)arg2 message:(id)arg3;
- (void)calloutDidSelectSystemShare:(id)arg1 fromView:(id)arg2 message:(id)arg3;
- (id)cellForVisibleMessage:(id)arg1;
- (void)checkTableViewForConsistency;
- (void)configureCell:(id)arg1 forMessage:(id)arg2;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (id)controller:(id)arg1 leadingSwipeActionsConfigurationForCell:(id)arg2 inTableView:(id)arg3;
- (id)controller:(id)arg1 trailingSwipeActionsConfigurationForCell:(id)arg2 inTableView:(id)arg3;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)dealloc;
- (void)deleteMessageWithIndexPath:(id)arg1;
- (void)deleteSelectedItems:(id)arg1;
- (id)destinationViewForCircleMovePresentationControllerDelegate:(id)arg1;
- (void)dismissViewController:(id)arg1 withGesture:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)forwardMessages:(id)arg1;
- (void)forwardSelectedItems:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)messageForIndexPath:(id)arg1;
- (id)navigationControllerForMessage:(id)arg1 inChatSession:(id)arg2 inChatSessions:(id)arg3 showSeenBy:(_Bool)arg4 from3DTouch:(_Bool)arg5;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentMessage:(id)arg1 inChatSession:(id)arg2 inChatSessions:(id)arg3 showSeenBy:(_Bool)arg4 animated:(_Bool)arg5;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)reallyDeleteSelectedItems;
- (void)reallyRevokeStatusMessages:(id)arg1;
- (void)revokeStatusMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleTimeLabelTimer;
- (id)selectedStatusUpdates;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)statusDetailCellDidTapDisclosureButton:(id)arg1 origin:(struct CGPoint)arg2;
- (void)statusDetailCellDidTapRetryButton:(id)arg1;
- (void)statusViewerViewController:(id)arg1 muteOrUnmuteChatSession:(id)arg2;
- (void)statusViewerViewControllerDeletePreviewedMessage:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)updateTimeLabel;
- (void)updateToolbarItemsOnSelectionChange;
- (_Bool)validateSendStateForMessages:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)wa_fontSizeDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

