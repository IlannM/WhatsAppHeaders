//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class WANewContactPropertyCell, WAUserJID;

@protocol WANewContactPropertyCellDelegate
- (void)newContactPropertCellDidBeginEditing:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertCellDidEndEditing:(WANewContactPropertyCell *)arg1;
- (_Bool)newContactPropertCellShouldReturn:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertCellValueDidChange:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCell:(WANewContactPropertyCell *)arg1 requestContactViewControllerForUserJID:(WAUserJID *)arg2;
- (void)newContactPropertyCellDidCollapse:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellDidExpand:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellNeedResize:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellRequestAddressCountryPicker:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellRequestCountryPicker:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellRequestLabelPicker:(WANewContactPropertyCell *)arg1;
@end
