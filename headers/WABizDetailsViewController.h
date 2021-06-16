//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "WACatalogSectionHandlerDelegate-Protocol.h"

@class NSMutableArray, NSString, WABizProfile, WABizVerifiedNameInfo, WACatalogSectionHandler, WATableRow, WATableSection, WAUserJID;

@interface WABizDetailsViewController : WAStaticTableViewController <MFMailComposeViewControllerDelegate, WACatalogSectionHandlerDelegate>
{
    WAUserJID *_jid;
    WABizProfile *_bizProfile;
    WABizVerifiedNameInfo *_vNameInfo;
    _Bool _profilePictureNeedsLayout;
    WATableSection *_sectionName;
    WATableRow *_rowName;
    WATableSection *_sectionInfo;
    WATableRow *_rowHours;
    WATableRow *_rowLocation;
    WATableRow *_rowVertical;
    NSMutableArray *_rowWebsites;
    WATableRow *_rowEmail;
    WATableSection *_sectionSocial;
    NSMutableArray *_rowSocialProfiles;
    WACatalogSectionHandler *_catalogSectionHandler;
}

- (void).cxx_destruct;
- (void)addIcon:(id)arg1 toTableViewCell:(id)arg2;
- (void)bizProfileDidUpdate:(id)arg1;
- (void)catalogSectionHandler:(id)arg1 addSection:(id)arg2;
- (void)catalogSectionHandler:(id)arg1 didCreateRow:(id)arg2 atIndex:(long long)arg3;
- (void)catalogSectionHandler:(id)arg1 didCreateSection:(id)arg2;
- (id)catalogSectionHandlerCurrentSections:(id)arg1;
- (double)catalogSectionHandlerHeaderWidth:(id)arg1;
- (void)contactsStorageDidUpdateContacts:(id)arg1;
- (void)createInfoSection;
- (void)createNameSection;
- (void)createSocialProfilesSection;
- (id)initWithJID:(id)arg1 bizProfile:(id)arg2 vNameInfo:(id)arg3;
- (void)insertBizProductCatalogSectionIfNeeded;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)setUpTableView;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateEmailRow;
- (void)updateNameRow;
- (void)updateSocialRow:(id)arg1 withSocialProfile:(id)arg2;
- (void)updateWebsiteRow:(id)arg1 withURL:(id)arg2;
- (void)verifiedNameDidUpdate:(id)arg1;
- (void)viewDidLoad;
- (void)viewLocationWithData:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

