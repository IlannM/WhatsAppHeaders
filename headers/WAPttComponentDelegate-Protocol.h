//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAPttComponent;

@protocol WAPttComponentDelegate <NSObject>
- (void)pttComponentDidFinishProcessingRecording:(WAPttComponent *)arg1;
- (void)pttComponentDidStopRecording:(WAPttComponent *)arg1;
- (_Bool)pttComponentHostWasOpenedFromURL:(WAPttComponent *)arg1;
- (void)pttComponentWillSendRecording:(WAPttComponent *)arg1;
@end

