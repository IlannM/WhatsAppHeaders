//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UITableView, UITableViewCell, WAContact, WAContactTableViewCell, WAForwardPickerDataSource;
@protocol WAChatSessionProtocol;

@protocol WAForwardPickerDataSourceDelegate <NSObject>
- (void)forwardPickerDataSourceDidChangeContent:(WAForwardPickerDataSource *)arg1;
- (_Bool)forwardPickerDataSourceShouldProhibitFrequentlyForwardedMessage:(WAForwardPickerDataSource *)arg1;
- (WAContactTableViewCell *)tableView:(UITableView *)arg1 cellForContact:(WAContact *)arg2 chatSession:(id <WAChatSessionProtocol>)arg3 atIndexPath:(NSIndexPath *)arg4;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForStatusAtIndexPath:(NSIndexPath *)arg2;
@end

