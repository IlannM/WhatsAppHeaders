//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol WACalloutViewPresenterDelegate;

@interface WAContextMenuPresenter : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *target;
    MISSING_TYPE *contextMenuController;
    MISSING_TYPE *contextView;
    MISSING_TYPE *containerView;
    MISSING_TYPE *messageBubbleFrame;
    MISSING_TYPE *messageDirection;
    MISSING_TYPE *menuItems;
    MISSING_TYPE *blockToPerformOnFinish;
    MISSING_TYPE *$__lazy_storage_$_impactFeedbackGenerator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WACalloutViewPresenterDelegate> delegate; // @synthesize delegate;
- (id)init;
- (id)initWith:(id)arg1 containerView:(id)arg2 message:(id)arg3 frame:(struct CGRect)arg4 responder:(id)arg5;
- (void)presentFrom:(id)arg1 shouldSnapshotContextView:(_Bool)arg2 performBeforePresenting:(CDUnknownBlockType)arg3;

@end

