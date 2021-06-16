//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIDocumentMenuDelegate-Protocol.h"
#import "UIDocumentPickerDelegate-Protocol.h"
#import "WAChatBarMenuPlugin-Protocol.h"

@class NSString, UIViewController;
@protocol WAMultiSendMediaPickerControllerDelegate><WAChatBarShareDocumentPluginDelegate;

@interface WAChatBarShareDocumentPlugin : NSObject <UIDocumentPickerDelegate, UIDocumentMenuDelegate, WAChatBarMenuPlugin>
{
    UIViewController<WAMultiSendMediaPickerControllerDelegate><WAChatBarShareDocumentPluginDelegate> *_viewController;
}

+ (_Bool)shouldShowInMenuForChatSession:(id)arg1;
- (void).cxx_destruct;
- (void)addMenuItemToActionSheet:(id)arg1 withChatSession:(id)arg2;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)initWithHostViewController:(id)arg1;
- (void)internalDocumentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)presentDocumentCannotBeSharedAlert;
- (void)presentShareDocumentController;
- (void)presentShareDocumentMenuController;
- (void)presentShareDocumentPickerController;
@property(readonly, nonatomic) __weak UIViewController<WAMultiSendMediaPickerControllerDelegate><WAChatBarShareDocumentPluginDelegate> *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

