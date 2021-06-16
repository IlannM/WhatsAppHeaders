//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAContactGridViewController;

@protocol WAContactGridViewControllerDelegate <NSObject>

@optional
- (void)contactGridViewController:(WAContactGridViewController *)arg1 didDeselectContactAtIndex:(unsigned long long)arg2;
- (void)contactGridViewController:(WAContactGridViewController *)arg1 didSelectContactAtIndex:(unsigned long long)arg2;
- (void)contactGridViewController:(WAContactGridViewController *)arg1 didTapCallButtonIsVideo:(_Bool)arg2;
- (void)contactGridViewController:(WAContactGridViewController *)arg1 requestedToDeleteContactAtIndex:(unsigned long long)arg2;
@end

