//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, WAMessageImageLoaderInfo;

@protocol WAMessageImageLoaderDataSource <NSObject>
- (UIImage *)highResSmallImageForMessageImageLoaderWithInfo:(WAMessageImageLoaderInfo *)arg1;
- (UIImage *)largeImageForMessageImageLoaderWithInfo:(WAMessageImageLoaderInfo *)arg1;
- (_Bool)requiresNetworkFetchForLargeImageWithInfo:(WAMessageImageLoaderInfo *)arg1;
- (_Bool)shouldCacheLargeTransformedImage:(UIImage *)arg1 fromOriginalImage:(UIImage *)arg2 info:(WAMessageImageLoaderInfo *)arg3;
- (UIImage *)smallImageForMessageImageLoaderWithInfo:(WAMessageImageLoaderInfo *)arg1;
- (struct CGSize)transformedLargeImageSizeWithOriginalImageSizeInPixels:(struct CGSize)arg1;
@end
