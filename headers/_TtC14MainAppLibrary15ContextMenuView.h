//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC14MainAppLibrary15ContextMenuView : UIView <UIGestureRecognizerDelegate>
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *menuContainers;
    MISSING_TYPE *curMenuIdx;
    MISSING_TYPE *primaryMenuItems;
    MISSING_TYPE *deleteMenuItem;
    MISSING_TYPE *secondaryMenuItems;
    MISSING_TYPE *devMenuItems;
    MISSING_TYPE *$__lazy_storage_$_selectionFeedbackGenerator;
    MISSING_TYPE *highlightedRow;
    MISSING_TYPE *scale;
    MISSING_TYPE *primaryActions;
    MISSING_TYPE *secondaryActions;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)performMoreRowAction;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

