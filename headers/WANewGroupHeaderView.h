//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIImage, UILabel, UISwitch, UITextField;

@interface WANewGroupHeaderView : UIView <UITextFieldDelegate>
{
    _Bool _ignoreKVONotificationsForButtonState;
    UIImage *_image;
    CDUnknownBlockType _editPictureHandler;
    UITextField *_textField;
    UISwitch *_internalDogfoodingSwitch;
    UIView *_contentView;
    UIView *_pictureContainerView;
    UIButton *_buttonAddPhoto;
    UIButton *_buttonEditPhoto;
    UIButton *_buttonEditPhotoText;
    UILabel *_helperText;
    NSArray *_contentViewMarginsConstraints;
    NSLayoutConstraint *_textFieldTopBorderHeight;
    NSLayoutConstraint *_textFieldBottomBorderHeight;
    UIView *_topBorderView;
    UIView *_bottomBorderView;
    UIView *_textViewContainerView;
    UILabel *_subjectLengthLabel;
    UILabel *_internalDogfoodingLabel;
    struct UIEdgeInsets _additionalContentInsets;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets additionalContentInsets; // @synthesize additionalContentInsets=_additionalContentInsets;
@property(nonatomic) __weak UIView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(retain, nonatomic) UIButton *buttonAddPhoto; // @synthesize buttonAddPhoto=_buttonAddPhoto;
@property(retain, nonatomic) UIButton *buttonEditPhoto; // @synthesize buttonEditPhoto=_buttonEditPhoto;
@property(retain, nonatomic) UIButton *buttonEditPhotoText; // @synthesize buttonEditPhotoText=_buttonEditPhotoText;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSArray *contentViewMarginsConstraints; // @synthesize contentViewMarginsConstraints=_contentViewMarginsConstraints;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)editGroupPictureAction:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType editPictureHandler; // @synthesize editPictureHandler=_editPictureHandler;
- (void)fontSizeDidChange:(id)arg1;
@property(retain, nonatomic) UILabel *helperText; // @synthesize helperText=_helperText;
@property(nonatomic) _Bool ignoreKVONotificationsForButtonState; // @synthesize ignoreKVONotificationsForButtonState=_ignoreKVONotificationsForButtonState;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialViewSetup;
@property(retain, nonatomic) UILabel *internalDogfoodingLabel; // @synthesize internalDogfoodingLabel=_internalDogfoodingLabel;
@property(retain, nonatomic) UISwitch *internalDogfoodingSwitch; // @synthesize internalDogfoodingSwitch=_internalDogfoodingSwitch;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) UIView *pictureContainerView; // @synthesize pictureContainerView=_pictureContainerView;
- (double)preferredHeightForWidth:(double)arg1;
@property(retain, nonatomic) UILabel *subjectLengthLabel; // @synthesize subjectLengthLabel=_subjectLengthLabel;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSLayoutConstraint *textFieldBottomBorderHeight; // @synthesize textFieldBottomBorderHeight=_textFieldBottomBorderHeight;
@property(retain, nonatomic) NSLayoutConstraint *textFieldTopBorderHeight; // @synthesize textFieldTopBorderHeight=_textFieldTopBorderHeight;
@property(nonatomic) __weak UIView *textViewContainerView; // @synthesize textViewContainerView=_textViewContainerView;
@property(nonatomic) __weak UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
- (void)setupFonts;
- (void)setupInternalDogfoodingView;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldEditingChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateAccessibilityLayout;
- (void)updateConstraints;
- (void)updateInterfaceOnImageChange;
- (void)updateSubjectLength;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

