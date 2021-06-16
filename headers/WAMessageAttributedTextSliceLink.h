//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSTextCheckingResult;

@interface WAMessageAttributedTextSliceLink : NSObject <NSCopying>
{
    NSString *_accessibilityHint;
    NSArray *_rects;
    NSTextCheckingResult *_textCheckingResult;
    NSString *_text;
}

+ (id)textSliceLinkWithCheckingResult:(id)arg1 rects:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *rects; // @synthesize rects=_rects;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSTextCheckingResult *textCheckingResult; // @synthesize textCheckingResult=_textCheckingResult;

@end

