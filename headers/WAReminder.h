//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, EKEventStore, EKReminder, NSString;

@interface WAReminder : NSObject <CLLocationManagerDelegate>
{
    NSString *_title;
    EKEventStore *_store;
    EKReminder *_reminder;
    CLLocationManager *_locationManager;
    _Bool _didRequestLocationUpdates;
}

- (void).cxx_destruct;
- (id)createReminderWithStore:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)remindAfterTimeInterval:(double)arg1;
- (void)remindWhenLeaving;
- (void)requestAccessWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestLocationUpdates;
- (void)saveReminder;
- (void)saveReminderUsingGeolocation:(id)arg1 potentialPlacemark:(id)arg2;
- (void)showLocationPermissionsAlertView;
- (void)showReminderPermissionsAlertView;
- (void)showUnableToCreateReminderError;
- (void)updateReminderWithLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

