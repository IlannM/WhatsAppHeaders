//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIProgressView, WABackupIcon;

@interface WARestoreCellContentView : UIView
{
    _Bool _showProgressView;
    UILabel *_labelTitle;
    UIProgressView *_progressView;
    UILabel *_labelError;
    WABackupIcon *_backupIcon;
}

+ (id)loadFromNib;
- (void).cxx_destruct;
- (void)awakeFromNib;
@property(retain, nonatomic) WABackupIcon *backupIcon; // @synthesize backupIcon=_backupIcon;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) UILabel *labelError; // @synthesize labelError=_labelError;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool showProgressView; // @synthesize showProgressView=_showProgressView;
- (void)updateAnimation;
- (void)updateColors;
- (void)updateFonts;

@end

