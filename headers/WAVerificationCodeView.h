//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, WALinkLabel, WAUserJID;

@interface WAVerificationCodeView : UIView
{
    UILabel *_codeLabel;
    struct CGSize _boundsSize;
    _Bool _needsReloadText;
    unsigned long long _numberRemoteCompanions;
    unsigned long long _numberLocalCompanions;
    WALinkLabel *_helperTextLabel;
    NSString *_formattedCode;
    WAUserJID *_userJID;
}

+ (id)helperTextFontOfSize:(double)arg1;
+ (id)verificationCodeFontOfSize:(double)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *formattedCode; // @synthesize formattedCode=_formattedCode;
- (id)getFAQURL;
- (id)getHelperTextLabel;
- (unsigned long long)getNumberLocalCompanions;
- (unsigned long long)getNumberRemoteCompanions;
@property(readonly, nonatomic) WALinkLabel *helperTextLabel; // @synthesize helperTextLabel=_helperTextLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadTextIfNeeded;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsReloadText;
@property(copy, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;

@end

