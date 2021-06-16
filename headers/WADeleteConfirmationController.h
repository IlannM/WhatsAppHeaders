//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAViewController.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol WADeleteConfirmationControllerDelegate;

@interface WADeleteConfirmationController : WAViewController
{
    UIView *_spinnerBackgroundView;
    NSString *_feedbackText;
    id <WADeleteConfirmationControllerDelegate> _delegate;
    NSArray *_separatorViews;
    NSArray *_separatorHeights;
    NSLayoutConstraint *_headerViewTop;
    UIView *_headerView;
    UILabel *_headerText;
    UIScrollView *_contentScrollView;
    UIView *_mainContentView;
    UILabel *_titleText;
    UILabel *_bodyText;
    UIImageView *_imageSadPhone;
    UIButton *_deleteAccountButton;
}

+ (id)controllerWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *bodyText; // @synthesize bodyText=_bodyText;
- (void)cancelAction:(id)arg1;
@property(nonatomic) __weak UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak id <WADeleteConfirmationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteAccountAction:(id)arg1;
@property(nonatomic) __weak UIButton *deleteAccountButton; // @synthesize deleteAccountButton=_deleteAccountButton;
@property(copy, nonatomic) NSString *feedbackText; // @synthesize feedbackText=_feedbackText;
@property(nonatomic) __weak UILabel *headerText; // @synthesize headerText=_headerText;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak NSLayoutConstraint *headerViewTop; // @synthesize headerViewTop=_headerViewTop;
- (void)hideSpinnerWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak UIImageView *imageSadPhone; // @synthesize imageSadPhone=_imageSadPhone;
@property(nonatomic) __weak UIView *mainContentView; // @synthesize mainContentView=_mainContentView;
- (void)presentDeleteAccountNetworkRequiredAlert;
- (void)presentDeleteAccountUnableToDeleteAlert;
@property(copy, nonatomic) NSArray *separatorHeights; // @synthesize separatorHeights=_separatorHeights;
@property(copy, nonatomic) NSArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(nonatomic) __weak UILabel *titleText; // @synthesize titleText=_titleText;
- (void)setupDeleteAccountButtonBackground;
- (void)showSpinner;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end

