//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, NSSet, UIView, WAChatSessionCellLabelsView, WAMessage, WASearchResultsMessageTableViewCellTextView, WASearchResultsMessageTableViewCellVisualMediaView, WASearchResultsNonvisualAttachmentView;
@protocol WASearchResultsMessageTableViewCellDelegate;

@interface WASearchResultsMessageTableViewCell : UITableViewCell
{
    NSArray *_labelState;
    WAMessage *_message;
    NSSet *_searchTokens;
    id <WASearchResultsMessageTableViewCellDelegate> _delegate;
    UIView *_containerView;
    UIView *_separatorView;
    WASearchResultsMessageTableViewCellTextView *_textView;
    WASearchResultsMessageTableViewCellVisualMediaView *_visualMediaView;
    WASearchResultsNonvisualAttachmentView *_nonvisualMediaView;
    WAChatSessionCellLabelsView *_labelsView;
    long long _layoutType;
    long long _documentType;
    NSLayoutConstraint *_labelsViewTopConstraint;
    NSLayoutConstraint *_labelsViewBottomConstraint;
}

+ (double)minimumHeight;
+ (id)reuseIdentifierForMessage:(id)arg1 documentType:(long long)arg2;
- (void).cxx_destruct;
- (void)configureWithSearchResultMessage:(id)arg1 searchTokens:(id)arg2 authorSearchTokens:(id)arg3 documentType:(long long)arg4 topSeparatorColor:(id)arg5 width:(double)arg6;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WASearchResultsMessageTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)didTapAttachmentView:(id)arg1;
@property(readonly, nonatomic) long long documentType; // @synthesize documentType=_documentType;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(readonly, nonatomic) WAChatSessionCellLabelsView *labelsView; // @synthesize labelsView=_labelsView;
@property(retain, nonatomic) NSLayoutConstraint *labelsViewBottomConstraint; // @synthesize labelsViewBottomConstraint=_labelsViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelsViewTopConstraint; // @synthesize labelsViewTopConstraint=_labelsViewTopConstraint;
@property(readonly, nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) UIView *mediaView;
@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
- (_Bool)messageHasAudio;
@property(readonly, nonatomic) WASearchResultsNonvisualAttachmentView *nonvisualMediaView; // @synthesize nonvisualMediaView=_nonvisualMediaView;
- (void)pausePlayingAudioIfNecessary;
- (void)prepareForReuse;
@property(readonly, nonatomic) NSSet *searchTokens; // @synthesize searchTokens=_searchTokens;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
- (_Bool)shouldIncludeDataItem;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
@property(readonly, nonatomic) WASearchResultsMessageTableViewCellTextView *textView; // @synthesize textView=_textView;
- (_Bool)textViewShouldIncludeDate;
- (void)updateLabelsView;
- (void)updateLabelsViewVConstraints;
@property(readonly, nonatomic) WASearchResultsMessageTableViewCellVisualMediaView *visualMediaView; // @synthesize visualMediaView=_visualMediaView;

@end

