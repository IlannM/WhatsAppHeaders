//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, WACDSticker;

@protocol WAStickerCategoryPresenting <NSObject>
- (WACDSticker *)itemAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfItemsInSection:(unsigned long long)arg1;
- (long long)numberOfSections;
- (NSArray *)stickers;
@end

