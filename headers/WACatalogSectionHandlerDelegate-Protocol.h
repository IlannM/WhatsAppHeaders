//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, WACatalogSectionHandler, WATableRow, WATableSection;

@protocol WACatalogSectionHandlerDelegate
- (void)catalogSectionHandler:(WACatalogSectionHandler *)arg1 addSection:(WATableSection *)arg2;
- (void)catalogSectionHandler:(WACatalogSectionHandler *)arg1 didCreateRow:(WATableRow *)arg2 atIndex:(long long)arg3;
- (void)catalogSectionHandler:(WACatalogSectionHandler *)arg1 didCreateSection:(WATableSection *)arg2;
- (NSArray *)catalogSectionHandlerCurrentSections:(WACatalogSectionHandler *)arg1;
- (double)catalogSectionHandlerHeaderWidth:(WACatalogSectionHandler *)arg1;
@end

