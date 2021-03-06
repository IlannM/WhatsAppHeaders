//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WAChatCellData;
@protocol WAReplyButtonsCellViewModelDelegate;

@interface WAReplyButtonsCellViewModel : NSObject
{
    WAChatCellData *_cellData;
    id <WAReplyButtonsCellViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
- (unsigned int)buttonIndexAt:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned long long buttonsCount;
@property(readonly, nonatomic) WAChatCellData *cellData; // @synthesize cellData=_cellData;
@property(nonatomic) __weak id <WAReplyButtonsCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapReplyButtonWithProtoIndex:(unsigned int)arg1 positionIndex:(unsigned long long)arg2;
- (id)initWithChatCellData:(id)arg1;
- (_Bool)isButtonSelectedForIndex:(unsigned int)arg1;
- (unsigned long long)replyButtonWidthStyleAtIndex:(unsigned int)arg1;
- (id)titleForButtonAtIndex:(unsigned int)arg1;

@end

