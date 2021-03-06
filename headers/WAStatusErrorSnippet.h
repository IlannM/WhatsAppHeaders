//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WANotificationSnippet.h"

@class UILabel, WAStatusThumbnailView;

@interface WAStatusErrorSnippet : WANotificationSnippet
{
    WAStatusThumbnailView *_statusThumbnail;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
- (void)configureForMessage:(id)arg1 enableCardStyle:(_Bool)arg2;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (id)initWithMessage:(id)arg1 enableCardStyle:(_Bool)arg2;
@property(retain, nonatomic) WAStatusThumbnailView *statusThumbnail; // @synthesize statusThumbnail=_statusThumbnail;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

