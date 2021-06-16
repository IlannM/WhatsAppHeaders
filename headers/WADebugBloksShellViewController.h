//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

#import "WADebugBloksParamInputViewControllerDelegate-Protocol.h"

@class NSMutableOrderedSet, NSString, WADebugBloksConfig;

@interface WADebugBloksShellViewController : WAStaticTableViewController <WADebugBloksParamInputViewControllerDelegate>
{
    WADebugBloksConfig *_shellConfig;
    NSMutableOrderedSet *_recentlyOpenedConfigs;
}

- (void).cxx_destruct;
- (void)addNewBloksConfigViewPressed;
- (void)debugBloksParamInputViewController:(id)arg1 didFinishBloksConfig:(id)arg2;
- (id)init;
- (void)loadRecentlyOpenedConfigs;
- (void)openAddUpdateBloksConfigViewWithConfig:(id)arg1;
- (void)openBloksViewWithConfig:(id)arg1;
@property(retain, nonatomic) NSMutableOrderedSet *recentlyOpenedConfigs; // @synthesize recentlyOpenedConfigs=_recentlyOpenedConfigs;
- (void)saveRecentlyOpenedConfigs;
@property(retain, nonatomic) WADebugBloksConfig *shellConfig; // @synthesize shellConfig=_shellConfig;
- (void)setUpTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
