//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@protocol WAArchivedChatsNUXTableViewCellDelegate;

@interface WAArchivedChatsNUXTableViewCell : UITableViewCell
{
    id <WAArchivedChatsNUXTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)closeAction:(id)arg1;
@property(nonatomic) __weak id <WAArchivedChatsNUXTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)setupViews;

@end

