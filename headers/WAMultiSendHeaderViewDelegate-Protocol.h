//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAMultiSendHeaderView;

@protocol WAMultiSendHeaderViewDelegate <NSObject>
- (_Bool)isAutoCropInteractionPossibleForMultiSendHeaderView:(WAMultiSendHeaderView *)arg1;
- (_Bool)isCroppingPossibleForMultiSendHeaderView:(WAMultiSendHeaderView *)arg1;
- (_Bool)isDeletePossibleForMultiSendHeaderView:(WAMultiSendHeaderView *)arg1;
- (_Bool)isRedoPossibleForMultiSendHeaderView:(WAMultiSendHeaderView *)arg1;
- (_Bool)isShowingContentPickerForMultiSendHeaderView:(WAMultiSendHeaderView *)arg1;
- (_Bool)isUndoPossibleForMultiSendHeaderView:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderView:(WAMultiSendHeaderView *)arg1 didSelectFontType:(int)arg2;
- (void)multiSendHeaderView:(WAMultiSendHeaderView *)arg1 didUpdateAutoCropInteractionProgress:(double)arg2;
- (double)multiSendHeaderViewCaptionBarHeight:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidCancelAutoCropInteraction:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidCancelFilterInteraction:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidChangeBrushColor:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidChangeBrushSize:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidChangeMode:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidCommitAutoCropInteraction:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidEndAutoCropInteraction:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidRequestAddNewTextItem:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidRequestCancel:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidRequestDelete:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidRequestDismissContentPicker:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidRequestFinishEditingTextItem:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidRequestPresentContentPicker:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidRequestRedo:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewDidRequestUndo:(WAMultiSendHeaderView *)arg1;
- (void)multiSendHeaderViewWillBeginAutoCropInteraction:(WAMultiSendHeaderView *)arg1;
@end

