//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WABloksViewController.h"

@class WABloksNavigationHandler, WABloksPayloadContainer;

@interface WABloksBottomSheetContentViewController : WABloksViewController
{
    WABloksNavigationHandler *_hostingNavigationHandler;
    WABloksPayloadContainer *_viewContainer;
    CDUnknownBlockType _onDismiss;
}

- (void).cxx_destruct;
- (id)createBloksContext;
- (id)initWithViewContainer:(id)arg1 hostingNavigationHandler:(id)arg2 navigationBarConfiguration:(id)arg3 onDismiss:(CDUnknownBlockType)arg4;
- (void)updatePreferredContentSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;

@end
