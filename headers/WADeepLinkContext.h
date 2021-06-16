//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WADeepLinkContext : NSObject
{
    long long _origin;
    NSString *_sourceApplication;
}

+ (id)externalContextWithSourceApplication:(id)arg1;
+ (id)inAppNavigationContext;
+ (id)qrCodeContext;
- (void).cxx_destruct;
- (id)initWithOrigin:(long long)arg1 sourceApplication:(id)arg2;
@property(readonly, nonatomic, getter=isInAppNavigation) _Bool inAppNavigation;
@property(readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;

@end

