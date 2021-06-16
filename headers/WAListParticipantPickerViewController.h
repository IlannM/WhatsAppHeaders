//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAParticipantPickerViewController.h"

@class UILabel, WAParticipantPickerConfiguration;

@interface WAListParticipantPickerViewController : WAParticipantPickerViewController
{
    UILabel *_broadcastListWarning;
    WAParticipantPickerConfiguration *_config;
    unsigned long long _type;
}

- (void).cxx_destruct;
- (void)configureCell:(id)arg1 forContact:(id)arg2;
- (id)initWithType:(unsigned long long)arg1;
- (void)reloadContacts;
- (void)setContactGridHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)updateContactSelection:(id)arg1 shouldClearSearch:(_Bool *)arg2 sourceView:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;

@end

