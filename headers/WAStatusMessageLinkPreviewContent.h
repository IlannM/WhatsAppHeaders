//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAStatusLinkPreviewContent.h"

@class WAMessage;

@interface WAStatusMessageLinkPreviewContent : WAStatusLinkPreviewContent
{
    WAMessage *_message;
}

- (void).cxx_destruct;
- (id)displayURL;
- (void)fetchImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasThumbnail;
- (id)initWithMessage:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)snippet;
- (id)title;

@end

