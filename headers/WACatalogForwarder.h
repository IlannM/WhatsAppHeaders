//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMultiSendMediaSendProcessorDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIViewController, WAChatViewController, WAMediaPickerStats, WAMultiSendMediaSendProcessor, WAProductImageLoader;

@interface WACatalogForwarder : NSObject <WAMultiSendMediaSendProcessorDelegate>
{
    WAChatViewController *_chatViewController;
    WAMultiSendMediaSendProcessor *_processor;
    NSMutableDictionary *_completionDictionary;
    WAMediaPickerStats *_mediaPickerStats;
    WAProductImageLoader *_imageLoader;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (id)captionForProductDescriptor:(id)arg1 compact:(_Bool)arg2;
- (void)convertPlaceholderItemToActualItemDidFailedWithIndex:(long long)arg1;
- (void)convertPlaceholderItemToActualItemDidSuccessWithOldMediaItem:(id)arg1 toNewMediaItem:(id)arg2;
- (id)createForwardPicker;
- (void)exportAndPrepareOldMediaItem:(id)arg1 toNewMediaItem:(id)arg2;
- (void)forwardCatalogMessage:(id)arg1;
- (void)forwardProductImage:(id)arg1 imageURL:(id)arg2 productDescriptor:(id)arg3;
- (void)handleTextForwardingResult:(id)arg1;
- (void)hasConvertedItemWhenCancelExport;
- (id)initWithViewController:(id)arg1;
- (id)mediaPickerStats;
- (void)presentForwardControllerWithImage:(id)arg1 imageURL:(id)arg2 productDescriptor:(id)arg3;
- (void)processImage:(id)arg1 fileURL:(id)arg2 productDescriptor:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendMediaItemToChatSessions:(id)arg1 mediaItems:(id)arg2 withProduct:(id)arg3 stats:(id)arg4 attachments:(id)arg5;
- (void)sendMediaItems:(id)arg1 withProduct:(id)arg2 toContacts:(id)arg3 pickerStatistics:(id)arg4;
- (void)sendProcessAndExportFinishSuccessWithProcessedItems:(id)arg1 mediaPickerStats:(id)arg2;
- (void)sendProcessFinishSuccessWithProcessedItems:(id)arg1;
- (void)sendProcessFinishWithErrorMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendProductCatalogImage:(id)arg1 toBusinessOwnerUserJID:(id)arg2 productDescriptor:(id)arg3 presentingViewController:(id)arg4 session:(id)arg5;
- (void)sendProductCatalogImage:(id)arg1 toChatJID:(id)arg2 productDescriptor:(id)arg3 presentingViewController:(id)arg4 session:(id)arg5;
- (void)sendProductMessageToChatSession:(id)arg1 image:(id)arg2 imageURL:(id)arg3 productDescriptor:(id)arg4 attachments:(id)arg5;
- (void)sendProductMessageToContacts:(id)arg1 image:(id)arg2 imageURL:(id)arg3 productDescriptor:(id)arg4;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (_Bool)shouldShowProgressViewDuringMediaExport;
- (void)showErrorMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)showingProgressViewOnThisViewController;
- (void)transitionToChatForContact:(id)arg1 viewController:(id)arg2;
- (void)userCancelledAllExport;
- (_Bool)wantSaveMediaToCameraRoll;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

