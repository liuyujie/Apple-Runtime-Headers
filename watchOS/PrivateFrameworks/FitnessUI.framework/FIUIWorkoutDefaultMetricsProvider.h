//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIUIWorkoutActivityType, NSArray;

@interface FIUIWorkoutDefaultMetricsProvider : NSObject
{
    FIUIWorkoutActivityType *_activityType;
    _Bool _supportsElevationMetrics;
    int _metricsVersion;
    NSArray *_defaultEnabledMetrics;
    NSArray *_supportedMetrics;
}

@property(readonly, copy, nonatomic) NSArray *supportedMetrics; // @synthesize supportedMetrics=_supportedMetrics;
@property(readonly, copy, nonatomic) NSArray *defaultEnabledMetrics; // @synthesize defaultEnabledMetrics=_defaultEnabledMetrics;
@property(readonly, nonatomic) int metricsVersion; // @synthesize metricsVersion=_metricsVersion;
- (void).cxx_destruct;
- (id)supportedMetricsWithIsMachineWorkout:(_Bool)arg1 activityType:(id)arg2;
- (_Bool)isMetricTypeSupported:(unsigned int)arg1 isMachineWorkout:(_Bool)arg2 activityType:(id)arg3;
- (id)appendMachineMetricsToMetrics:(id)arg1 maxNumMetrics:(int)arg2 activityType:(id)arg3;
- (id)_machineProvidedMetricsForActivityType:(id)arg1;
- (id)_supportedMetricsForActivityType:(id)arg1 metricsVersion:(int)arg2 supportsElevationMetrics:(_Bool)arg3;
- (id)_defaultPreGloryOutdoorEnabledMetricsForActivityType:(unsigned int)arg1;
- (id)_defaultGloryOutdoorEnabledMetricsForActivityType:(unsigned int)arg1 supportsElevationMetrics:(_Bool)arg2;
- (id)_defaultOutdoorEnabledMetricsForActivityType:(unsigned int)arg1 metricsVersion:(int)arg2 supportsElevationMetrics:(_Bool)arg3;
- (id)_defaultPreGloryIndoorEnabledMetricsForActivityType:(unsigned int)arg1;
- (id)_defaultGloryIndoorEnabledMetricsForActivityType:(unsigned int)arg1;
- (id)_indoorDefaultEnabledMetricsForActivityType:(unsigned int)arg1 metricsVersion:(int)arg2;
- (id)_defaultEnabledMetricsForSwimmingWithLocationType:(int)arg1 metricsVersion:(int)arg2;
- (id)_defaultEnabledMetricsForActivityType:(id)arg1 metricsVersion:(int)arg2 supportsElevationMetrics:(_Bool)arg3;
- (id)initWithMetricsVersion:(int)arg1 activityType:(id)arg2 deviceSupportsElevationMetrics:(_Bool)arg3;

@end
