//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WANoChatsView.h"

@protocol WAEmptyCallListViewDelegate;

@interface WAEmptyCallListView : WANoChatsView
{
    id <WAEmptyCallListViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)actions;
@property(nonatomic) __weak id <WAEmptyCallListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)helperTextWithFont:(id)arg1;

@end

