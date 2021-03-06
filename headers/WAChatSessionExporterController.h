//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActivityItemSource-Protocol.h"

@class NSString, NSURL, WAChatSessionExporter, WAProgressAlertController;

@interface WAChatSessionExporterController : NSObject <UIActivityItemSource>
{
    WAChatSessionExporter *_exporter;
    WAProgressAlertController *_progressController;
    NSURL *_exportedURL;
}

+ (void)exportChatSession:(id)arg1 withMedia:(_Bool)arg2 fromView:(id)arg3 inViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithChatSession:(id)arg1;
- (void)performExportWithMedia:(_Bool)arg1 fromView:(id)arg2 inViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shareExportedFileURL:(id)arg1 fromView:(id)arg2 inViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

