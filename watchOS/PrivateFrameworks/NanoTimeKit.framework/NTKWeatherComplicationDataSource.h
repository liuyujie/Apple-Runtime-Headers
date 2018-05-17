//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKSelectedLocationWeatherMonitorObserver.h"

@class NSObject<OS_dispatch_queue>, NSString, NTKSelectedLocationWeatherMonitor;

@interface NTKWeatherComplicationDataSource : NSObject <NTKSelectedLocationWeatherMonitorObserver>
{
    _Bool _debugLastUpdateTimeEnabled;
    NTKSelectedLocationWeatherMonitor *_weatherMonitor;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isDebugLastUpdateTimeEnabled) _Bool debugLastUpdateTimeEnabled; // @synthesize debugLastUpdateTimeEnabled=_debugLastUpdateTimeEnabled;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NTKSelectedLocationWeatherMonitor *weatherMonitor; // @synthesize weatherMonitor=_weatherMonitor;
- (void).cxx_destruct;
- (void)_readDebugLastUpdateTimeEnabledPref;
- (void)_unregisterForDebugLastUpdateTimeEnabledPrefNotitification;
- (void)_registerForDebugLastUpdateTimeEnabledPrefNotitification;
- (id)_entryForFamily:(int)arg1 weatherComplicationType:(int)arg2 conditions:(id)arg3;
- (id)_temperatureConditionsStringForData:(id)arg1 allowsDisplayOfTemperatureUnit:(_Bool)arg2;
- (id)_temperatureStringForConditions:(id)arg1 allowsDisplayOfTemperatureUnit:(_Bool)arg2;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineEntriesForFamily:(int)arg1 afterDate:(id)arg2 limit:(unsigned int)arg3 weatherComplicationType:(int)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getTimelineEntriesForFamily:(int)arg1 beforeDate:(id)arg2 limit:(unsigned int)arg3 weatherComplicationType:(int)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getCurrentTimelineEntryForFamily:(int)arg1 weatherComplicationType:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getDesiredUpdateIntervalWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)selectedLocationUpdatedOnWeatherMonitor:(id)arg1;
- (void)localeChanged:(id)arg1;
- (void)forecastUpdatedOnWeatherMonitor:(id)arg1;
- (void)displayNameUpdatedOnWeatherMonitor:(id)arg1;
@property(readonly, nonatomic) NSString *observerName;
@property(readonly, nonatomic) unsigned int loggingCategory;
- (void)_performBlockAsyncOnWorkQueue:(CDUnknownBlockType)arg1;
- (void)_postUpdateNotification;
- (id)complicationApplicationIdentifier;
- (void)resume;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
