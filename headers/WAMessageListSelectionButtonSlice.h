//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageButtonsSlice.h"

@class NSString, WAPBMessage_ListMessage;

@interface WAMessageListSelectionButtonSlice : WAMessageButtonsSlice
{
    WAPBMessage_ListMessage *_listMessage;
}

+ (Class)viewClass;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *buttonTitle;
- (id)initWithMessages:(id)arg1 metrics:(id)arg2;
- (void)internalFitToWidth:(double)arg1;

@end

