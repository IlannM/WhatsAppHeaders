//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WABizSMBUpsellBannerFooterViewDelegate;

@interface WABizSMBUpsellBannerFooterView : UIView
{
    UIView *_dividerLineView;
    _Bool _dividerLineHidden;
    id <WABizSMBUpsellBannerFooterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WABizSMBUpsellBannerFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapInstallButton:(id)arg1;
@property(nonatomic) _Bool dividerLineHidden; // @synthesize dividerLineHidden=_dividerLineHidden;
- (id)init;

@end
