//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WALoadingTableViewCell.h>

#import "WAMessageSearchPreparingTextControllerDelegate-Protocol.h"

@class NSString, WAMessageSearchPreparingTextController;

@interface WAPreparingMessagesTableViewCell : WALoadingTableViewCell <WAMessageSearchPreparingTextControllerDelegate>
{
    WAMessageSearchPreparingTextController *_controller;
}

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)messageSearchPreparingTextControllerDidUpdateText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

