//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView;

@interface WASMBUpsellInstallTableViewCell : UITableViewCell
{
    UIView *_containerView;
    UILabel *_headerLabel;
    UILabel *_detailsLabel;
    UIButton *_actionButton;
    CDUnknownBlockType _installActionBlock;
}

- (void).cxx_destruct;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType installActionBlock; // @synthesize installActionBlock=_installActionBlock;
- (void)installButtonTapped:(id)arg1;
- (void)setUpActionButton;
- (void)setUpConstraints;
- (void)setUpContainerView;
- (void)setUpDetailsLabel;
- (void)setUpHeaderLabel;
- (void)setUpUI;

@end

