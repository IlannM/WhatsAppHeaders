//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WAMessageAttributedTextSliceViewContentViewDelegate;

@interface WAMessageAttributedTextSliceViewContentView : UIView
{
    id <WAMessageAttributedTextSliceViewContentViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <WAMessageAttributedTextSliceViewContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (void)fillRects:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
