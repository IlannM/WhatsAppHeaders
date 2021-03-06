//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAMapView.h>

#import "MKMapViewDelegate-Protocol.h"

@class MKCompassButton, NSString;

@interface WAShareLocationMapView : WAMapView <MKMapViewDelegate>
{
    long long _selectionToken;
    MKCompassButton *_compass;
    _Bool _navigationBarHidden;
}

- (void).cxx_destruct;
- (void)calloutTapped:(id)arg1;
- (void)configure;
- (_Bool)instantDrag;
- (void)layoutCompass;
- (void)layoutSubviews;
- (void)map2dButtonWillToggle;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
- (_Bool)shouldHaveStaticPinButton;
- (double)sideButtonInset;
- (_Bool)topAlignButtons;
- (double)topButtonInset;
- (_Bool)useNewStaticPin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

