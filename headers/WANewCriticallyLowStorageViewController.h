//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel, UIScrollView, WALinkLabel;

@interface WANewCriticallyLowStorageViewController : UIViewController
{
    UIScrollView *_scrollView;
    UIImageView *_topImageView;
    UILabel *_mainTitleLabel;
    WALinkLabel *_mainSubtitleLabel;
    UILabel *_numberOneLabel;
    UILabel *_numberOneDescriptionLabel;
    UILabel *_numberTwoLabel;
    UILabel *_numberTwoDescriptionLabel;
    UILabel *_numberThreeLabel;
    UILabel *_numberThreeDescriptionLabel;
    UIButton *_exitButton;
}

- (void).cxx_destruct;
- (void)exitApp:(id)arg1;
- (void)setupConstraints;
- (void)viewDidLoad;

@end

