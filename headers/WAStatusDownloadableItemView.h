//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAStatusZoomableMediaItemView.h"

#import "WAMediaTransferProgressViewDelegate-Protocol.h"

@class NSString, WAMessage;

@interface WAStatusDownloadableItemView : WAStatusZoomableMediaItemView <WAMediaTransferProgressViewDelegate>
{
    double _loadStartTime;
    double _totalLoadTime;
    _Bool _isLoading;
    long long _downloadStatus;
}

- (_Bool)canTransitionToDownloadStatus:(long long)arg1;
- (void)didSetItem;
@property(nonatomic) long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isLoading;
- (double)loadTime;
- (_Bool)managingOwnTiming;
- (void)mediaDownloadDidFail;
- (void)mediaDownloadDidFail:(id)arg1;
- (void)mediaDownloadDidSucceed;
- (void)mediaDownloadDidSucceed:(id)arg1;
- (void)mediaDownloadProgressDidChange;
- (void)mediaDownloadProgressDidChange:(id)arg1;
- (void)mediaTransferProgressView:(id)arg1 didReceiveTapEvent:(unsigned long long)arg2;
@property(readonly, nonatomic) WAMessage *message;
- (void)prepareForReuse;
- (void)rewind;
- (void)setDownloadStatus:(long long)arg1 animated:(_Bool)arg2;
- (void)updateDownloadStatusAfterMessageChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
