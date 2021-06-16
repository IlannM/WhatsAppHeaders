//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class WAActivityViewController;

@interface WAActivityViewControllerPresenter : UIViewController
{
    _Bool _activityControllerWasPresented;
    WAActivityViewController *_activityViewController;
    CDUnknownBlockType _completionWithItemsHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
- (void)applicationDidEnterBackground:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionWithItemsHandler; // @synthesize completionWithItemsHandler=_completionWithItemsHandler;
- (void)dismissViewControllers;
- (id)initWithActivityItems:(id)arg1 sourceViewOrBarButtonItem:(id)arg2 applicationActivities:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

