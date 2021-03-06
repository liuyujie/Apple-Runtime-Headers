//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLGeocoder, CLLocation, CLLocationManager, CLPlacemark, EKCalendarVisibilityManager, EKEvent, EKEventStore, NSArray, NSObject<OS_dispatch_queue>, NSString, RTLocationOfInterest, RTRoutineManager;

@interface DNDLifetimeDetailsProvider : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _monitoringLifetimes;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    RTRoutineManager *_routineManager;
    RTLocationOfInterest *_relevantLOI;
    CLGeocoder *_geocoder;
    CLPlacemark *_relevantPlacemark;
    EKEventStore *_eventStore;
    EKCalendarVisibilityManager *_calendarVisibilityManager;
    EKEvent *_relevantEvent;
    NSArray *_availableLifetimeDetails;
    id <DNDLifetimeDetailsProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDLifetimeDetailsProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *availableLifetimeDetails; // @synthesize availableLifetimeDetails=_availableLifetimeDetails;
- (void).cxx_destruct;
- (void)_requestRelevantEvent;
- (void)_queue_requestLifetimeDetails;
- (void)_queue_gotPlacemark:(id)arg1 forLocation:(id)arg2;
- (void)_queue_gotLocationOfInterest:(id)arg1 forLocation:(id)arg2;
- (void)_queue_requestRelevantLocationMetadataForLocation:(id)arg1;
- (void)_requestRelevantLocationMetadata;
- (id)_lifetimeDetailsUntilEveningOrMorningForDate:(id)arg1;
- (void)_queue_rebuildAvailableLifetimeDetails;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)lifetimeDetailsWithMetadataForAssertionDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)lifetimeDetailsForAssertionDetails:(id)arg1 error:(id *)arg2;
- (id)lifetimeForLifetimeDetails:(id)arg1 error:(id *)arg2;
- (void)stopUpdatingLifetimeDetailMetadata;
- (void)startUpdatingLifetimeDetailMetadata;
- (void)stopUpdatingLifetimeDetails;
- (void)startUpdatingLifetimeDetails;
- (void)requestLifetimeDetails;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

