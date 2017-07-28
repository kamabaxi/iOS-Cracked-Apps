//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMLocationManager.h"

#import "TencentLBSLocationManagerDelegate.h"

@class NSString, TencentLBSLocationManager;

@interface MMTencentLocationManager : MMLocationManager <TencentLBSLocationManagerDelegate>
{
    TencentLBSLocationManager *_locationManager;
}

@property(retain, nonatomic) TencentLBSLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)tencentLBSLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)stopLocationService;
- (void)startLocationService;
- (void)requestAlwaysAuthorization;
- (void)requestWhenInUseAuthorization;
- (void)setCoordinateType:(unsigned long long)arg1;
- (void)setHeadingFilter:(double)arg1;
- (void)setAllowsBackgroundLocationUpdates:(_Bool)arg1;
- (void)setPausesLocationUpdatesAutomatically:(_Bool)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
