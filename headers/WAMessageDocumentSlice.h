//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAMessageContainerSlice.h"

#import "WAMessageWordsHighlighting-Protocol.h"

@class NSLayoutManager, NSString, NSTextContainer, NSTextStorage, WAMessage, WASimpleAttributedTextRenderer;

@interface WAMessageDocumentSlice : WAMessageContainerSlice <WAMessageWordsHighlighting>
{
    WAMessage *_message;
    NSString *_MIMEType;
    NSString *_fileExtension;
    struct CGRect _textRect;
    NSTextStorage *_iconTextStorage;
    NSTextContainer *_iconTextContainer;
    NSLayoutManager *_iconLayoutManager;
    struct CGRect _iconTextRect;
    WASimpleAttributedTextRenderer *_textRenderer;
    _Bool _hasThumbnail;
    _Bool _mayShowProgressView;
    double _metadataSectionHeight;
}

+ (Class)viewClass;
- (void).cxx_destruct;
- (void)drawMetadataInCurrentContext;
@property(readonly, nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(readonly, nonatomic) NSString *iconImageName;
- (id)initWithMessages:(id)arg1 metrics:(id)arg2;
- (void)internalFitToWidth:(double)arg1;
@property(readonly, nonatomic) _Bool mayShowProgressView; // @synthesize mayShowProgressView=_mayShowProgressView;
@property(readonly, nonatomic) double metadataSectionHeight; // @synthesize metadataSectionHeight=_metadataSectionHeight;
- (void)setHighlightedWords:(id)arg1;
- (_Bool)showsMedia;
- (void)updateThumbnailStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

