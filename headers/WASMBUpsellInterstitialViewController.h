//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

#import "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSString, UIView;

@interface WASMBUpsellInterstitialViewController : WAStaticTableViewController <UIAdaptivePresentationControllerDelegate>
{
    UIView *_headerView;
    NSString *_officialBusinessName;
}

+ (_Bool)usesManagedTableViewHeaderFooter;
- (void).cxx_destruct;
- (void)addCloseButton;
- (void)closeButtonTapped:(id)arg1;
- (id)init;
- (id)initWithOfficialBusinessName:(id)arg1;
- (void)installButtonTapped;
- (void)logClick;
- (void)logDismissal;
- (void)logImpression;
- (id)newAutoLayoutAwareTableViewFooter;
- (id)newAutoLayoutAwareTableViewHeader;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setUpTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

