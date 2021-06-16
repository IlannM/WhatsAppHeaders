//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WATableViewSupplementaryView.h"

#import "WATableViewSupplementaryViewDelegate-Protocol.h"

@class NSArray, WAChatListViewController, WATableViewSupplementaryAction;

@interface WAChatListHeaderView : WATableViewSupplementaryView <WATableViewSupplementaryViewDelegate>
{
    NSArray *_actions;
    WATableViewSupplementaryAction *_archivedAction;
    WAChatListViewController *_viewController;
}

- (void).cxx_destruct;
- (id)detailStringForAction:(id)arg1;
- (id)initWithChatViewController:(id)arg1;
- (_Bool)shouldUseArchiveUI;
- (struct WASupplementaryActionLayout)supplementaryActionLayout;
- (id)supplementaryActions;
- (void)updateArchiveRelatedUI:(id)arg1;
- (void)updateSupplementaryActions;

@end

