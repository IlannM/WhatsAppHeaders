//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAStatusLinkPreviewContent : NSObject
{
}

@property(readonly, copy, nonatomic) NSString *buttonText;
@property(readonly, copy, nonatomic) NSString *displayURL;
- (void)fetchImageWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasThumbnail;
- (id)initPrivate;
- (_Bool)isWebPage;
@property(readonly, copy, nonatomic) NSString *snippet;
@property(readonly, copy, nonatomic) NSString *title;

@end

