//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WATableViewController.h>

@class NSArray, WAWeakTimer;

@interface WALiveLocationPrivacyViewController : WATableViewController
{
    CDUnknownBlockType _chatSessionProvider;
    NSArray *_activeChatSessions;
    WAWeakTimer *_timer;
    _Bool _needsUpdate;
}

+ (id)controllerWithChatSessionProvider:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 chatSessionProviders:(CDUnknownBlockType)arg2;
- (id)needsBackgroundLocationString;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)reloadDataLater;
- (id)tableHeaderView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateActiveChatSessions;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;
- (id)youArentSharingString;

@end

