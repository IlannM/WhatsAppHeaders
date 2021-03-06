//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WABackupViewControllerDataProviderButton : NSObject
{
    _Bool _destructive;
    NSString *_localizedText;
    CDUnknownBlockType _action;
}

+ (id)cachedAt:(id *)arg1 localizedText:(id)arg2 action:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (id)initWithLocalizedText:(id)arg1 destructive:(_Bool)arg2 action:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(readonly, nonatomic) NSString *localizedText; // @synthesize localizedText=_localizedText;

@end

