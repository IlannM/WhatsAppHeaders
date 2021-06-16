//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

#import "WALinkLabelDelegate-Protocol.h"

@class NSString, WAAccountReportsSectionFooterView, WATableRow, WATableSection;

@interface WAAccountReportsViewController : WAStaticTableViewController <WALinkLabelDelegate>
{
    WATableSection *_sectionGDPRReportActions;
    WATableSection *_sectionP2BReportActions;
    WATableRow *_rowGDPRActionButton;
    WATableRow *_rowGDPRDeleteReport;
    WATableRow *_rowP2BActionButton;
    WATableRow *_rowP2BDeleteReport;
    WAAccountReportsSectionFooterView *_footerViewGDPR;
    WAAccountReportsSectionFooterView *_footerViewP2B;
}

- (void).cxx_destruct;
- (void)deleteGDPRReport;
- (void)deleteP2BReport;
- (void)gdprReportDownloadFailed:(id)arg1;
- (void)gdprReportStateChanged:(id)arg1;
- (void)handleGDPRReportActionFromCell:(id)arg1;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)handleP2BReportActionFromCell:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)p2bReportDownloadFailed:(id)arg1;
- (void)p2bReportStateChanged:(id)arg1;
- (void)reallyDeleteGDPRReport;
- (void)reallyDeleteP2BReport;
- (void)requestGDPRReport;
- (void)requestP2BReport;
- (void)setUpTableView;
- (void)shareGDPRReportFromCell:(id)arg1;
- (void)shareP2BReportFromCell:(id)arg1;
- (void)updateUI;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
