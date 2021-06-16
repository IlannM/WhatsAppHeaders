//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WADialogViewController.h>

@protocol WAStatusComposerNUXDelegate;

@interface WAStatusComposerNUX : WADialogViewController
{
    id <WAStatusComposerNUXDelegate> _delegate;
}

+ (_Bool)canMarkFirstStatus;
+ (_Bool)hasSentFirstStatus;
+ (id)headerViewForStatusHelperDialog;
+ (void)setSentFirstStatus;
+ (_Bool)shouldShowStatusHelperDialog;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAStatusComposerNUXDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

