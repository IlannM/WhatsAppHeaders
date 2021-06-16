//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WAFoundation/WAStaticTableViewController.h>

@class NSIndexPath, NSString, UILabel, UIView, WAAutoBackupSettings;

@interface WAAutobackupSettingsViewController : WAStaticTableViewController
{
    UIView *_footerView;
    UILabel *_footerViewLabel;
    WAAutoBackupSettings *_autoBackupSettings;
    NSIndexPath *_selectedIndexPath;
}

+ (unsigned long long)autoBackupFrequencyForIndexPath:(id)arg1;
+ (id)indexForAutoBackupFrequency:(unsigned long long)arg1;
+ (_Bool)usesManagedTableViewHeaderFooter;
- (void).cxx_destruct;
@property(retain, nonatomic) WAAutoBackupSettings *autoBackupSettings; // @synthesize autoBackupSettings=_autoBackupSettings;
@property(readonly, nonatomic) NSString *bottomText;
- (id)init;
- (id)initWithAutoBackupSettings:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)newAutoLayoutAwareTableViewFooter;
- (void)selectAutoBackupFrequency:(unsigned long long)arg1;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
- (void)setUpTableView;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)updateFooterViewText;
- (void)wa_fontSizeDidChange;

@end
