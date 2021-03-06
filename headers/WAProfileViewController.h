//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAProfileBaseViewController.h"

#import "WAImageToImageTransitioning-Protocol.h"
#import "WAMenuControllerCellDelegate-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"

@class NSString, WAProfileMyAboutTableRow, WATableSection;

@interface WAProfileViewController : WAProfileBaseViewController <WAImageToImageTransitioning, WANavigationControllerPopToAnimating, WAMenuControllerCellDelegate>
{
    WATableSection *_sectionPushName;
    WATableSection *_sectionPhoneNumber;
    WATableSection *_sectionMyAbout;
    WAProfileMyAboutTableRow *_rowMyAbout;
}

- (void).cxx_destruct;
- (_Bool)actionMenuCell:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
- (void)actionMenuCell:(id)arg1 performAction:(SEL)arg2 withSender:(id)arg3;
- (void)cancelAction:(id)arg1;
- (void)finishProfileEditing;
- (void)finishTransitionWithContext:(id)arg1;
- (id)headerViewHelperText;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (void)presentMyAboutEditingScreen;
@property(retain, nonatomic) WAProfileMyAboutTableRow *rowMyAbout; // @synthesize rowMyAbout=_rowMyAbout;
- (void)savePushNameToUserDefaults:(id)arg1;
@property(retain, nonatomic) WATableSection *sectionMyAbout; // @synthesize sectionMyAbout=_sectionMyAbout;
@property(retain, nonatomic) WATableSection *sectionPhoneNumber; // @synthesize sectionPhoneNumber=_sectionPhoneNumber;
@property(retain, nonatomic) WATableSection *sectionPushName; // @synthesize sectionPushName=_sectionPushName;
- (void)setUpTableView;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (_Bool)shouldShowPopupActionMenuForCell:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)updateNavigationBarButtons;
- (void)viewDidLoad;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

