//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WATableViewSupplementaryAction : NSObject
{
    NSString *_title;
    UIImage *_image;
    CDUnknownBlockType _actionHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithTitle:(id)arg1 image:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;

@end

