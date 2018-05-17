//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, RTDeviceLocationPredictor, RTEventManager, RTLearnedLocationManager, RTLearnedLocationOfInterest, RTLocationManager, RTVisitManager;

@interface RTActionManager : NSObject
{
    RTLearnedLocationOfInterest *_currentLocationOfInterest;
    RTDeviceLocationPredictor *_deviceLocationPredictor;
    RTLocationManager *_locationManager;
    RTEventManager *_eventManager;
    RTVisitManager *_visitManager;
    RTLearnedLocationManager *_learnedLocationManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTLearnedLocationManager *learnedLocationManager; // @synthesize learnedLocationManager=_learnedLocationManager;
@property(retain, nonatomic) RTVisitManager *visitManager; // @synthesize visitManager=_visitManager;
@property(retain, nonatomic) RTEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor; // @synthesize deviceLocationPredictor=_deviceLocationPredictor;
- (void).cxx_destruct;
- (void)provideFeedbackForAction:(id)arg1 engagementResult:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)stopMonitoringPredictedConditionsForAction:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startMonitoringPredictedConditionsForAction:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchPredictedConditionsForActionWithLocationRestriction:(id)arg1 dateInterval:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchPredictedConditionsForActionWithCalendarRestriction:(id)arg1 dateInterval:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchPredictedConditionsForAction:(id)arg1 dateInterval:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedConditionsForAction:(id)arg1 dateInterval:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_handleLowConfidenceVisitIncident:(id)arg1;
- (void)onLowConfidenceVisitNotification:(id)arg1;
- (id)initWithDeviceLocationPredictor:(id)arg1 learnedLocationManager:(id)arg2 locationManager:(id)arg3 eventManager:(id)arg4 visitManager:(id)arg5;
- (id)init;

@end
