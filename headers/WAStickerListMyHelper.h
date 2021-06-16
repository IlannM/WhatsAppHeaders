//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStickerListHelper-Protocol.h"

@class NSString, UIImage;

@interface WAStickerListMyHelper : NSObject <WAStickerListHelper>
{
}

@property(readonly, nonatomic) _Bool canEdit;
- (void)didTapActionButton;
@property(readonly, nonatomic) UIImage *emptyScreenImage;
@property(readonly, nonatomic) UIImage *errorScreenImage;
@property(readonly, nonatomic) NSString *errorScreenMessage;
- (id)myStickersFetchedResultsControllerWithDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool shouldHideAccessoryViewIfPossible;
- (id)stickerPackManagersWithDelegate:(id)arg1;

@end

