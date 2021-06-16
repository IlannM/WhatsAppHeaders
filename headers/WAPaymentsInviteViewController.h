//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAQRCodeDetectedViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WASheetSizeProviding-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UILabel, UIStackView, UITapGestureRecognizer, UIView, WAActivityIndicatorView, WAExactTimer;

@interface WAPaymentsInviteViewController : WAQRCodeDetectedViewController <UIGestureRecognizerDelegate, WASheetSizeProviding>
{
    WAExactTimer *_hideActivityTimer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    double _currentTopLength;
    double _currentBottomLength;
    struct CGPoint _currentGesturePoint;
    _Bool _viewsAreSet;
    _Bool _canSwipeToDismiss;
    _Bool _canOutsideTapToDimiss;
    NSLayoutConstraint *_containerViewWidth;
    NSLayoutConstraint *_containerViewTopConstraint;
    NSLayoutConstraint *_containerViewBottomConstraint;
    UIView *_containerView;
    UIView *_backgroundView;
    UIStackView *_successView;
    UILabel *_successTitleLabel;
    UILabel *_successDescriptionLabel;
    UIButton *_buttonGoToPayments;
    UIButton *_buttonSuccessDone;
    UIStackView *_errorView;
    UIButton *_buttonOK;
    UILabel *_errorTitleLabel;
    UILabel *_errorDescriptionLabel;
    UIStackView *_activityView;
    UILabel *_activityTextLabel;
    UIButton *_buttonCancelActivity;
    WAActivityIndicatorView *_activityIndicator;
    double _activityStarted;
    CDUnknownBlockType _completionBlock;
    NSArray *_separatorHeight;
    NSArray *_separators;
}

+ (id)controller;
- (void).cxx_destruct;
@property(retain, nonatomic) WAActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) double activityStarted; // @synthesize activityStarted=_activityStarted;
@property(retain, nonatomic) UILabel *activityTextLabel; // @synthesize activityTextLabel=_activityTextLabel;
@property(retain, nonatomic) UIStackView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *buttonCancelActivity; // @synthesize buttonCancelActivity=_buttonCancelActivity;
@property(nonatomic) __weak UIButton *buttonGoToPayments; // @synthesize buttonGoToPayments=_buttonGoToPayments;
@property(retain, nonatomic) UIButton *buttonOK; // @synthesize buttonOK=_buttonOK;
@property(nonatomic) __weak UIButton *buttonSuccessDone; // @synthesize buttonSuccessDone=_buttonSuccessDone;
- (void)cancelActivityAction:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak NSLayoutConstraint *containerViewBottomConstraint; // @synthesize containerViewBottomConstraint=_containerViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *containerViewTopConstraint; // @synthesize containerViewTopConstraint=_containerViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerViewWidth; // @synthesize containerViewWidth=_containerViewWidth;
- (void)dismissErrorAction:(id)arg1;
- (void)doneAction:(id)arg1;
@property(retain, nonatomic) UILabel *errorDescriptionLabel; // @synthesize errorDescriptionLabel=_errorDescriptionLabel;
@property(retain, nonatomic) UILabel *errorTitleLabel; // @synthesize errorTitleLabel=_errorTitleLabel;
@property(retain, nonatomic) UIStackView *errorView; // @synthesize errorView=_errorView;
- (void)goToPaymentsAction:(id)arg1;
- (void)handleDidCancelDuringValidation;
- (void)handleTapToDismissGesture:(id)arg1;
- (void)hideActivityIndicatorWithCompletion:(CDUnknownBlockType)arg1;
- (void)panned:(id)arg1;
- (void)presentErrorViewWithTitle:(id)arg1 description:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFromViewController:(id)arg1;
- (void)presentSuccessViewWithTitle:(id)arg1 description:(id)arg2 actionBtnTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)runCompletionBlockDidTapActionButton:(_Bool)arg1;
@property(copy, nonatomic) NSArray *separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(copy, nonatomic) NSArray *separators; // @synthesize separators=_separators;
- (void)setCanOutsideTapToDismiss:(_Bool)arg1;
- (void)setCanSwipeToDismiss:(_Bool)arg1;
@property(nonatomic) __weak UILabel *successDescriptionLabel; // @synthesize successDescriptionLabel=_successDescriptionLabel;
@property(nonatomic) __weak UILabel *successTitleLabel; // @synthesize successTitleLabel=_successTitleLabel;
@property(nonatomic) __weak UIStackView *successView; // @synthesize successView=_successView;
- (void)setupViews;
- (double)sheetHeight;
- (void)showActivityIndicatorWithText:(id)arg1 withOptionToCancel:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

